#pragma once
#include "Person.h"
#include <string>
#include <vector>
class Teacher : public Person {
public:

	Teacher(std::string last_name, std::string name, std::string
		second_name, int age, std::string tel_num, int hours_worked) : Person(last_name, name,
			second_name, age, tel_num) {
		setTelephoneNumber(tel_num);
		this->hours_worked = hours_worked;
	}

	int get_hours()
	{
		return hours_worked;
	}

	void print_achievements()
	{
		std::cout << " Часов закрыто: " << get_hours() << "." << std::endl;
	}

private:
	int hours_worked;
};
