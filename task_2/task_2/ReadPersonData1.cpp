#include <iostream>
#include <ostream>
#include <string>

using namespace std;

extern unsigned short Height;

string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonWeight(unsigned short& weight);
void ReadPersonHeight();

void ReadPersonData(string& name, unsigned short& age, unsigned short& high, unsigned short& weight)

{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    high = Height;
    ReadPersonWeight(weight);

}