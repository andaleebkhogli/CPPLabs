#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>

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
	out<<st.id<<endl;
	out<<st.name<<endl;
	out<<st.grade<<endl;
	return out;
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
	cout<<"Please enter your ID, Name, Grade"<<endl;
	//cin>>myStudent;


	fstream obj;
	obj.open("C:\\BORLANDC\\MYSTUDENT.TXT", ios::in);
	obj>>myStudent;
    obj.close();
	cout<<myStudent;




	getch();
	return 0;
}
