#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,e;
    cout << "Enter a 4-digit number: ";
    cin >>a;

   
    if ( a>= 1000 && a<= 9999) 
	{
        cout<<"Orignal Form= "<<a;
        b=a%10;
        a=a/10;
        c=a%10;
        a=a/10;
        d=a%10;
        a=a/10;
        e=a%10;
    	cout<<"\nReverse form = "<<b<<c<<d<<e;
    	
    } 
	else 
	{
        cout << "Please enter a valid 4-digit number." ;
    }

    return 0;
}

