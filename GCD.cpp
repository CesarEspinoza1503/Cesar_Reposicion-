#include "GCD.h"


GCD::GCD(){

}

int GCD::getDivisor(int n, int d){
	int menor;
	int mayor;
	int temp;
	if(n < d){
		menor = n;
		mayor = d;
	} 
	if(n > d){
		menor = d;
		mayor = n;
	}
	if(n == d){
		return n;
	}

	for (int i = 0; i <= menor; ++i)
	{
		if(menor % i == 0){
			temp = menor;
		}
	}
	for (int i = 0; i <= mayor; ++i)
	{
		int residuo =mayor % i;
		if (residuo == temp)
		{
			return temp;
		}
	}
	return -1;
}