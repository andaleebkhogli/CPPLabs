#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string>

struct student
{
 int id;
 char name[20];
};

student fillstudent(student s);
void printstudent(student s);
int BoxVolume(int l, int w=1, int h=1);

int main()
{
	int v1, v2, v3, v4;
	//clrscr();
	v1 = BoxVolume(3,4,7);
	v2 = BoxVolume(9,5);
	v3 = BoxVolume(8);
	v4 = BoxVolume(1);

	cout<<endl<<"the value of v1, v2, v3, v4 are"<<endl<<v1<<endl<<v2<<endl<<v3<<endl<<v4;

	int *ptr;
	ptr=new int(5);

	cout<<endl<<"The value of ptr is "<<*ptr<<endl; // netba3 l 5 nfsaha

	student str; // ne2dr nnady 3latol 3la object mn gher klmt struct
	ptr = new int[7];
	delete(ptr);


	str=fillstudent(str);
	printstudent(str);
	cout<<str.id<<endl<<str.name<<endl;
	//getch();
	return 0;
}

int BoxVolume(int l, int w, int h)
{
	return(l*w*h);
}
student fillstudent(student s)
{
	cin>>s.id;
	cin>>s.name;
	return s;

}
void printstudent(student s)
{
	cout<<s.id<<endl;

	cout<<s.name;
}
