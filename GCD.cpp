#include "GCD.h"


GCD::GCD(){

}

int GCD::getDivisor(int n, int d){
	int menor;
	int mayor;
	int temp_menor;
	int temp_mayor;
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
	for (int i = 1; i <= menor; ++i)
	{
		temp_menor = i * menor;
		for (int i = 1; i <= mayor; ++i)
		{
			temp_mayor = i *mayor;	
		}
		if (temp_mayor == temp_menor)
		{
			return temp_menor;
		}
	}

	return 0;
}