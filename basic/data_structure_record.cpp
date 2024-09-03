#include <iostream>
using namespace std;

struct Faculty
{
    int Unique_ID;
    double salary;
    int Joining_Year;
};

int main()
{
    int Total_Faculties=2;
    Faculty faculties[Total_Faculties];


    for(int i=0;i<Total_Faculties;i++)
    {
        cout << "Enter details for Faculty "<<i+1<<":"<<endl;
        cout << "Unique ID: ";
        cin >> faculties[i].Unique_ID;
        cout << "Salary: ";
        cin >> faculties[i].salary;
        cout << "Joining Year: ";
        cin >> faculties[i].Joining_Year;
    }


    cout << "Faculty members more than 5 years:" << endl;
    for (int i=0;i<Total_Faculties;i++)
    {
        if(2024-faculties[i].Joining_Year>5)
        {
            cout << "Unique ID: "<<faculties[i].Unique_ID<<endl;
            cout << "Salary: "<<faculties[i].salary<<endl;
            cout << "Joining Year: "<<faculties[i].Joining_Year<<endl;

        }
    }


    cout << "Faculty members with salary more than 100000:" << endl;
    for(int i=0;i<Total_Faculties;i++)
    {
        if (faculties[i].salary>100000)
        {
            cout << "Unique ID: "<<faculties[i].Unique_ID<<endl;
            cout << "Salary: "<<faculties[i].salary<<endl;
            cout << "Joining Year: "<<faculties[i].Joining_Year<<endl;

        }
    }

    return 0;
}
