/*
* File: CircleSquare.cpp
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This cpp file that contains CircleSquare class the child of the Shape class and it's using constrcutor, destrcutor
* and methods of CircleSquare class to validate and sets values. Also, it uses overloaded operators and exceptions
*/



#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "CircleSquare.h"
/**
    * \brief To instantiate a new CircleSquare object - given a set of attribute values and validating them.uses shape constructor
	* \details <b>Details</b>
	* \ this construtor takes newRadius, newColour, ewSideLength, object as inputs and sets them
	* \param neewRadius  - <b>float</b> - representation of the CircleSquare's radius
	* \param newColour - <b>char *</b> - representation of the CircleSquare's colour
	* \param newSideLength - <b>char *</b> - representation of the CircleSquare's SideLength
	* \param object - <b>char *</b> - representation of the CircleSquare's object name
	* 
	* \return As this is a <i>constructor</i> for the Circle class, nothing is returned
	*
*/


CircleSquare::CircleSquare(char* newColour, float newSideLength, float newRadius, char* object) : Shape (object, newColour)
{
	if (object == "Circle-Square")
	{
		if (newRadius >= 0.00)
		{
			radius = newRadius;
		}
		else
		{
			radius = 0.00;
		}
		int dim = 2 * radius;
		if (dim >= newSideLength)
		{
			dim = 1.5 * newSideLength;
			radius = dim / 2;
		}
	}
	if (object == "Square-Circle")
	{
		if (newSideLength >= 0.00)
		{
			sideLength = newSideLength;
		}
		else
		{
			
			sideLength = 0.00;
		}
		int dim = 2 * radius;
		if (newSideLength >= dim)
		{
			newSideLength = 1.5 * dim;
			radius = dim / 2;
		}
	}
	
}
/**
   * \brief deafult constrcutor to set radius and sideLength to zero. Also sets name and colour
   * \details <b>Details</b>
   *
   * \return As this is a <i>constructor</i> for the Circle class, nothing is returned
   *
   */
CircleSquare::CircleSquare(void):Shape((char*)"Circle-Square",(char*)"Undefined")
{
	sideLength = 0.00;
	radius = 0.00;
}
/// \brief Called upon to <i>destroy</i> a CircleSquare object - once it loses <b>scope</b>
	/// \details <b>Details</b>
	///
	/// it prints TClosing the CircleSquare Ranch ...
	/// \return As this is a <i>destructor</i> for the CircleSquare class, nothing is returned
	///

CircleSquare::~CircleSquare(void)
{
	printf("Closing the CircleSquare Ranch ...\n");
}

///
/// \brief method to return radius
/// \details <b>Details</b>
///  Called to return the radius value
/// 
/// \return Returns the radius of the CircleSquare class
///
///
float CircleSquare::GetRadius(void)
{
	return radius;
}

///
/// \brief method to return radius as const
/// \details <b>Details</b>
///  Called to return the radius value
/// 
/// \return Returns the radius of the CircleSquare class
///
///
float CircleSquare::GetRadius(void) const
{
	return radius;
}
   ///
   /// \brief method to return side-length
   /// \details <b>Details</b>
   ///  Called to return the  side-length value
   /// 
   /// \return Returns the  side-length of the  Square class
   ///
   ///
float CircleSquare::GetSideLength(void)
{
	return sideLength;
}
  ///
   /// \brief method to return side-length as const
   /// \details <b>Details</b>
   ///  Called to return the  side-length value
   /// 
   /// \return Returns the  side-length of the  CircleSquare class
   ///
   ///
float CircleSquare::GetSideLength(void) const
{
	return sideLength;
}

  ///
  /// \brief method to set and validate radius
  /// \details <b>Details</b>
  /// Input: float newRadius
  /// 
  ///  Called to set and validate radius
  /// 
  /// \return Returns 0  if outside range
  ///
  ///
float CircleSquare::SetRadius(float newRadius)
{
	if (newRadius >= 0.00)
	{
		radius = newRadius;
	}
	else
	{
		// leave value alone as required
	}
	return 0;
}
 ///
 /// \brief method to set and validate SideLength
 /// \details <b>Details</b>
 /// Input: float newSideLength
 /// 
 ///  Called to set and validate SideLength
 /// 
 /// \return Returns 0  if outside range
 ///
 ///
float CircleSquare::SetSideLength(float newSideLength)
{
	if (newSideLength >= 0.00)
	{
		sideLength = newSideLength;
	}
	else
	{

	}
	return 0;
}
 ///
 /// \brief method to calculate perimeter
 ///  depends on object if Circle-Square or Square-Circle
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the perimeter of CircleSquare using raduis and SideLength
 /// 
 /// \return Returns  value of radius or side-Length
 ///
 ///
