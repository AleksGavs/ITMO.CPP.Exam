#pragma once
#include <string>
#include <sstream>
#include <iostream>

class Person {
public:
	
	Person(std::string last_name, std::string name, std::string
		second_name, int age, std::string telephone_number)
	{
		this->last_name = last_name;
		this->name = name;
		this->second_name = second_name;
		this->age = age;
		this->telephone_number = telephone_number;
	}
	
	std::string get_full_name()
	{
		std::ostringstream full_name;
		full_name << this->last_name << " "
			<< this->name << " "
			<< this->second_name;
		return full_name.str();
	}

	std::string get_full_info()
	{
		std::ostringstream full_info;
		full_info << this->last_name << " "
			<< this->name << " "
			<< this->second_name << ". ��� �������: "
			<< typeid(*this).name() << ". �������: "
			<< this->age << ", ����� ��������: "
			<< this->telephone_number << ". ";
		return full_info.str();
	}

	virtual std::string get_achievements()
	{
		return "";
	}

	std::string get_name()
	{
		return name;
	}
	std::string get_last_name()
	{
		return last_name;
	}
	std::string get_second_name()
	{
		return second_name;
	}

	virtual void print_name()
	{
		std::cout << get_full_name();
	}

protected:
	void setTelephoneNumber(const std::string& tel_num) {
		telephone_number = tel_num;
	}

	std::string getTelephoneNumber() const {
		return telephone_number;
	}

private:
	std::string name; 
	std::string last_name; 
	std::string second_name; 
	std::string telephone_number;
	int age;
};
