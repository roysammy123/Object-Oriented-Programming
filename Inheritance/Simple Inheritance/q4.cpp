/* Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and
basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee. */

#include <iostream>
#include <string>

using namespace std;


class Employee
{
    public:
        string name;
        int id;
        float salary;
};


class Regular : public Employee
{
    public:
        float da;
        float hra;
        float basicsalary;

        void regsal()
        {
            cout << "Regular employee input:" << endl << endl;
            cout << "Enter name:" << endl;
            getline (cin, name);
            cout << "Enter id:" << endl;
            cin >> id;
            cout << "Enter salary:" << endl;
            cin >> basicsalary;

            da = 0.8*basicsalary;
            hra = 0.1*basicsalary;
            salary = basicsalary + da + hra;

            cout << endl;
            cout << "Regular employee details:" << endl << endl;
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Basic Salary: " << basicsalary << endl;
            cout << "DA: " << da << endl;
            cout << "HRA: " << hra << endl;
            cout << "Total salary: " << salary << endl;
        }
};


class parttime : public Employee
{
    public:
        int hours;
        float pay;

        void partsal()
        {
            cout << endl << endl << "Part-time employee input:" << endl << endl;
            cout << "Enter name:" << endl;
            getchar();
            getline (cin, name);
            cout << "Enter id:" << endl;
            cin >> id;
            cout << "Enter no. of hours:" << endl;
            cin >> hours;
            cout << "Enter pay per hour:" << endl;
            cin >> pay;
            salary = hours*pay;

            cout << endl;
            cout << "Part-time employee details:" << endl << endl;
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "No. of hours: " << hours << endl;
            cout << "Pay per hour: " << pay << endl;
            cout << "Salary: " << salary << endl;
        }
};


int main()
{
    Employee e;
    Regular r;
    parttime p;

    r.regsal();
    p.partsal();

    return 0;
}

