#include<iostream>
using namespace std;

class employee
{
    int emp_number;
    char emp_name[20];
    float emp_basic;
    float emp_da;
    float emp_it;
    float emp_net_sal;

public:
    void get_emp_details();
    float find_net_salary(float basic, float da, float it);
    void show_emp_details();
};

void employee::get_emp_details()
{
    cout << "\nEnter employee number: ";
    cin >> emp_number;
    cout << "Enter employee name: ";
    cin >> emp_name;
    cout << "Enter employee basic: ";
    cin >> emp_basic;
    cout << "Enter employee da: ";
    cin >> emp_da;
    cout << "Enter employee it: ";
    cin >> emp_it;
}

float employee::find_net_salary(float basic, float da, float it)
{
    return (basic + da) - it;
}

void employee::show_emp_details()
{
    cout << "\nEmployee name: " << emp_name;
    cout << "\nEmployee number: " << emp_number;
    cout << "\nBasic salary: " << emp_basic;
    cout << "\nEmployee da: " << emp_da;
    cout << "\nIncome tax: " << emp_it;
    cout << "\nNet salary: " << find_net_salary(emp_basic, emp_da, emp_it);
    cout << "\n-----------------------------\n\n";
}

int main()
{
    employee emp;
    emp.get_emp_details();
    emp.show_emp_details();
    return 0;
}