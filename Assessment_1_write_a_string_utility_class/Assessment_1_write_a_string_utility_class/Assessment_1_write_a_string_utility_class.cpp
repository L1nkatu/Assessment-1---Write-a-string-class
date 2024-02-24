#include <iostream>
#include "String.h"

int main()
{
    
    /*String* str_01 = new String();
    str_01->ID = 24;

    String* str_02 = new String();
    str_02->ID = 25;

    str_01->EqualTo(*str_02);

    String* st = new String();
    st->Length();

    std::cout << "Confirming this works\n";
    std::cout << st->Length(); 
    std::cout << "\n";*/


        // Create a String object with "Hello" as initial content
        String hello("Hello");

        // Append ", World" to the string
        hello.Append(" World");

        // Output the content of the string to the console
        std::cout << hello.CStr() << std::endl;

        return 0;
    

    system("pause");
    




   /* String* st = new String();

    st->Length();
    *st->ID = 84; 
    
    std::cout << st->Length();*/
}
