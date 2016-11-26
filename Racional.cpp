#include "Racional.h"

Racional::Racional(){

}

int Racional::getN(){
	return n;
}

int Racional::getD(){
	return d;
}

void Racional::setN(int n){
	this->n = n;
}

void Racional::setD(int d){
	this->d = d;
}

/*-------------------------------------------------------------
	OPERACIONES ENTRE RACIONALES
-------------------------------------------------------------*/

Racional& Racional::operator+(Racional& ra){
	Racional* resp = new Racional();
	int new_n , new_d;
	if(this->d != ra.getD()){
		GCD(ra);
		new_n = this->getN() + ra.getN();
		new_d = this->getD();
	}else{
		new_n = this->getN() + ra.getN();
		new_d = this->getD();
	}

	resp->setN(new_n);
	resp->setD(new_d);

	return *resp;
}

Racional& Racional::operator-(Racional& ra){
	Racional* resp = new Racional();
	int new_n , new_d;
	if(this->d != ra.getD()){
		GCD(ra);
		new_n = this->getN() - ra.getN();
		new_d = this->getD();
	}else{
		new_n = this->getN() - ra.getN();
		new_d = this->getD();
	}

	resp->setN(new_n);
	resp->setD(new_d);

	return *resp;
}

Racional& Racional::operator*(Racional& ra){
	int new_n = this->n * ra.getN();
	int new_d = this->d * ra.getD();
	Racional* resp = new Racional();
	resp->setN(new_n);
	resp->setD(new_n);
	return *resp;
}

Racional& Racional::operator/(Racional& ra){
	int new_n = this->n * ra.getD();
	int new_d = this->d * ra.getN();
	Racional* resp = new Racional();
	resp->setN(new_n);
	resp->setD(new_d);
	return *resp;
}

void Racional::GCD(Racional& ra){
	int temp_1 = this->d;
	int temp_2 = ra.getD();
	int new_d = this->d * ra.getD();
	this->n = this->n * temp_2;
	ra.setN(ra.getN() * temp_1);
	this-> d = new_d;
	ra.setD(new_d);
}

/*-------------------------------------------------------------
	OPERACIONES ENTRE RACIONAL Y UN ENTERO
------------------------------------------------------------*/
#include <iostream>
using namespace std;

Racional& Racional::operator+(int& entero){
	Racional* resp = new Racional();
	entero = (entero * this->d);
	resp->setN(entero + this->n);
	resp->setD(this->d);

	return *resp;
}

Racional& Racional::operator-(int entero){
	Racional* resp = new Racional();
	entero = entero * this->d;
	resp->setD(this->d);
	resp->setN(entero - this->n);
	return *resp;
}

Racional& Racional::operator*(int entero){
	Racional* resp = new Racional();
	resp->setD(this->d);
	resp->setN(this-> n * entero);
	return *resp;
}

Racional& Racional::operator/(int entero){
	Racional* resp = new Racional();
	resp->setD(this->d * entero);
	resp->setN(this-> n);

	return *resp;
}




Racional::~Racional(){

}