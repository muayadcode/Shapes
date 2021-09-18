/*
* File: Square.h
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This header file that contains square class the child of the Shape class with the 3 virtual functions
*/






#pragma once

#include <stdio.h>
#include <string.h>
#include "Shape.h"
#include "Circle.h"

#include "CircleSquare.h"

using namespace std;
/// 
/// \class Square
///
/// \brief The purpose of this class is to be the child of the Shape classe and uses 3 pure virtual functions.
/// this class use overloaded operators to add the sideLength of square and compare it
///
///
///
/// \author  <i>Muayad Fandqle</i>
///



class Square: public Shape
{
private: 
	float sideLength;  ///< private sideLength data member

public: 
	/// constructor
	Square(char* newColour, float newSideLength);
	/// deafult constructor
	Square(void);
	/// destructor
	virtual ~Square(void);


	float GetSideLength(void);
	float GetSideLength(void) const;
	
	float SetSideLength(float newSideLength); //mutator

	/// method to print Circle details
	void Show(void);



	virtual float Perimeter(void);
	virtual float Area(void);     //using 3 virtual function from parent


	virtual float OverallDimension(void);

	///operator to add the sideLength of square
	Square operator+(const Square& op2);
	///operator to multiply the sideLength of square
	Square operator*(const Square& op2);
	///operator to assign the square
	const Square& operator=(const Square& op2);
	//operator to compare the square
	bool operator==(const Square& op2);
	Square operator+(const  Circle& op2);
};

