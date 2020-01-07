#include<iostream>
using namespace std;
#include<cmath>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class point
{
	int x,y;

	public:
	point()
	{
		x=y=0;
	}
	point(int m)
	{
	 x = y = m;
	}
	point(int m, int n)
	{
		x=m;
		y=n;
	}
	void setX(int m)
	{
		x=m;
	}
	void setY(int n)
	{
		y=n;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};

class AggRect
{
	point p1, p2;
	int length, width;

	public:                                 // THIS IS INHERITANCE PART
	AggRect(int x1, int y1, int x2, int y2):p1(x1, y1) , p2(x2, y2)
	{
	 length = abs(x2 - x1);
	 width = abs(y2 - y1);

	}

	void setP1 (int x, int y)
	{
		p1.setX(x);
		p1.setY(y);
		length = abs(x-p2.getX());
		width = abs(y-p2.getY());
	}

	void setP2 (int x, int y)
	{
		p2.setX(x);
		p2.setY(y);
		length = abs(x-p2.getX());
		width = abs(y-p2.getY());
	}

	int circumference()
	{
		return(2*(length + width));

	}

	int area()
	{
		return((length * width));
	}
};
 /*
		------------------- AGGREGATION ---------------

class circle
{
	point p1, p2;
	float r;

	public:
	circle(int x1, int y1, int x2, int y2):p1(x1, y1) , p2(x2, y2)
	{
	 r = sqrt( pow(x1-x2, 2)+pow(y1-y2 , 2));
	}

	float area()
	{
		return (3.14 * r * r);
	}

	float circumference()
	{
		return(2 * 3.14 *r);
	} */


	// -------------------- LAB 6 ASSOCIATION IN CIRCLE-------------
	class circle
{
	point *p1, *p2;  // TURN THEM INTO POINTERS
	float r;

	public:
	circle()  // 1st
	{
		p1=p2=NULL;
		r = 0;
	}

	circle(point *pt1, point *pt2) //
	{
		p1=pt1;
		p2=pt2;

		if(p1 && p2)
		{
			r = sqrt(pow(p2->getX()-p1->getX(), 2) + pow(p2->getY()-p1->getY() , 2));
		}
		else
		{
			r=0;
		}

	}

	void setP1(point * pt1)
	{
		p1=pt1;
	}

	void setP2(point * pt2)
	{
		p2=pt2;
	}

	float area()
	{
		return (3.14 * r * r);
	}

	float circumference()
	{
		return(2 * 3.14 *r);
	}

};

int main()
{
	//AggRect r(10, 20, 70, 100);
	//clrscr();


	/*cout<<"Your rectangle is area"<<r.area()<<endl;
	cout<<"Your cf is"<<r.circumference()<<endl;*/

   /*	circle c(10 , 20 , 30 , 40);
	cout<<"your circle area is"<<c.area()<<endl;
	cout<<"your circle circumference is"<<c.circumference()<<endl;

   */

   // -------------------- LAB 6 ASSOC TESTING -------------------
   point pa(10,20) , pb(7);

   circle c(&pa ,&pb);
   cout<<"your circle area is "<<c.area()<<endl;
   cout<<"your circle area is"<<c.circumference()<<endl;

	//getch();
	return 0;
}
