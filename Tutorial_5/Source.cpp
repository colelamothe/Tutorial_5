// Tutorial #5 program
// Cole Lamothe 100711084

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// Question #1
	/*
	//This program will calculate the area of a triangle given the base and height from user input

	//Variable Declaration
	double base, height, area;

	// User input
	cout << "Please enter the height and base of a triangle in inches respectively: " << endl;
	cin >> height >> base;

	// Calculations based on 1/2*base*height
	area = 0.5*base*height;

	// Output
	cout << "The area of a triangle with a height of " << height << " and a base of " << base << " is: " << area << endl;
	*/

	// Question #2
	
	// This program will calculate the sum of all integers between two user inputted numbers

	// Variable Declaration
	int firstNumber, secondNumber, increment, difference, sum;

	// Input
	cout << "Please enter two integer values with the smaller number first: " << endl;
	cin >> firstNumber >> secondNumber;
	cout << "Please enter the number you would like to increment by: " << endl; // This changes the summation from 1 to any other user defined difference between each integer.
	cin >> increment;

	difference = secondNumber - firstNumber + 1; // This finds the number of integers between the two numbers. The + 1 factor is to include the upper bound in the total # of int's

	sum = (difference*0.5)*((2 * firstNumber) + ((difference - 1)*increment)); // Summation formula (n/2)(2*a + (n-1)d)

	cout << "The sum of all integers between " << firstNumber << " and " << secondNumber << " is " << sum << "\n" << endl;
	

	// Question #3

	// This program calculates the max load of on a wooden beam attached the the wall 
	
	// L = S*I/d*c

	//Variable Declaration
	double maxWeight; // L : This is the max load that can be applied at the end of the beam given the fixed stress 
	double stress; // S : sets the max stress value
	double moment; // I : This is given by (base*(height^3))/12
	double distance; // d : Length of the beam 
	double base, height; //b : h : cross sectional dimensions of the beam
	double half; // c : half the height

	// Input
	cout << "Enter the length of the beam in feet: " << endl;
	cin >> distance;
	distance = distance * 12; // converts feet to inches for calculation

	cout << "Enter the width of the beam in inches: " << endl;
	cin >> base;

	cout << "Enter the height of the beam in inches: " << endl;
	cin >> height;

	cout << "Enter the max stress for the material in lbs/in^2: " << endl;
	cin >> stress;

	// Calculations
	moment = (base*pow(height, 3))*(0.0833333); // Calculates the moment of inertia for the beam based on I = (b*h^3)/12
	half = height * 0.5;
	maxWeight = (stress*moment) / (distance*half); // Calculates the max weight that can be applied to solve for user inputted stress

	// Output
	cout << "\nThe max weight that can be applied to the end of a beam " << distance / 12 << "' long and a cross section of " << base << "\" x " << height << "\" \ngiven " << stress << " lbs/in^2 of stress is: " << maxWeight << " pounds" << endl;

	system("pause");
	return 0;
}