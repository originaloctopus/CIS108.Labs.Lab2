

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age, agePlus, tempF, tempC;

    cout << "Enter your age: \n";
	cin >> age;

	agePlus = age + 10;

	cout << "Right now you may be " << age << ", but in 10 years you'll be: " 
		<< agePlus << ". \n";
	
	cout << "What's the current temperature in Fahrenheit?";
	cin >> tempF;

	tempC = ((tempF - 32)*(5 / 9));
	cout << "The current temperature in Celsius is " << tempC << " degrees.";


}

