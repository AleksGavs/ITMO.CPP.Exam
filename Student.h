#pragma once
#include "Person.h"
#include <string>
#include <vector>
class Student : public Person {
public:
	
	Student(std::string last_name, std::string name, std::string
		second_name, int age, std::string tel_num, std::vector<int> scores) : Person(last_name, name,
			second_name, age, tel_num) {
		setTelephoneNumber(tel_num);
		this->scores = scores;
	}	

	float get_average_score()
	{		
		unsigned int count_scores = this->scores.size();		
		unsigned int sum_scores = 0;		
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}

	void print_achievements()
	{
		std::cout << " Средний балл студента: " << get_average_score() << "." << std::endl;
	}
	
private:	
	std::vector<int> scores;
};
