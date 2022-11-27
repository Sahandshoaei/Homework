#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
main()
{
	int n,m;
	cout<<"please enter your salary:";
	cin>>n;
	if(n<6000000){
		cout<<"6000000";
	}
	else if(n>=6000000&&n<8000000){
		m=(n*5)/100;
		n=n-m;
		cout<<n;
	}
	else if(n>=8000000&&n<10000000){
		m=(n*10)/100;
		n=n-m;
		cout<<n;
	}
	else if(n>=10000000&&n<14000000){
		m=(n*15)/100;
		n=n-m;
		cout<<n;
	}
	else if(n>=14000000&&n<18000000){
		m=(n*20)/100;
		n=n-m;
		cout<<n;
	}
	else if(n>=18000000&&n<25000000){
		m=(n*25)/100;
		n=n-m;
		cout<<n;
	}
	else if(n>=25000000){
		m=(n*35)/100;
		n=n-m;
		cout<<n;
	}
	
	getch();
}
