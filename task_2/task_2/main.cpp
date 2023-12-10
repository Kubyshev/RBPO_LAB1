#include <iostream>
#include <ostream>
#include <string>
using namespace std;

void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& high, unsigned short& weight);
void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "");

extern string sale;

int main(int argc, char* argv[])
{
    //setlocale(0, "");
    string name;
    unsigned short age, high, weight;
    double sal;
    ReadPersonData(name, age, sal);
    ReadPersonData(name, age, high, weight);
    sale = to_string(sal);
    WritePersonData(name, &age, to_string(high), to_string(weight));
}