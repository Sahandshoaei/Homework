#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int power(int a,int b){
int p = 1;
	for(int i=1; i<=b; i+=2){
		p = p*a;
	}
	return p;
}

int fact(int m){
	int f = 1;
	for(int i=1; i <= m; i+=2){
		f = f*i;
	}
	return f;
}

int sin(int m , int x){
	double t , s = 0;
	for(int i=1; i<m; i+=2){
		t = power(x,i)/fact(i);
		s = s + t;
		s = s - t;
	}
	return s;
}

int cos(int m , int x){
	double t , c = 0;
	for(int i=1; i<m; i+=2){
		t = power(x,i)/fact(i);
		c = c + t;
		c = c - t;
	}
	return c; 
}
float tan(int s , int c){
	
	float tan;
	int m ;
	tan = sin(m)/cos(m);
	return tan;	
}
	
int main(){
	
	int m , x ;
	cout << " m = ";
	cin >> m;
	cout << " x = ";
	cin >> x;
	cout << sin(m);
	cout << endl;
	cout << cos(m);
	cout << endl;
	cout << tan(m);
	getch();
}
