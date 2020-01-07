#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>

class shape  //Abstract class
{
	protected:
	int dim1, dim2;

	public:
	shape()
	{
		dim1=dim2=0;
	}
	shape(int m)
	{
		dim1=dim2=m;
	}
	shape(int m, int n)
	{
		dim1 = m;
		dim2 = n;
	}
	void setD1(int m)
	{
		dim1 = m;
	}
	void setD2(int n)
	{
		dim2 = n;
	}
	int getD1()
	{
		return dim1;
	}
	int getD2()
	{
		return dim2;
	}
	virtual float area() = 0;  // Virtual method
};

class circle: public shape
{
	public:
	circle()
	{ }
	circle(int r): shape(r) {}
	float area()
	{
		return (3.14*dim1*dim2);
	}
};

class rectangle: public shape
{
	public:
	rectangle() {}
	rectangle(int l, int w): shape( l,w) {}
	float area()
	{
		return (1.0*dim1*dim2);
	}
};

class triangle: public shape
{
	public:
	triangle() {}
	triangle(int b, int h): shape(b,h) {}
	float area()
	{
		return (0.5*dim1*dim2);
	}
};

class square: public rectangle // SQUARE INHERINT FROM RECTANGLE
{
	public:
	square() {}
	square(int s): rectangle(s, s) {}

};

class GeoShape
{
	protected:
	shape*p[4];

	public:
	GeoShape(shape*p1, shape*p2, shape*p3, shape*p4)  //DefaultConstructor
	{
		p[0] =p1;
		p[1] =p2;
		p[2] =p3;
		p[3] =p4;
	}

	float TotalArea()
	{
		float sum =0;
		for(int i=0; i<4; i++)
		{
			sum+= p[i]->area();
		}
		return sum;
	}
};

int main(){

	//clrscr();
	circle c(10);
	rectangle r(10,10);
	triangle t(10,10);
	square s(10);
	GeoShape g(&c , &r, &t, &s);
	cout<<g.TotalArea();


	//getch();
	return 0;
}








