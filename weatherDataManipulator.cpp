/*
 * Filename: weatherDataManipulator.cpp
 *
 * Name: Huthsady Legend Boun
 * Professor: Grace A. Comp
 * Class: Compsci II
 *
 * Description: Allows a user to enter in weather data for a 12 month period and automatically table/calculate averages.
 *
*/




#include <iostream>
#include <string>
#include <array>




struct Month // Struct for the month's members
{
	std::string name;
	double totalRainfall;
	double highTemp;
	double lowTemp;
	double avgTemp;
};

Month array[12];



void greeting() // Greets the user and asks them for the beginning month of their data set.
{
	std::cout << "Hello researcher!\n";
	std::cout << "Please enter the month's name that begins your data set:\n";
}



void userInput(Month array[]) // Accepts the user's input for the months's data
{
	for (int x = 0; x < 12; x++)
	{
		std::cin >> array[x].name;
		
		std::cout << "Enter " << array[x].name << "'s Total Rainfall:\n"; 					// Input for Rainfall
		std::cin >> array[x].totalRainfall;

		for (bool inputCheck = false; inputCheck != true;) 							// Checks if the input is within valid range
		{
			std::cout << "\nEnter " << array[x].name<< "'s highest recorded Temp:\n"; // For Highest Temp
			std::cin >> array[x].highTemp;

			if(array[x].highTemp > -100 && array[x].highTemp < 140)
			{
				inputCheck = true;
				array[x].avgTemp += array[x].highTemp;
			}
			else
			{
				std::cout << "Please enter a valid temperature between -100 and 140";
			}
		}

		for (bool inputCheck = false; inputCheck != true;) 							// Checks if the input is within valid range
		{
			std::cout << "\nEnter " << array[x].name<< "'s lowest recorded Temp:\n"; // For Lowest Temp
			std::cin >> array[x].lowTemp;

			if(array[x].lowTemp > -100 && array[x].lowTemp < 140)
			{
				inputCheck = true;
				array[x].avgTemp += array[x].lowTemp;
			}
			else
			{
				std::cout << "Please enter a valid temperature between -100 and 140";
			}
		}

		std::cout << "\n One moment...Processing...\n"; // Calculates average temp
		array[x].avgTemp /= 2;
		std::cout << "The average temp for " << array[x].name << " is: \n";
		std::cout << array[x].avgTemp<< "\n\n\n\n\n";
		
		if(x < 11)
		{
			std::cout << "Enter the name of the following month:\n";
		}
	}
}



void arrayPrinter() // Neatly Displays all the monthly data in a chart.
{
	std::cout << "          ";
	for (int x = 0; x < 12; x++)
	{
		std::cout << array[x].name << "|";
	}
	

	std::cout << "\n" << "Rainfall: ";

	for (int x = 0; x < 12; x++)
	{
		std::cout << array[x].totalRainfall << "     |";
	}

	std::cout << "\n" << "HighTemp: ";
	for (int x = 0; x < 12; x++)
	{
		std::cout << array[x].highTemp << "   |";
	}

	std::cout << "\n" << " LowTemp: ";
	for (int x = 0; x < 12; x++)
	{
		std::cout << array[x].lowTemp << "    |";
	}

	std::cout << "\n" << "Avg.Temp: ";
	for (int x = 0; x < 12; x++)
	{
		std::cout << array[x].avgTemp << "     |";
	}
}

int main() // Main function, every cpp program needs it

{
	greeting();

	userInput(array);

	arrayPrinter();
}
