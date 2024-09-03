#include <iostream>

int main() {

    int array_1[50];
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;


    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i)
        {
        std::cin >> array_1[i];

        }


    for (int i = 0; i < size; ++i)
        {

        bool isDuplicate = false;
        for (int j = i + 1; j < size; ++j)
        {
            if (array_1[i] == array_1[j])
             {
                isDuplicate = true;
                break;
            }
        }


        if (!isDuplicate)
            {
            std::cout << array_1[i] << " ";
            }
        }

    std::cout << std::endl;

    return 0;
}
