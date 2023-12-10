#include <iostream>
#include <ostream>
#include <string>

using namespace std;
string sale;

void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "")
{
    cout << "\nName :  " << name
        << "\nAge:  " << *age
        << "\nHeight: " << height
        << "\nWeight: " << weight
        << "\nSalary:  " << sale << "Rub.";
}