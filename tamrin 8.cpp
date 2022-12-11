#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int array[10];
	int i,max,min;
	float average;
	for(i=0;i<10;i++){
		cout<<"enter the number"<<(i+1)<<":";
		cin>>array[i];
		
	}
	max=array[0];
	for(i=0;i<10;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
	min=array[0];
	for(i=0;i<10;i++){
		if(array[i]<min){
			min=array[i];
		}
	}
	average=(max+min)/2;
	cout<<"\n"<<"average of max and min is:"<<average;
	getch();
}
