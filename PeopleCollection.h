#pragma once
#include "Person.h"
#include <vector>
#include <fstream>

class PeopleCollection
{
private:
    std::vector<Person*> people;

public:

    void addPerson(Person* person)
    {
        people.push_back(person);
    }

    void saveToFile()
    {
        std::ofstream out;       
        out.open("List.txt");
        if (out.is_open())
        {
            for (const auto& person : people)
            {
                out << person->get_full_info() << std::endl;
            }
        }
        out.close();
        std::cout << "File has been written" << std::endl;
    }
};