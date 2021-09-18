/*
* File: myShape.cpp
* Programmer : Muayad Fandqle
* Date : 2021 - 04-24
* Description : This cpp file that contains the test harness of the project 
* it instansiate multiple objects in order to play with colours ,radius , and sideLength of the classes
* also it uses templates
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new.h>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "CircleSquare.h"
#pragma warning(disable: 4996)
/// 
/// \main myShape
///
/// \brief main function to instansiate objects in order to play with colours ,radius , and sideLength of the classes
///  and test the program using templates.
///
///
///
/// \author  <i>Muayad Fandqle</i>
///
/// 


/// template class data to create CombineShape function using same data as input
template <class data> data CombineShape(data& a, data& b) {
	data temp;
	temp= a+b;
	return temp;
}

/// template class  Square, class Circle to create CombineDifferentShap function using diffrent data type as input
template <class Square, class Circle> CircleSquare CombineDifferentShape( Square& a, Circle& b) {
	CircleSquare  temp;
	temp = a + b;
	
	return  temp;
}

int main(void)
{
	
	Circle round1 ((char*)"red", 5.5);
	Circle round2((char*)"blue", 10.5);
	
	Square square1((char*)"orange", 5);
	Square square2((char*)"purple", 12);
	CircleSquare playARoundSquare;
	
	Square playASquare = CombineShape(square2, square1);
	playASquare.Show();
	
	return 0;
}
