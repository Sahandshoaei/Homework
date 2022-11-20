#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float x,y,z,a,b,c;
	cout<<"enter x:";
	cin>>x;
	cout<<"enter y:";
	cin>>y;
	cout<<"enter z:";
	cin>>z;
a=x-y;
b=x+z;
c=x+y+z;
cout<<(a*b)/((c*c)+1);
	getch();
}
