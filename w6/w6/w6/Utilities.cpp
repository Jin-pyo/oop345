// Name:Jinpyo Ju
// Seneca Student ID: 134444181
// Seneca email: jju3@myseneca.ca
// Date of completion: Nov 4,2019
//
// I confirm that the content of this file is created by me,
//   with the exception of the parts provided to me by my professor.
#include<iostream>
#include<sstream>
#include "Utilities.h"
#include"Vehicle.h"
#include"Car.h"

namespace sdds
{
	Vehicle* Utilities::createInstance(std::istream& in)
	{
		std::string check;

		std::getline(in, check);
		std::stringstream tmp(check);

		char type = '\0';
		char delim = '\0';

		tmp >> type >> delim;

		if (tmp)
		{
			if (type == 'c' || type == 'C')
			{
				return new Car(tmp);
			}
			else if (type == 'r' || type == 'R')
			{
				return new Racecar(ss);
			}
			else
			{
				throw type;
			}
		}

		return nullptr;

	}
}