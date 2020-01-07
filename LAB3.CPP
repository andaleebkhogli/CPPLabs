#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>

/*
class student gowah id w *name;
constructor for
 1.default
 2.to input id only
 3.to input name only
 4.to input both
 5.copy constructor
 6.destructor
*/

class student
{
	int id;
	char* name;
	int grade;
	// ------ lab 5 -----------
	static int count;
	static char uni[20];

	public:
	//setter el awl
	void setID(int d);
	void setGrade(int g);
	void setName(char n[20]);

	//getters then

	int getID(void);
	char* getName(void);
	int getGrade(void);

	// ----------lab 4 implementation----------------

	student & operator =(student &st); // 1 st1=st2?
	student operator +(student st); // 2 st + st
	friend student operator+ (int n, student st); // 3 7+st
	student operator +(int r); // 4 st + 5
	student operator +(char r[]);  //5 st + name
	friend student operator+ (char r[] , student st); // 6 name+st
	student operator ++ ();// 9 pre-increment
	student operator ++ ( int d); //10 post increment
	operator int();  // 7 typecasting to int
	operator char*();  // 8 typecasting to char



	student()  // 1  default
	{
	  id = 0;
	  name = new  char[20]; // da5ala 3la ad el esm eli da5el bas
	  strcpy(name,"no name");
	  grade = 0;
	  count++;

	}

	student(int d) //2  ll id
	{
	  id = d;
	  name = new char[20];
	  strcpy(name,"no name");
	  count++;

	}

	student(char n[]) //3 ll name
	{
		id =0;
		name = new char[strlen(n)+1];
		strcpy(name, n);
		count++;

	}

	student(int d, char n[]) // lehom homa l etnen
	{
	  id = d;
	  name = new char[strlen(n)+1];
	  strcpy(name , n);
	  count++;
	}

	student(student&rst);  // copy constructor prototype ktbah bara

	~student() // destructor
	{
		delete name;
		count--;
	}
                            // ---------    GETTERS -------------
	static int getCount()   // lab5
	{
		return count;
	}
                            // -------- SETTERS ----------
	static void setUni( char n[])  // set of un
	{
	   //	uni = new char[strlen(n)+1];
		strcpy(uni , n);
	}

	static char* getUni()   // get of uni
	{
		return uni;
	}


};

int student :: count = 0;
char student :: uni[] = "ITI";

student ::student(student &rst) // el cpy constructor
{
  id = rst.id;
  name = new char[strlen(rst.name)+1]; // stlen btrg3 int f azwd w7d 3leh
  strcpy(name, rst.name);
  grade = rst.grade;
  count++;
}

void student:: setID(int d)
	{
		id = d ;
	}

void student:: setGrade(int g)
	{
		grade = g;
	}

void student:: setName(char n[20])
	{
		delete name;  // bnmsa7 pointer bta3 name
		name = new char[strlen(n)+1];
		strcpy(name , n);
	}

int student:: getID(void)
	{
	 //cout<<"The student id is "<<id<<endl;

	 return id;
	}

int student :: getGrade(void)
	{
		return grade;
	}

char* student:: getName(void)
	{
		//cout<<"Student name is "<<name<<endl;
		return name;
	}

student fillstudent(void)
	{
		student s;
		int i,j;
		char k[20];


		cout<<"Please enter your id "<<endl;
		cin>>i;
		s.setID(i);

		cout<<"Please enter your name "<<endl;
		cin>>k;
		s.setName(k);

		cout<<"Please enter your grade"<<endl;
		cin>>j;
		s.setGrade(j);

		return s;

	}

void printstudent(student s)
	{


		cout<<"The student id is "<<s.getID()<<endl;
		cout<<"The student name is "<<s.getName()<<endl;
		cout<<"The student grade is "<<s.getGrade()<<endl;
	}

	//  --------------Implementation of 4th lab------- ---------------------

	student & student :: operator = (student &st)  //1--  st1 = st2
	{
		id = st.id;
		delete name;
		name = new char[strlen(st.name)+1];
		strcpy(name, st.name);
		grade= st.grade;

		return st; // or return *st if no reference was up there

	}

	student student :: operator + (student st) //2--  st + st
	{
		student temp;
		temp.grade = grade + st.grade;
		return temp;
	}

	student operator+ (int n, student st) // 3-- 11 + st
		{
			student temp;
			temp.grade = n+st.grade;
			return temp;
		}

	student student :: operator +(int r) // 4-- st + 11
	{
		student temp;
		temp.grade = grade + r;
		return temp;
	}

	student student :: operator +(char r[]) // 5-- st + "Ahmed"
	{
		student temp;
		int size = strlen(name) + strlen(r);
		temp.name = new char[size +1];
		strcpy(temp.name,name);
		strcat(temp.name,r);
		return temp;
	}

	student operator+ (char r[] , student st) // 6-- "Ahmed" + st
	{
		student temp;
		int size = strlen(r) + strlen(st.name);
		temp.name = new char [size +1];
		//temp.name = strcat( r , st.name);
		strcpy(temp.name, r);
		strcat(temp.name,st.name);
		return temp;
	}


	student student :: operator ++ () // 9-- pre increment ++st
	{
		grade++;
		return *this;
	}

	student student :: operator ++ (int d) // 10-- post increment st++
	{
	  student old;
	  old = *this;
	  ++(*this);
	  return old;
	}

	student :: operator int()  // 7 typecasting int
	{
		return grade;
	}

	student :: operator char*() // 8 typecasting name
	{
		return name;
	}

int main()
{



	student st1;// st2; // el count hyzed m3 3dd l objects
	// la2eno byro7 ll default w y3do 3ady 7ata lw mst5dmtsh l obj da zy s2
	//student t1;
	//clrscr();

	//st1 = fillstudent();
	//st2 = fillstudent();

   //	t1 = st1 = st2;   // 1

   //	t1 = st1 + st2;   // 2

   //	t1 = 100 + st1;   //3

   //	t1 = st1 + 100;   //4

	// t1 = st1 + " Ahmed "; //5

   //	t1 = " Ahmed " + st1; //6

   //	t1 = ++st1; // 9

   //   t1 = st1++; // 10
   cout<<"Your count is : "<<student :: getCount()<<endl;  // lab 5
   student :: setUni("Lavalevoo");
   cout<<"Your uni is : "<<student :: getUni();  // lab 5 brddoo

   //	printstudent(t1);

 //getch();
 return 0;
}
