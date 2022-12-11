#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int m,n,sum=1;
	cout<<"enter number:";
	cin>>m;
	cout<<"enter exponent:";
	cin>>n;
	for(int i=1;i<=n;i++){
	
		sum*=m;
		
	}
	cout<<sum;

	getch();
}
