#include <iostream>
#include "String.h"
#include <cstring>
#include <cctype>
#include <cstddef>
using namespace std;

// Function to test Length()
//void testLength(const String& str) {
//    cout << "Length of the string (not including the null terminator): " << str.Length() << endl;
//}

//// Function to test CharacterAt(index)
//void testCharacterAt(const String& str, size_t _index) {
//    cout << "Character at index " << _index << ": " << str.CharacterAt(_index) << endl;
//}

// Function to test EqualTo(str)
//void testEqualTo(const String& str1, const String& str2) {
//    cout << "Are strings equal? " << (str1.EqualTo(str2) ? "Yes" : "No") << endl;
//}

//// Function to test Append(str)
//void testAppend(const String& str1, const String& str2) {
//    String nonConstStr1 = str1; // Create a non-const copy
//    String result = nonConstStr1.Append(str2);
//    cout << "After appending: " << result.CStr() << endl;
//}

//// Function to test Prepend(str)
//void testPrepend(const String& str1, const String& str2) {
//    String nonConstStr1 = str1; // Create a non-const copy
//    String result = nonConstStr1.Prepend(str2);
//    cout << "After prepending: " << result.CStr() << endl;
//}

//// Function to test ToLower()
//void testToLower(const String& str) {
//    String result = str;
//    result.ToLower();
//    cout << "String in lowercase: " << result.CStr() << endl;
//}

// Function to test ToUpper()
void testToUpper(const String& str) {
    String result = str;
    result.ToUpper();
    cout << "String in uppercase: " << result.CStr() << endl;
}

void testFind(const String& str, const String& findStr) {
    // Create a non-const copy of the string
    String nonConstStr = str;

    cout << "Find \"" << findStr.CStr() << "\" in \"" << str.CStr() << "\": " << nonConstStr.Find(findStr) << endl;
}

// Function to test Find(startIndex, findString)
void testFindFromIndex(const String& str, size_t startIndex, const String& findStr) {
    // Create a non-const copy of the string
    String nonConstStr = str;

    cout << "Find \"" << findStr.CStr() << "\" in \"" << str.CStr() << "\" from index " << startIndex << ": " << nonConstStr.Find(startIndex, findStr) << endl;
}

// Function to test Replace(findString, replaceString)
void testReplace(String& str, const String& findStr, const String& replaceStr) {
    str.Replace(findStr, replaceStr);
    cout << "After replacing \"" << findStr.CStr() << "\" with \"" << replaceStr.CStr() << "\": " << str.CStr() << endl;
}

int main() {
    // Test cases

    String hello("Hello, ");
    String world("World");
    String displayMessage("Hello, World");
    displayMessage.CStr();

    cout << "The length of the above string (not including the null terminator) is: " << hello.Length() << endl;


    cout << "The character at index 7 is: " << hello.CharacterAt(7);
    cout << '\n';

    /*cout << hello.EqualTo(world);
    cout << '\n';*/

    if (hello.EqualTo(world)) {
        cout << "String 1 is equal to String 2\n";
    }
    else {
        cout << "String 1 is not equal to String 2\n";
    }


    /*String str2("Hello, World");
    testEqualTo(finaloutput, str2);*/

    /*String str4("!");
    testPrepend(finaloutput, str4);*/

    cout << "After using the prepend function we have: ";
    String bang("! ");
    String Prepended = displayMessage.Prepend(bang);
    Prepended.WriteToConsole();
    cout << '\n';




    displayMessage.CStr();
    testToUpper(displayMessage);

    String str5("World");
    // Create a non-const copy of the string
    String nonConstStr = displayMessage;

    // Now you can call the Find function on the non-const copy
    testFind(nonConstStr, String("World")); // For testing Find(findString)
    testFindFromIndex(nonConstStr, 7, String("World")); // For testing Find(startIndex, findString)

    testReplace(displayMessage, str5, String("Universe"));

    // Additional tests for ReadFromConsole(), WriteToConsole(), Equality Operator, Subscript Operator, and Assignment Operator

    cout << "Please enter some numbers or text to test the 'ReadFromConsole' function: ";
    String inputString;
    inputString.ReadFromConsole();
    cout << "You entered: "; inputString.WriteToConsole();
    cout << '\n';

    String str6("Hello");
    String str7("Hello");
    cout << "Equality check: " << (str6 == str7 ? "Equal" : "Not Equal") << endl;

    cout << "Character at index 2: " << displayMessage[2] << endl;

    String str8("World");
    str6 = str8;
    cout << "After assignment: " << str6.CStr() << endl;

    cout << "Is 'abc' less than 'def'? " << (String("abc") < String("def") ? "Yes" : "No") << endl;

    system("pause");
}