#include<iostream>
#include<conio.h>

class base
{
	protected:
	int z;

	public:

	base()
	{
		z=0;
	}

	base(int m)
	{
		z=m;
	}

	void setZ(int m)
	{
		z = m;
	}

	int getZ()
	{
		return z;
	}
};

class base1 : virtual public base
{
	protected:
	int x;

	public:
	base1()
	{
		x=0;
	}

	base1(int m)
	{
		x = m;
	}

	void setX(int m)
	{
		x = m;
	}
	int getX()
	{
		return x;
	}
};

class base2 : virtual public base
{
	protected:
	int y;


	public:
	base2()
	{
		y=0;
	}

	base2(int n)
	{
		y = n;
	}

	void setY(int n)
	{
		y = n;
	}
	int getY()
	{
		return y;
	}
};

class derived : public base1, public base2
{
	public:
	derived()
	{

	}
	derived(int a, int b,int c) : base2(a), base1(b),base(c)// a3dl f di 3shan akhod aktr mn qema
	{

	}
	int product()
	{
		return(x*y*z);
	}

};

int main()
{
	derived drv(30, 20,2);
	cout<<drv.product();

	getch();
	return 0;
}