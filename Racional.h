#ifndef RACIONAL_H
#define RACIONAL_H

class Racional
{

private:
	int n;
	int d;
public:
	int getN();
	int getD();
	void setN(int);
	void setD(int);

	//Entre racionales
	Racional& operator+(Racional&);
	Racional& operator-(Racional&);
	Racional& operator*(Racional&);
	Racional& operator/(Racional&);

	//con Enteros
	Racional& operator+(int&);
	Racional& operator-(int);
	Racional& operator*(int);
	Racional& operator/(int);

	void GCD(Racional&);
	Racional();
	~Racional();
	
};
#endif