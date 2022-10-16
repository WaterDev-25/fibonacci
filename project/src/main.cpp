#include <iostream>
#include <math.h>

int fibonacci(int n)
{
    return (pow(((1+sqrt(5))/2), n) - pow((1-((1+sqrt(5))/2)), n))/sqrt(5);
}

int main()
{
    // Give the first 20 numbers of the fibonacci sequence
    for(int i = 0; i < 20; i++)
        std::cout << fibonacci(i) << std::endl;

    return 0;
}
