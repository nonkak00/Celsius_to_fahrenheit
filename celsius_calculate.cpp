#include<iostream>
using namespace std ;
void main ()
{
	float c, f ;
	cout << "Enter Celsius temperature : " ;
	cin >> c ;
	f = c * 1.80 + 32 ;
	cout << "\nFahrenheit = " << f << endl ;
	cout << "Now weather in Thailand is " << ((f >= 70) == 1 ? "HOT!!" : "COOL!!" ) << endl ;
}