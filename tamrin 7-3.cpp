#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int n,i,a,b;
	cout<<"enter a number:";
	cin>>n;
	a=0;
	for(i=2;i<=n/2;i++){
		if(n%i==0)
		b=i+a;
		a=b;
	
	}
	cout<<b;
	getch();
}
