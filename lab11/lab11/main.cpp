#include <iostream>
#include <ostream>
#include <string>

using namespace std;//стандатрна€ запись перед именем


unsigned short ReadPersonAge() //ввод возраста 
{
    unsigned short age;

    cout << "input age \n";
    cin >> age;
    return age;
}

string ReadPersonName() //ввод имени
{
    string name;
    cout << "input name \n";
    cin >> name;
    return name;
}

unsigned short Height;//глобальное объ€вление

void ReadPersonHeight() //ввод роста
{
    cout << "input height \n";
    cin >> Height;
}

void ReadPersonWeight(unsigned short& weight)//чтение веса по ссылке
{
    cout << "input weight \n";
    cin >> weight;
}

void ReadPersonSalary(double* sal) //ввод зар.платы (указатель*)
{
    cout << "input salary \n";
    cin >> *sal;
}


void ReadPersonData(string& name, unsigned short& age, double& salary)//функци€ ввода имени,возраста, зар.платы 
{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& high, unsigned short& weight)
//перегруженна€ функци€, им€,возраст,рост,вес
{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    high = Height;
    ReadPersonWeight(weight);

}

string sale;

void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "")//вывод всей инфы
{
    cout << "\nname :  " << name
        << "\nage:  " << *age
        << "\nheight: " << height
        << "\nweight: " << weight
        << "\nsalary  " << sale << "Rub.";
}


#ifndef DO_NOT_DEFINE_MAIN
int main()
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
#endif