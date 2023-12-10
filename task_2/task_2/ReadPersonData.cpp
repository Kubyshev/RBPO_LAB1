#include <iostream>
#include <ostream>
#include <string>

using namespace std;
string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonSalary(double* sal);

void ReadPersonData(string& name, unsigned short& age, double& salary)
{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}