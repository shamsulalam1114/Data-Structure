#include <iostream>
using namespace std;


struct Customer
{
    int Customer_ID;
    char CustomerName[50];
    int age;
    char Address[50];
    char City[50];



    bool Prize_winner_Customers()
    {
        return age < 30;
    }
};

int main()
{

    Customer Customers[4] =
    {
        {89,"White Clover Markets",23, "305-14th Ave.S. Suite 3B","Seattle"},
        {90,"Wilman Kala",21, "keskuskatu45","helsinki"},
        {91,"Wolski",30, "ul.filtrowa68","walla"},
        {92,"cardinal",56, "skagen21","Stavanger"}

    };


    cout << "Prize Winner Customers" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (Customers[i].Prize_winner_Customers())
        {
            cout << "Customer_ID: " << Customers[i].Customer_ID << endl;
            cout << "Customer_Name: " << Customers[i].CustomerName << endl;
            cout << "Customer_age: " << Customers[i].age << endl;
            cout << "Customer_Address: " << Customers[i].Address << endl;
            cout << "Customer_City: " << Customers[i].City << endl;
            cout << "-------------------------" << endl;
        }
    }

    return 0;
}

