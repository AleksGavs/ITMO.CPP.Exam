#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>

#include "Doctor.h"
#include "Student.h"
#include "Teacher.h"
#include "PeopleCollection.h"

using namespace std;

int main()
{
    system("chcp 1251");

    string studentName = "������";
    string studentLName = "�������";
    string studentMName = "��������";
    string studentTelNum = "8-906-321-01-03";
    Student student(studentLName, studentName, studentMName, 19, studentTelNum, { 5,4,4,5,3,4,4,5 });

    string teacherName = "ϸ��";
    string teacherLName = "������";
    string teacherMName = "��������";
    string teacherTelNum = "8-913-501-12-55";
    Teacher teacher(teacherLName, teacherName, teacherMName, 39, teacherTelNum, 37);

    string doctorName = "�������";
    string doctorLName = "��������";
    string doctorMName = "����������";
    string doctorTelNum = "8-988-324-18-87";
    int patientsWell, patientsWorse;
    cout << "������� ����� ������������� � �� ����� ��������� ";
    cin >> patientsWell >> patientsWorse;
    Doctor doctor(doctorLName, doctorName, doctorMName, 39, doctorTelNum, patientsWell, patientsWorse);

    
    cout << student.get_full_info();
    student.print_achievements();
    cout << teacher.get_full_info();
    teacher.print_achievements();
    cout << doctor.get_full_info();
    doctor.print_achievements();

    PeopleCollection people;

    people.addPerson(&student);
    people.addPerson(&teacher);
    people.addPerson(&doctor);
    people.saveToFile();


    return 0;
}