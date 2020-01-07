#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>




int main()
{

fstream obj;
obj.open("C:\\BORLANDC\\andaleebfile.txt",ios::in);  // out to make the file

char Name[100]="Hello from BorlandC";

obj>>Name; // out to write in file

cout<<Name; //used with in 3shan a2ra fl shasha el soda
// bnst5dm nfs l kalam bs b cout 3shan aktb eli ana 3yzah hena w ysm3 fl file eli bara
//
obj.close();





 getch();
 return 0;
}
