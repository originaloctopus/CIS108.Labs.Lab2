// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string bookTitle, author;
	int publishYr, pgTotal;
	constexpr int _2019 = 2019;
	
	cout << "Enter a book title: \n"; 
	getline(cin, bookTitle);
	cin >> bookTitle;
	
	cout << "Enter the book's author's name: \n";
	getline(cin, author);
	cin >> author;

	cout << "Enter the book's year of publishing: \n";
	cin >> publishYr;

	cout << "Enter the book's total number of pages: \n";
	cin >> pgTotal;

	{if (_2019 - publishYr <= 10)
		cout << "This book is younger than 10 years old. \n";
	else
		cout << "This book is at least 10 years old. \n";
	}

	{if (pgTotal <= 100)
		cout << "This book is a short book. \n";
	else if (101 <= pgTotal <= 300)
		cout << "This book is an average book. \n";
	else (pgTotal <= 300);
		cout << "This book is a long book. \n";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
