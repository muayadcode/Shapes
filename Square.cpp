/*
* File: Square.cpp
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This cpp file that contains the square class children constructors and methods and validation
* and use overloaded operators to edit the valuseof circle as well it uses overloaded methods.
*/


#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "CircleSquare.h"
using namespace std;
/**
	* \brief To instantiate a new Square object - given a set of attribute values and uses shape constructor
	* \details <b>Details</b>
	* \ this construtor takes ewSideLengt and newColour as inputs and sets them
	* \param newSideLength  - <b>int</b> - representation of the Square's length
	* \param newColour - <b>char *</b> - representation of the Square's colour
	* \return As this is a <i>constructor</i> for the Circle class, nothing is returned
	*
	*/

Square::Square(char* newColour, float newSideLength) : Shape((char*)"Square", newColour)
{
	if (newSideLength >= 0.00)
	{
		sideLength = newSideLength;
	}
	else
	{
		sideLength = 0.00;
	}
	
}
/**
   * \brief deafult constrcutor to set sideLength to zero
   * \details <b>Details</b>
   *
   * \return As this is a <i>constructor</i> for the Square class, nothing is returned
   *
   */
Square::Square(void) : Shape((char*)"Square", (char*)"Undefined")
{
	sideLength = 0.00;
}
/// \brief Called upon to <i>destroy</i> a Square object - once it loses <b>scope</b>
	/// \details <b>Details</b>
	///
	/// it prints The square is squished ...
	/// \return As this is a <i>destructor</i> for the Square class, nothing is returned
	///
Square:: ~Square(void)
{
	printf("\nThe square is squished ...\n");

}
///
   /// \brief method to return side-length
   /// \details <b>Details</b>
   ///  Called to return the  side-length value
   /// 
   /// \return Returns the  side-length of the  Square class
   ///
   ///
float Square:: GetSideLength(void)
{
	return sideLength;
}
///
   /// \brief method to return side-length as const
   /// \details <b>Details</b>
   ///  Called to return the  side-length value
   /// 
   /// \return Returns the  side-length of the  Square class
   ///
   ///
float Square::GetSideLength(void) const
{
	return sideLength;
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
float Square::SetSideLength(float newSideLength)
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
 /// \brief method to show Square details
 /// \details <b>Details</b>
 ///
 ///  Called to print all Square details
 /// 
 /// \return Returns  nothing
 ///
 ///
void Square::Show(void)
{
	
	char colour[kColour] = { 0 };
	this->GetColour(colour);
	printf("Name             : %s \n", Shape::GetName());
	printf("Color            : %s \n", colour);
	printf("Side-Length      : %.f  cm\n", GetSideLength());
	printf("Perimeter        : %.2f cm\n", Perimeter());
	printf("Area             : %.2f square cm\n\n",Area());
}

///
 /// \brief method to calculate perimeter of Square
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the perimeter of Square using sideLength
 /// 
 /// \return Returns  value of sideLength
 ///
 ///
float Square::Perimeter(void)
{
	float permiter;
	permiter = 4 * sideLength;
	return permiter;
}
///
 /// \brief method to calculate Area of Square
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the Area of Square using sideLength
 /// 
 /// \return Returns  value of sideLength
 ///
float Square::Area(void)
{
	float Area;
	Area = pow(sideLength, 2);
	return  Area;
}

///
 /// \brief method to calculate OverallDimension of Square
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the OverallDimension of Square using sideLength
 /// 
 /// \return Returns sideLength
 ///
float Square::OverallDimension(void)
{
	return sideLength;
}
///
 /// \brief method to  add the sideLength of Square
 /// \details <b>Details</b>
 /// Input: Square& op2
 ///  Called to add the sideLength of Square using the operator+
 /// 
 /// \return Returns  temp circle varaible
 ///
Square Square::operator+(const Square& op2)
{
	Square temp;
	char colour[kColour] = { 0 };
	this->GetColour(colour);

	temp.SetColour(colour);
	temp.SetSideLength(this->sideLength + op2.sideLength);


	return temp;
}
///
/// \brief method to  add the sideLength of Square and radius of circle 
/// and use exceptions
/// \details <b>Details</b>
/// Input:  Circle& op2
///  Called to add the sideLength of Square and radius of circle using the operator+
/// 
/// \return Returns  temp circle varaible
///
Square Square ::operator+( const  Circle& op2)
{
	 Circle temp;
	  Square temp1;
	char colour[kColour] = { 0 };
	this->GetColour(colour);
	op2.GetRadius();
	this->GetSideLength();
	temp1.SetColour(colour);
	temp.SetColour(colour);
	temp.SetRadius(this->GetSideLength() +op2.GetRadius());

	try
	{
		int dim = 2 * temp.GetRadius();
		if (sideLength >= dim)
		{
			sideLength = 1.5 * dim;
			
		}
	}
	catch (char* s)
	{
		printf("Error sideLength is smaller than diameter\n");
	}
	
	
	
	return temp1;
}
///
 /// \brief method to  multiply the sideLength of Square
 /// \details <b>Details</b>
 /// Input: Square& op2
 ///  Called to multiply the sideLength of Square using the operator*
 /// 
 /// \return Returns  temp circle varaible
 ///
Square Square::operator*(const Square& op2)
{
	Square temp;
	char colour[kColour] = { 0 };
	this->GetColour(colour);
	op2.GetColour(colour);
	temp.SetColour(colour);
	temp.SetSideLength( op2.GetSideLength() * this->GetSideLength());

	return temp;
}

///
 /// \brief method to assign the square
 /// \details <b>Details</b>
 /// Input: Square& op2
 ///  Called to assign the square using  operator=
 /// 
 /// \return Returns  *this
 ///
const Square& Square::operator=(const Square& op2)
{
	char colour[kColour] = { 0 };
	op2.GetColour(colour);
	this->SetSideLength(op2.GetSideLength()) ;
	this->SetColour(colour)  ;
	

	return *this;
}
///
 /// \brief method to compare the square
 /// \details <b>Details</b>
 /// Input: Square& op2
 ///  Called to compare the square using  operator==
 /// 
 /// \return Returns  true if square equale and false otherwise
 ///
bool Square::operator==(const Square& op2)
{
	Square temp;
	char colour[kColour] = { 0 };
	this->GetColour(colour);
	float diff = fabs(this->GetSideLength() - op2.GetSideLength());

	if ((diff < 0.0001) && (this->SetColour(colour) == temp.SetColour(colour)))
	{
		return true;
	}
	else
	{
		return false;
	}
}