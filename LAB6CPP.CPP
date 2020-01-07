#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>
class person
{
	protected:
	int id;
	char name[50];

	public:
	person()
	{
		id = 0;
		strcpy(name,"no name");
	}

	person(int d)
	{
		id = d;
		strcpy(name,"no name");
	}
	person(char n[])
	{
	   strcpy(name,n);
	}

	person(int d, char n[])
	{
	   id = d;
	   strcpy(name, n);
	}

	void setID(int d)
	{
		id = d;
	}


	int getID()
	{
		return id;
	}

	void setName(char n[])
	{
		strcpy(name , n);
	}
	char* getName()
	{
		return name;
	}


};


class customer: public person
{
	protected:
	char email[50];

	public:
	customer() // def cust
	{
		strcpy(email, "youremail@domain.com");
	}
	customer(int d , char n[] ,char e[]): person(d, n)
	{
	  strcpy(email, e);
	}


	void setEmail(char e[])
	{
		strcpy(email, e);
	}

	char* getEmail()
	{
		return email;
	}
};
class employee : public person
{
	protected:
	int salary;

	public:
	employee()
	{
		salary =0;
	}

	employee(int d, char n[], int s): person(d,n)
	{
		salary = s;
	}

	void setSalary(int s)
	{
		salary = s;
	}

	int getSalary()
	{
		return salary;
	}
};

int main()
{
	employee e(3," Ali ",5000);

	cout<<e.person::getID()<<e.person::getName()<<e.getSalary()<<endl;

	customer c(2," Amr" , " amr@gmail.com ");

	cout<<c.person :: getID()<<c.person :: getName()<<c.getEmail();
	//getch();
	return 0;
}
