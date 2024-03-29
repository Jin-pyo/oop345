// Name:Jinpyo Ju
// Seneca Student ID: 134444181
// Seneca email: jju3@myseneca.ca
// Date of completion: Oct 8,2019
//
// I confirm that the content of this file is created by me,
//   with the exception of the parts provided to me by my professor.

#ifndef RESERVATION_H
#define RESERVATION_H

#include<iostream>
#include<string>
namespace sdds
{

	class Reservation
	{
		std::string m_reservation_id;
		std::string m_reservation_name;
		std::string m_email;
		int m_numOfPeople;
		int m_day;
		int m_hour;
		void check(std::string& str)const;

	public:
		Reservation() {
			this->m_reservation_id = '\0';
			this->m_reservation_name = '\0';
			this->m_email = '\0';
			this->m_numOfPeople = 0;
			this->m_day = 0;
			this->m_hour = 0;
		}
		Reservation(const std::string& m_res);
		~Reservation() {}
		friend std::ostream& operator<<(std::ostream& os, const Reservation& res);

	};


}


#endif // !RESERVATION_H