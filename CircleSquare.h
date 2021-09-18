/*
* File: CircleSquare.h
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This header file that contains CircleSquare class the child of the Shape class with the 3 virtual functions
* this class will use overloaed operators to calcualte the radius and side length and sets them. It uses exceptions too
*/



#pragma once
#include <stdio.h>
#include <string.h>

#include "Shape.h"
#include "Circle.h"
#include "Square.h"

/// 
/// \class CircleSquare
///
/// \brief The purpose of this class is to be the child of the Shape classe and uses 3 pure virtual functions.
/// Also, this class will use overloaded operators to add the radius of circle and side length of square and sets them. It uses exceptions too
///
///
///
/// \author  <i>Muayad Fandqle</i>
///

class CircleSquare : public Shape
{
private:

	float sideLength;  ///< private sideLength data member to hold side length of CircleSquare class
	float radius;  ///< private radius data member to hold radius of CircleSquare class

public:
	/// constructor
	CircleSquare(char* newColour ,float newSideLength, float newRadius, char* object);
	/// deafult constructor
	CircleSquare(void);
	/// destructor
	virtual ~CircleSquare(void);

	float SetSideLength(float newSideLength); //mutators
	float SetRadius(float newRadius);

	float GetSideLength(void);
	float GetSideLength(void) const;
	float GetRadius(void);
	float GetRadius(void) const;       //accessors
	float SquarePerimeter(void);
	float CirclePerimeter(void);

	virtual float Perimeter(void);
	virtual float Area(void);          //using 3 virtual function from parent

	virtual float OverallDimension(void);
	void Show(void);
	///operator to add the square and circle
	CircleSquare operator+(const CircleSquare& op2);
	///operator to assign the square and circle
	const CircleSquare& operator=(const CircleSquare& op2);
	
};
