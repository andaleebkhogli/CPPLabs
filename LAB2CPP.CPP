#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>

class student
{
	int id;
	char name[20];
	int grade;

	public:
	//setter el awl
	void setID(int d);
	void setName(char n[20]);
	void setGrade(int g);

	//getters then

	int getID(void);
	char* getName(void); // 3mlnaha pointer
	int getGrade(void);
};


student fillstudent(void);
void printstudent(student);


								 //SETTERS IMPLEMENTATION


void student:: setID(int d)
	{
		id = d ;
	}

void student:: setName(char n[20])
	{
		strcpy(name , n);
	}

void student:: setGrade(int g)
	{
		grade = g;
	}



									//GETTERS IMPLEMENTATION

int student:: getID(void)
	{
	 //cout<<"The student id is "<<id<<endl;

	 return id;
	}

char* student:: getName(void)
	{
		//cout<<"Student name is "<<name<<endl;
		return name;
	}

int student:: getGrade(void)
	{
	 //cout<<"The student grade is "<<grade<<endl;
	 return grade;
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

		cout<<"Enter your grade "<<endl;
		cin>>j;
		s.setGrade(j);

		return s;
	}

void printstudent(student s)
	{


		cout<<"The student id is "<<s.getID()<<endl;
		cout<<"The student grade is "<<s.getGrade()<<endl;
		cout<<"The student name is "<<s.getName()<<endl;
	}

int main()
{
	 //clrscr();
/*
	int i,j;
	char* k;
	clrscr();
	student s1;

	s1.setID(30);
	i=s1.getID();

	s1.setGrade(85);
	j=s1.getGrade();

	s1.setName("Ali");
	k=s1.getName();  */

	student s1;
	s1 = fillstudent();
	printstudent(s1);



	getch();
	return 0;
}




