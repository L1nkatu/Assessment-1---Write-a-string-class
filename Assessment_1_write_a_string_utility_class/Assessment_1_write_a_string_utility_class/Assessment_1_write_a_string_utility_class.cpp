#include <iostream>
#include "String.h"

int main()
{
    String hello("Hello, ");
    String world("World");
    String greeting = hello.Append(world);
    greeting.WriteToConsole(); // Output: Hello, World
    return 0;

    system("pause");
    
}
