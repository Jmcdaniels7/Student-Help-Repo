#include <string>
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inData;

    inData.open("grade.txt");

    int stuNum;
    std::string stuName;
    float stuPercent;
    std::string stuGrade;


    inData >> stuNum;

    inData >> std::ws;

    std::getline(inData, stuName, '0');

    inData >> stuPercent;

    inData >> stuGrade;

    std::cout << "Student Number: " << stuNum << std::endl;
    std::cout << "Name: " << stuName << std::endl;
    std::cout << "Percentage: " << stuPercent << std::endl;
    std::cout << "Grade: " << stuGrade << std::endl;

}
