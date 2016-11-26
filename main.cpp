#include <iostream>
#include "Racional.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Racional* primera = new Racional();
	Racional* segunda = new Racional();
	int opcion;
	int n1 , d1 , n2, d2, entero;
	cout<<"--------------------------------------------------"<<endl;
	cout<<"					Reposicion"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	
	do
	{
		cout<<"					MENU"<<endl;
		cout<<"1)Suma entre Racionales"<<endl<<"2)Resta Entre Racionales"<<endl
		<<"3)Multiplicacion entre Racionales"<<endl<<"4)Division Entre Racionales"<<endl
		<<"5)Suma Racional + Entero"<<endl<<"6)Resta Racionales - Entero"<<endl
		<<"7)Multiplicacion Racionales * Entero"<<endl<<"8)Division Racionales / Entero"<<endl
		<<"9)SALIR"<<endl;
		cin>>opcion;
		if (opcion==1)
		{
			cout<<"Ingrese Numerador y Denominador del primer Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numerador y Denominador del segundo Racional (Separados por un Espacio)"<<endl;
			cin>>n2;
			cin>>d2;
			primera->setN(n1);
			primera->setD(d1);
			segunda->setN(n2);
			segunda->setD(d2);
			Racional resp = *primera + *segunda;
			cout<<"La suma es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}
		if (opcion==2)
		{
			cout<<"Ingrese Numerador y Denominador del primer Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numerador y Denominador del segundo Racional (Separados por un Espacio)"<<endl;
			cin>>n2;
			cin>>d2;
			primera->setN(n1);
			primera->setD(d1);
			segunda->setN(n2);
			segunda->setD(d2);
			Racional resp = *primera - *segunda;
			cout<<"La Resta es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}
		if (opcion==3)
		{
			cout<<"Ingrese Numerador y Denominador del primer Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numerador y Denominador del segundo Racional (Separados por un Espacio)"<<endl;
			cin>>n2;
			cin>>d2;
			primera->setN(n1);
			primera->setD(d1);
			segunda->setN(n2);
			segunda->setD(d2);
			Racional resp = (*primera) * (*segunda);
			cout<<"La Multiplicacion es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}
		if (opcion==4)
		{
			cout<<"Ingrese Numerador y Denominador del primer Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numerador y Denominador del segundo Racional (Separados por un Espacio)"<<endl;
			cin>>n2;
			cin>>d2;
			primera->setN(n1);
			primera->setD(d1);
			segunda->setN(n2);
			segunda->setD(d2);
			Racional resp = *primera / *segunda;
			cout<<"La Division es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}

		/*RACIONALES CON ENTEROS*/
		if (opcion==5)
		{
			cout<<"Ingrese Numerador y Denominador del Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numero Entero: "<<endl;
			cin>>entero;
			primera->setN(n1);
			primera->setD(d1);
			Racional resp = *primera + entero;
			cout<<"La Suma es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}
		if (opcion==6)
		{
			cout<<"Ingrese Numerador y Denominador del Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numero Entero: "<<endl;
			cin>>entero;
			primera->setN(n1);
			primera->setD(d1);
			Racional resp = *primera - entero;
			cout<<"La Resta es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}
		if (opcion==7)
		{
			cout<<"Ingrese Numerador y Denominador del Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numero Entero: "<<endl;
			cin>>entero;
			primera->setN(n1);
			primera->setD(d1);
			Racional resp = *primera * entero;
			cout<<"La Multiplicacion es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}
		if (opcion==8)
		{
			cout<<"Ingrese Numerador y Denominador del Racional (Separados por un Espacio)"<<endl;
			cin>>n1;
			cin>>d1;
			cout<<"Ingrese Numero Entero: "<<endl;
			cin>>entero;
			primera->setN(n1);
			primera->setD(d1);
			Racional resp = *primera / entero;
			cout<<"La Division es de:"<<endl;
			cout<<resp.getN()<<" / "<<resp.getD()<<endl;
		}

	} while (opcion!=9);
	return 0;
}