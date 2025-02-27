/*
 * Filename: weatherDataManipulator.cpp
 * Name: Huthsady Legend Boun
 * Professor: Grace A. Comp
 * Date: February 26, 2025
 * Description: Program that accepts a year's worth of weather data and calculates averages, ranges, and avgs of avgs
*/


#include <iostream>
#include <string>
#include <array>





struct Month
{
	std::string name;
	double totalRainfall;
	double highTemp;
	double lowTemp;
	double avgTemp;
};


//Month array[12];

// Main function, every cpp program needs it
int main()
{
	Month array[12];
	array[0].name = "January";
	array[0].totalRainfall = 12;
	std::cout << array[0].name;
	std::cout << array[0].totalRainfall;
	
}
