/*
* File: Shape.h
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This header file that contains the Shape class as the parent and uses 3 pure virtual functions
* this class have constrcutors to validate name and colour and sets them
*/

#pragma once

#include <stdio.h>
#include <string.h>

#define kName 50 /// constant to hold the name vlaue
#define kColour 10 /// constant to hold the colour vlaue
/// 
/// \class Shape
///
/// \brief The purpose of this class is to be the parents of the other classes and uses 3 pure virtual functions.
/// this class have constrcutors to validate name and colour and sets them.
///
///
/// \author  <i>Muayad Fandqle</i>
///


class Shape
{
	
private:
	char name[kName]; ///< private name data member 

	char colour[kColour]; ///< private colour data member

	


public:
	/// constructor
	Shape(char *newName, char *newColour ); 

	/// deafult constructor
	Shape(void); 

	const char* GetName(void); //accessor
	void GetColour(char* temp) const;
   void GetColour(char* temp) ;//accessor

	bool SetName(char* newName); //mutator
	bool SetColour(char* newColour); //mutator



	virtual float Perimeter(void) = 0;
	virtual float Area(void)= 0;               /// pure virtual functions

	virtual float OverallDimension(void) = 0;


};


