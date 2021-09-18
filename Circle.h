/*
* File: Circle.h
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This header file that contains circle class the child of the Shape class with the 3 virtual functions
* this class will oberloaed operators to calcualte the radius
*/



#pragma once

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "Shape.h"
const double PI = 3.14159265; /// constant value to hold PI

/// 
/// \class Circle
///
/// \brief The purpose of this class is to be the child of the Shape classe and uses 3 pure virtual functions.
/// Also, this class will use overloaded operators to add the radius of circle and compare it.
///
///
///
/// \author  <i>Muayad Fandqle</i>
///

class Circle: public Shape
{

private:
	float radius; ///< private radius data member





public:
	/// constructor
	Circle(char* newColour, float newRadius);
	/// deafult constructor
	Circle(void);
	/// destructor
	virtual ~Circle(void);
	 
	float GetRadius(void);  
	float GetRadius(void) const;//accessor

	float SetRadius(float newRadius); //mutator
	/// method to print Circle details
	void Show(void); 



	virtual float Perimeter(void) ;
	virtual float Area(void) ;          //using 3 virtual function from parent

	virtual float OverallDimension(void);
	///operator to add the radius of circle
	Circle operator+(const Circle& op2);
	///operator to multiply the radius of circle
	Circle operator*(const Circle& op2);
	///operator to assign the circle
	const Circle& operator=(const Circle& op2);
	///operator to compare the circle
	bool operator==(const Circle& op2);
};
