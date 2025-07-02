// ChangeVector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

int main()
{
    int vectorSize = 0;
    int usersNumberInput = 0;
    int deleteNumber = 0;
    std::cout << "Input vector size: ";
    std::cin >> vectorSize;

    std::vector<int> vec;
    std::cout << "Input numbers: ";
    for (size_t i = 0; i < vectorSize; i++)
    {

        std::cin >> usersNumberInput;
        vec.push_back(usersNumberInput);
    }

    std::cout << "Input number to delete: ";
    std::cin >> deleteNumber;

    for (size_t i = 0; i < vec.size(); i++)  
    {    
        
        if (vec[i] == deleteNumber)
             {   
                    int temp = i;

                    while (temp <vec.size()-1)
                    {
                        vec[temp] = vec[temp+1];
                        temp++;
                    }
                    vec.pop_back();
             }
    }

    for (size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
}
