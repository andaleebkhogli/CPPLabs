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
	char* getName(void);
	int getGrade(void);

	//MY NEW FUNCTIONS
	friend ostream &operator<<(ostream &out, student st);
	friend istream &operator>>(istream &out, student &st);
};
// 1stOne NEW
ostream &operator<<(ostream &out, student st)
{
	out<<"ID: "<<st.id<<endl;
	out<<"Name: "<<st.name<<endl;
	out<<"grade: "<<st.grade<<endl;
	return out; // OR RETURN COUT BS ASHEL REF MN FOO2 GANB KELMET OUT
}
// 2ndOne NEW
istream &operator>>(istream &in, student &st)
{
	in>>st.id;
	in>>st.name;
	in>>st.grade;
	return in;
}



int main()
{

	student myStudent;

	cin>>myStudent;
	cout<<myStudent;

	getch();
	return 0;
}
