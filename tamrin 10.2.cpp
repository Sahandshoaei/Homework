#include <iostream>
#include<conio.h>
using namespace std ;
int power (int x,int y){
     if (y==0){
    	return 1 ;
	}
	else {
		return x * power(x,y-1);
	}
}
int main(){
	int a,b;
	cout << " number :  " ;
	cin >> a ;
	cout << " exponent : " ;
	cin >> b ;
	cout << " result is :  " << power (a,b);
	getch();
}
