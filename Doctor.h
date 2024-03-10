#pragma once
#include "Person.h"
#include <string>
#include <vector>
class Doctor : public Person 
{
public:

	Doctor(std::string last_name, std::string name, std::string
		second_name, int age, std::string tel_num, int patients_got_well, int patients_got_worse) : Person(last_name, name,
			second_name, age, tel_num) {
		setTelephoneNumber(tel_num);
		this->patients_got_well = patients_got_well;
		this->patients_got_worse = patients_got_worse;
	}

	int get_patients_got_well()
	{
		return patients_got_well;
	}

	int get_patients_got_worse()
	{
		return patients_got_worse;
	}

	void print_achievements()
	{
		if (patients_got_well > patients_got_worse)
		std::cout << " Хороший доктор. " << patients_got_well << " его пациентов выздоровело и " << patients_got_worse << " его пациентов нет." << std::endl;
		else
		std::cout << " Так себе доктор. " << patients_got_well << " его пациентов выздоровело и " << patients_got_worse << " его пациентов нет." << std::endl;
	}

private:
	int patients_got_well;
	int patients_got_worse;
}; 
