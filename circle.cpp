// This is a C++ script to print a circle of asterisks.
// Inspired by an interview question I heard about Facebook
// This script prints a circle with horizontal radius of # spaces defined by user
// Works best in the 0-10 range, after that starts looking a bit oval-y
// At the bottom is my first attempt which foolishly printed diamonds
// Leeson Chen
// September 15 2018
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {

	start:
	int num = 0;
	cout << "How many spaces is the radius of your circle?" << endl;
	std::cin >> num;
	
	cout << "For " << num << " spaces, the circle is: " << endl;

	// every time the number of spaces divides by 2
	//for (int i = num; i > 1; i++) {
	int i = num;
	while (i > 0) {
		// print " " i times
		// print *
		// print " " 2x(num-i) times
		// print *
		// print new line
		// this prints the top half
	
		//cout << "i is " << i << endl;
		for (int j = 0; j < i; j++) { // outside spaces _____*
			cout << " ";
		}
		cout << "*";
		for (int k = 0; k < num-i; k++) { // inside spaces *_____
			cout << "  ";
		}
		cout << "*" << endl;
		i = i/2;
	
	}
	//i = num;
	i=1;
	while (i < num+1) {
		//cout << "i is " << i << endl;
		for (int j=0; j < i; j++) {
			cout << " ";
		}
		cout << "*";
		for (int k=0; k < num-i; k++) {
			cout << "  ";
		}
		cout << "*" << endl;
		i = i*2;
	}



	// THIS PRINTED A DIAMOND SHAPE
	/*
	for (int i = 0; i < num; i++) {
		// print " " num-i times
		// print *
		// print " " 2xi times
		// print *
		// print new line
		// this prints the top half
		
		for (int j = 0; j < num-i; j++) { // outside spaces _____*
			cout << " ";
		}
		cout << "*";
		for (int k = 0; k < i; k++) { // inside spaces *_____
			cout << "  ";
		}
		cout << "*" << endl;
	}
	
	// Bottom Half
	for (int i = 0; i < num+1; i++) {
		// print " " i times
		// print * 
		// print " " 2*(num-i) times
		// print *
		// print new line
		
		for (int j=0; j < i; j++) { // outside spaces _____*
			cout << " ";
		}
		cout << "*";
		for (int k=0; k< num-i; k++) { // inside spaces *_____
			cout << "  ";
		}
		cout << "*" << endl;
	}
	*/ 
	
	goto start;

}
