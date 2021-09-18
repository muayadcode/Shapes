/*
* File: Shape.cpp
* Programmer : Muayad Fandqle
* Date : 2021 - 04-17
* Description : This cpp file that contains the Shape class constructors and methods and validation
*/

#include "Shape.h"
#pragma warning(disable: 4996)


/**
	* \brief To instantiate a new Shape object - given a set of attribute values
	* \details <b>Details</b>
	* \ this construtor takes newName and newColour as inputs and sets them
	* \param newName  - <b>char *</b> - representation of the Shape's name
	* \param newColour - <b>char *</b> - representation of the Shape's colour
	* \return As this is a <i>constructor</i> for the Shape class, nothing is returned
	*
	*/


Shape::Shape(char* newName, char* newColour)
{
	//validation
	if (newName == "Circle" || newName == "Square" || newName == "Circle-Square"|| newName == "Square-Circle")
	{
		strcpy(name, newName);

	} 
	else
	{
		strcpy(name, "Unknown");
	}
	
	if (strlen(newName) < 50)
	{
		strcpy(name, newName);

	}
	else
	{
		strcpy(name, "Unknown"); // if not in range set name to unknown
	}

	if (newColour == "red" || newColour == "green" || newColour == "blue" || newColour == "yellow" || newColour == "purple" || newColour == "pink" 
		|| newColour == "orange" || newColour == "Undefined")
	{
		strcpy(colour, newColour);
	}
	else
	{
		strcpy(colour, "Undefined");

	}
	if (strlen(newColour) < 10)
	{
		strcpy(colour, newColour);

	}
	else
	{
		strcpy(colour, "Undefined");
	}
}

/**
	* \brief deafult constrcutor to set name and colour to unknow values
	* \details <b>Details</b>
	* 
	* \return As this is a <i>constructor</i> for the Shape class, nothing is returned
	*
	*/

Shape::Shape(void)
{
	strcpy(name, "Unknown");
	strcpy(colour, "Undefined");

}
    ///
	/// \brief GetName(void)
	/// \details <b>Details</b>
	///  Called to return the name value
	/// 
	/// \return Returns the name of the Shape class
	///
	///

const char* Shape::GetName(void)
{
	return name;
}
   ///
   /// \brief GetColour(void)
   /// \details <b>Details</b>
   ///  Called to return the colour value
   /// 
   /// \return Returns the colour of the Shape class
   ///
   ///

void Shape::GetColour(char* temp)
{

	strcpy(temp, colour);
}
void Shape::GetColour(char* temp) const
{

	strcpy(temp, colour);
}
    ///
   /// \brief SetName(char* newName)
   /// \details <b>Details</b>
   /// Inputs: char* newName
   ///  Called to validate and set the name of Shape class
   /// 
   /// \return Returns bool to indicate the value in range or not
   ///
   ///
bool Shape::SetName(char* newName)
{
	bool retCode = false;
	if (newName == "Circle" || newName == "Square" || newName == "Circle-Square" || newName == "Square-Circle")
	{
		strcpy(name, newName);
		retCode = true;
	}
	else
	{
		// if not in range we leave value alone as required
	}

	if (strlen(name) < 50)
	{
		strcpy(name, newName);
		retCode = true;
	}
	else
	{
		// if not in range we leave value alone as required
	}

	return retCode;
}
///
  /// \brief called to validate and set the colour value
  /// \details <b>Details</b>
  /// Inputs: char* newColour
  ///  Called to validate and set the color of Shape class
  /// 
  /// \return Returns bool to indicate the value in range or not
  ///
  ///
bool Shape::SetColour(char* newColour)
{
	bool retCode = false;
	if (newColour == "red" || newColour == "green" || newColour == "blue" || newColour == "yellow" || newColour == "purple" || newColour == "pink" || 
		newColour == "orange" || newColour == "Undefined")
	{
		strcpy(colour, newColour);
		retCode = true;
	}
	else
	{
		// if not in range we leave value alone as required

	}
	if (strlen(newColour) < 10)
	{
		strcpy(colour, newColour);
		retCode = true;
	}
	else
	{
		// if not in range we leave value alone as required
	}
	return retCode;
}