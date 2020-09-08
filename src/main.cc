#include<iostream>

void PrintHello()
{
    std::cout <<"holaa";
}

int Add(int a, int b)
{
    return a+b;
}
int main()
{
    PrintHello();
    std::cout << "Add: " << Add(1,2) << std:: endl;
    std::cin.get();
    return 0;
}