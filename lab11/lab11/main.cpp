#include <iostream>
#include <ostream>
#include <string>

using namespace std;//����������� ������ ����� ������


unsigned short ReadPersonAge() //���� �������� 
{
    unsigned short age;

    cout << "������� ������� \n";
    cin >> age;
    return age;
}

string ReadPersonName() //���� �����
{
    string name;
    cout << "������� ��� \n";
    cin >> name;
    return name;
}

unsigned short Height;//���������� ����������

void ReadPersonHeight() //���� �����
{
    cout << "������� ���� \n";
    cin >> Height;
}

void ReadPersonWeight(unsigned short& weight)//������ ���� �� ������
{
    cout << "������� ��� \n";
    cin >> weight;
}

void ReadPersonSalary(double* sal) //���� ���.����� (���������*)
{
    cout << "������� ���.����� \n";
    cin >> *sal;
}


void ReadPersonData(string& name, unsigned short& age, double& salary)//������� ����� �����,��������, ���.����� 
{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& high, unsigned short& weight)
//������������� �������, ���,�������,����,���
{
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    high = Height;
    ReadPersonWeight(weight);

}

string sale;

void WritePersonData(const string& name, const unsigned short* age,
    const string& height = "", const string& weight = "")//����� ���� ����
{
    cout << "\n��� :  " << name
        << "\n�������:  " << *age
        << "\n����: " << height
        << "\n���: " << weight
        << "\n���. �����  " << sale << "���.";
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