float CircleSquare::Perimeter(void)
{
	if (SetName((char*)"Circle-Square"))
	{
		float permiter;

		permiter = PI * 2 * radius;
		return permiter;
	}
	
	if (SetName((char*)"Square-Circle"))
	{

		float permiter;
		permiter = 4 * sideLength;
		return permiter;
	}

}
///
 /// \brief method to calculate Area 
 /// depends on object if Circle-Square or Square-Circle
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the Area of CircleSquare using raduis and SideLength
 /// 
 /// \return Returns  value of radius and side length
 ///
float CircleSquare::Area(void)
{
	if (SetName((char*)"Circle-Square"))
	{
		float area;
		area = PI * pow(radius, 2);
		return area;
	}

	if (SetName((char*)"Square-Circle"))
	{

		float Area;
		Area = pow(sideLength, 2);
		return  Area;
	}
	
}
///
 /// \brief method to calculate OverallDimension of primary shape
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the OverallDimension of primary shape
 /// 
 /// \return Returns  2 by value of radius
 ///
float CircleSquare::OverallDimension(void)
{
	return (2 * radius);
}
///
 /// \brief method to find SquarePerimeter 
 /// 
 /// \details <b>Details</b>
 ///
 ///  Called to find SquarePerimeter 
 /// 
 /// \return Returns  value of  side length
 ///
float CircleSquare::SquarePerimeter(void)
{
	float permiter;
	permiter = 4 * sideLength;
	return permiter;
}
///
 /// \brief method to find CirclePerimeter 
 /// 
 /// \details <b>Details</b>
 ///
 ///  Called to find CirclePerimeter 
 /// 
 /// \return Returns  value of  radius
 ///
float CircleSquare::CirclePerimeter(void)
{
	float area;
	area = PI * pow(radius, 2);
	return area;
}
///
 /// \brief method to show CircleSquare details
 /// \details <b>Details</b>
 ///
 ///  Called to print all CircleSquare details
 /// 
 /// \return Returns  nothing
 ///
 ///
void CircleSquare::Show(void)
{
	if (SetName((char*)"Circle-Square"))
	{
		char colour[kColour] = { 0 };
		this->GetColour(colour);
		printf("Name             : %s \n",Shape:: GetName());
		printf("Color            : %s \n", colour);
		printf("Circle\n");
		printf("  Radius         : %.2f cm\n", radius);
		printf("  Circumference  : %.2f cm\n", Perimeter());
		printf("  Area           : %.2f square cm\n\n", Area());
		printf("Contained Squar\n");
		printf("  SideLength     : %.2f cm\n", sideLength);
		printf("  Perimeter      : %.2f cm\n", SquarePerimeter());
		printf("  Area           : %.2f square cm\n\n", Area());

	}
	if (SetName((char*)"Square-Circle"))
	{

		char colour[kColour] = { 0 };
		this->GetColour(colour);
		printf("Name             : %s \n", Shape::GetName());
		printf("Color            : %s \n", colour);
		printf("Circle\n");
		printf("  SideLength     : %.2f cm\n", sideLength);
		printf("  Perimeter      : %.2f cm\n", Perimeter());
		printf("  Area           : %.2f square cm\n\n", Area());
		printf("Contained Circle\n");
		printf("  Radius         : %.2f cm\n", radius);
		printf("  Circumference  : %.2f cm\n", CirclePerimeter());
		printf("  Area           : %.2f square cm\n\n", Area());
	}
	
}
///
 /// \brief method to add the radius and sidelength of CircleSquare
 /// also it uses exceptions
 /// \details <b>Details</b>
 /// Input: CircleSquare& op2
 ///  Called to calculate the radius and sidelength of CircleSquare using the operator+
 /// 
 /// \return Returns  temp circle varaible
 ///
CircleSquare CircleSquare:: operator+(const CircleSquare& op2)
{
	CircleSquare temp;
	char colour[kColour] = { 0 };
	this->GetColour(colour);

	temp.SetColour(colour);
	temp.SetRadius(this->GetRadius() + op2.GetRadius());
	temp.SetSideLength(this->GetSideLength() + op2.GetSideLength());
	try
	{
		if (SetName((char*)"Circle-Square"))
		{

		}
		if (SetName((char*)"Square-Circle"))
		{

		}
	}
	catch(char* r)
	{
		printf("Not same name type\n");
	}
	return temp;
}
///
 /// \brief method to assign the CircleSquare attributes
 /// \details <b>Details</b>
 ///  Input: CircleSquare& op2
 ///  Called to assign the Circle using  operator=
 /// 
 /// \return Returns  *this
 ///
const CircleSquare & CircleSquare:: operator=(const CircleSquare& op2)
{
	char colour[kColour] = { 0 };
	op2.GetColour(colour);
	this->SetRadius(op2.GetRadius());
	this->SetSideLength(op2.GetSideLength());
	this->SetColour(colour);
	return *this;

}