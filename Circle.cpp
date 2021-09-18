/*
* File: Circle.cpp
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This cpp file that contains the Circle class children constructors and methods and validation
* and use overloaded operators to edit the valuseof circle as well it uses overloaded methods.
*/

#include "Circle.h"

#pragma warning(disable: 4996)
/**
	* \brief To instantiate a new Circle object - given a set of attribute values and uses shape constructor
	* \details <b>Details</b>
	* \ this construtor takes newRadius and newColour as inputs and sets them
	* \param neewRadius  - <b>float</b> - representation of the Circle's radius
	* \param newColour - <b>char *</b> - representation of the Circle's colour
	* \return As this is a <i>constructor</i> for the Circle class, nothing is returned
	*
*/


Circle::Circle(char* newColour, float newRadius) : Shape((char*) "Circle", newColour)
{
	//validation
	if (newRadius >= 0.00)
	{
		radius = newRadius;
	}
	else
	{
		radius = 0.00;
	}
	
}

/**
   * \brief deafult constrcutor to set radius to zero
   * \details <b>Details</b>
   *
   * \return As this is a <i>constructor</i> for the Circle class, nothing is returned
   *
*/


Circle::Circle(void): Shape ((char*)"Circle", (char*)"Undefined")
{
	radius = 0.00;
}

/// \brief Called upon to <i>destroy</i> a Circle object - once it loses <b>scope</b>
	/// \details <b>Details</b>
	///
	/// it prints The circle is broken ...
	/// \return As this is a <i>destructor</i> for the Circle class, nothing is returned
///


Circle::~Circle(void)
{
	printf("\nThe circle is broken ...\n");

}

   ///
   /// \brief method to return radius
   /// \details <b>Details</b>
   ///  Called to return the radius value
   /// 
   /// \return Returns the radius of the Circle class
   ///
   ///
float Circle::GetRadius(void)
{
	return radius;

	
}
    ///
	/// \brief method to return radius as const
	/// \details <b>Details</b>
	///  Called to return the radius value
	/// 
	/// \return Returns the radius of the Circle class
	///
	///
float Circle::GetRadius(void) const
{
	return radius;
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
float Circle::SetRadius(float newRadius)
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
 /// \brief method to show Circle details
 /// \details <b>Details</b>
 ///
 ///  Called to print all Circle details
 /// 
 /// \return Returns  nothing
 ///
 ///
void Circle::Show (void)
{
	
	char colour[kColour] = { 0 };
	this->GetColour(colour);
	printf("Name             : %s \n", Shape::GetName());
	printf("Color            : %s \n", colour);
	printf("Radius           : %.2f cm\n",radius); 
	printf("Circumference    : %.2f cm\n", Perimeter());
	printf("Area             : %.2f square cm\n\n", Area());
}
///
 /// \brief method to calculate perimeter of Circle
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the perimeter of Circle using raduis
 /// 
 /// \return Returns  value of radius
 ///
 ///
float Circle::Perimeter(void)
{
	float perimeter;

	perimeter = PI * 2 * radius;
		
	return perimeter;
 }
///
 /// \brief method to calculate Area of Circle
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the Area of Circle using raduis
 /// 
 /// \return Returns  value of radius
 ///
float Circle::Area(void)
{
	float area;
	area = PI * pow(radius, 2);
	return area;
}
///
 /// \brief method to calculate OverallDimension of Circle
 /// \details <b>Details</b>
 ///
 ///  Called to calculate the OverallDimension of Circle using raduis
 /// 
 /// \return Returns  2 by value of radius
 ///
float Circle::OverallDimension(void)
{
	return (2 * radius);
}
///
 /// \brief method to add the radius of Circle
 /// \details <b>Details</b>
 /// Input: Circle& op2
 ///  Called to calculate the radius of Circle using the operator+
 /// 
 /// \return Returns  temp circle varaible
 ///
Circle Circle::operator+(const Circle& op2)
{
	Circle temp;
	char colour[kColour] = { 0 };
	this->GetColour(colour);

	temp.SetColour(colour);
	temp.SetRadius(this->GetRadius() + op2.GetRadius());


	return temp;
}
///
 /// \brief method to  multiply the radius of Circle
 /// \details <b>Details</b>
 /// Input: Circle& op2
 ///  Called to multiply the radius of Circle using the operator*
 /// 
 /// \return Returns  temp circle varaible
 ///
Circle Circle::operator*(const Circle& op2)
{
	Circle temp;
	char colour[kColour] = { 0 };
	op2.GetColour(colour);
	
	temp.SetColour(colour);
	temp.SetRadius( op2.radius *this->radius);
	
	return temp;
}

///
 /// \brief method to assign the Circle
 /// \details <b>Details</b>
 ///  Input: Circle& op2
 ///  Called to assign the Circle using  operator=
 /// 
 /// \return Returns  *this
 ///
const Circle& Circle::operator=(const Circle& op2)
{
	char colour[kColour] = { 0 };
	op2.GetColour(colour);
	this->SetRadius(op2.GetRadius());
	this->SetColour(colour);

	

	return *this;
}
///
 /// \brief method to compare the Circle
 /// \details <b>Details</b>
 /// Input: Circle& op2
 ///  Called to compare the Circle using  operator==
 /// 
 /// \return Returns  true if circles equale and false otherwise
 ///
bool Circle::operator==(const Circle& op2)
{
	Circle temp;
	char colour[kColour] = { 0 };
	this->GetColour(colour);
	float diff = fabs(this->GetRadius() - op2.GetRadius());

	if ((diff < 0.0001) && (this->SetColour(colour) == temp.SetColour(colour)))
	{
		return true;
	}
	else
	{
		return false;
	}
}