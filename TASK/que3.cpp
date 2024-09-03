#include <iostream>
using namespace std;


struct Mobile
{
    char manufacturerName[50];
    char modelName[50];
    int ram;
    int rom;
    double cameraPixel;
    double price;


    bool isForGaming()
    {
        return ram > 6;
    }
};

int main()
{
        Mobile mobiles[5] =
    {
        {"Samsung", "Galaxy S21", 8, 128, 64.0, 899.99},
        {"Apple", "iPhone 13", 6, 256, 72.0, 999.99},
        {"OnePlus", "9 Pro", 12, 256, 48.0, 1099.99},
        {"Xiaomi", "Mi 11", 8, 128, 108.0, 749.99},
        {"Google", "Pixel 6", 6, 128, 50.0, 599.99}
    };


    cout << "Mobiles recommended for gaming:" << endl;
    for (int i = 0; i < 5; ++i)
    {
        if (mobiles[i].isForGaming())
        {
            cout << "Manufacturer: " << mobiles[i].manufacturerName << endl;
            cout << "Model: " << mobiles[i].modelName << endl;
            cout << "-------------------------" << endl;
        }
    }

    return 0;
}
