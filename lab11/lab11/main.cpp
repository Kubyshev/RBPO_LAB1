#include <iostream>
#include <ostream>
#include <string>

using namespace std;//стандатрная запись перед именем


unsigned short ReadPersonAge() //ввод возраста 
{
    unsigned short age;

    cout << "Введите возраст \n";
    cin >> age;
    return age;
}

string ReadPersonName() //ввод имени
{
    string name;
    cout << "Введите имя \n";
    cin >> name;
    return name;
}

unsigned short Height;//глобальное объявление

void ReadPersonHeight() //ввод роста
{
    cout << "Введите рост \n";
    cin >> Height;
}

void ReadPersonWeight(unsigned short& weight)//чтение веса по ссылке
{
    cout << "Введите вес \n";
    cin >> weight;
}

void ReadPersonSalary(double* sal) //ввод зар.платы (указатель*)
{
    cout << "Введите зар.плату \n";
    cin >> *sal;
}


void ReadPersonData(string& name, unsigned short& age, double& salary)//функция ввода имени,возраста, зар.платы 
{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& high, unsigned short& weight)
//перегруженная функция, имя,возраст,рост,вес
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
    cout << "\nИмя :  " << name
        << "\nВозраст:  " << *age
        << "\nРост: " << height
        << "\nВес: " << weight
        << "\nЗар. плата  " << sale << "руб.";
}


#ifndef DO_NOT_DEFINE_MAIN
int main()
{
    setlocale(0, "");
    string name;
    unsigned short age, high, weight;
    double sal;
    ReadPersonData(name, age, sal);
    ReadPersonData(name, age, high, weight);
    sale = to_string(sal);
    WritePersonData(name, &age, to_string(high), to_string(weight));
}
#endif