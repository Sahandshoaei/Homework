#include <iostream>
#include<conio.h>
 using namespace std ;
 int bmm (int m , int n ){
 	if (n==0){
 		return m ;
	 }
	 else {
	 	return (n, m%n);
	 }
 }

int main() {
	int num1,num2;
	cout << " enter number 1 : ";
	cin >> num1;
	cout <<" enter number 2 :  ";
	cin >> num2;
	
	cout << " BMM is :   " << bmm(num1,num2);
	getch();
}
