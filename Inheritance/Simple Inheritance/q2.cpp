#include <iostream>
#include <string>

using namespace std;

class student
{
    public:
        string name;
        int roll;
        int age;
};

class test : public student
{
    public:
        int marks[5];
};


class sports
{
    public:
        int sports;
};


class result : public test, public sports
{
    public:
        int totalmarks = 0;
        float percentage;

    void details()
    {
        cout << "Enter name:" << endl;
        getline(cin, name);

        cout << "Enter age:" << endl;
        cin >> age;

        cout << "Enter roll:" << endl;
        cin >> roll;

        cout << "Enter marks in 5 subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }

        cout << endl << "STUDENT details:" << endl << endl;
        cout << "Name:\t\t\t" << name << endl;
        cout << "Age:\t\t\t" << age << endl;
        cout << "Roll:\t\t\t" << roll << endl;
        cout << "Marks in 5 subjects:\t";
        for (int i = 0; i<5; i++)
        {
            cout << marks[i] << " ";
        }

        cout << endl;
    }

    void showresult()
    {
        totalmarks;

        for (int i=0; i<5; i++)
        {
            totalmarks = totalmarks + marks[i];
        }

        percentage = totalmarks/5;

        cout << endl << "RESULT in 5 subjects:" << endl << endl;

        cout << "Total marks:\t" << totalmarks << endl;
        cout << "Percentage:\t" << percentage << endl;
    }

    void sportsmarks()
    {
        cout << endl << "Enter the marks in sports activity:" << endl;
        cin >> sports;
        
        totalmarks = totalmarks + sports;

        percentage = totalmarks/6;

        cout << endl << "RESULT including sports activity:" << endl << endl;

        cout << "Total marks:\t" << totalmarks << endl;
        cout << "Percentage:\t" << percentage << endl;
    }
};


int main()
{
    student s;
    test t;
    result r;
    sports sp;

    r.details();
    r.showresult();
    r.sportsmarks();

    return 0;
}