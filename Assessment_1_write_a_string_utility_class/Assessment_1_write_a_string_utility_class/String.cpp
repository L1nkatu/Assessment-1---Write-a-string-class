// Changed the preprocessor definitions on my project to include _CRT_SECURE_NO_WARNINGS to allow for the classic "C style" string functions such as strcmp, strlen etc to run without errors/warnings
#include <iostream>
#include "String.h"
#include <cstring>
#include <cctype>
#include <cstddef>
using namespace std;


String::String()
{
	data = new char[1];
	data[0] = '\0';

}  

String::String(const char* _str)
{
	data = new char[strlen(_str) + 1]; // Allocating memory for a character array with size equal to the length of _str + 1 (for the null terminator)
	strcpy(data, _str); // Copy _str into data
}

String::String(const String& _other)
{
	data = new char[_other.Length() + 1];
	strcpy(data, _other.data);
}

String::~String()
{
	delete[] data;
}



size_t String::Length() const 
{
	size_t length = 0;  // Initialising the string length to zero

	while (data[length] != '\0')
	{
		length++;  
	}
	return length;

}

char& String::CharacterAt(size_t _index)
{
	return data[_index];
}

const char& String::CharacterAt(size_t _index) const
{
	return data[_index];
}


bool String::EqualTo(const String& _other) const 
{
	return strcmp(data, _other.data) == 0;
}

String& String::Append(const String& _str)
{
	size_t oldLength = Length();
	char* newData = new char[oldLength + _str.Length() + 1];
	strcpy(newData, data);
	strcat(newData, _str.data);
	delete[] data;
	data = newData;
	return *this;
}

String& String::Prepend(const String& _str)
{
	size_t oldLength = Length();
	char* newData = new char[oldLength + _str.Length() + 1];
	strcpy(newData, _str.data);
	strcat(newData, data);
	delete[] data;
	data = newData;
	return *this;
}

const char* String::CStr() const
{
	return data;
}

String& String::ToLower() 
{
	size_t len = Length();
	for (size_t i = 0; i < len; ++i) {
		data[i] = tolower(data[i]);
	}
	return *this;
}

String& String::ToUpper()
{
	size_t len = Length();
	for (size_t i = 0; i < len; ++i) {
		data[i] = toupper(data[i]);
	}
	return *this;
}

size_t String::Find(const String& _str)
{
	char* found = strstr(data, _str.data);
	if (found != nullptr) {
		return found - data;
	}
	return string::npos;
}

size_t String::Find(size_t _startIndex, const String& _str)
{
	char* found = strstr(data + _startIndex, _str.data);
	if (found != nullptr) {
		return found - data;
	}
	return string::npos;
}

String& String::Replace(const String& _find, const String& _replace)
{
	size_t found = Find(_find);
	while (found != std::string::npos) {
		std::string temp(data);
		temp.replace(found, _find.Length(), _replace.data);
		*this = temp.c_str();
		found = Find(_find);
	}
	return *this;
}

String& String::ReadFromConsole()
{
	cin >> data;
	return *this;
}

String& String::WriteToConsole()
{
	cout << data;
	return *this;
}

bool String::operator==(const String& _other)
{
	return EqualTo(_other);
}

bool String::operator!=(const String& _other)
{
	return !EqualTo(_other);
}

bool String::operator<(const String& _other)
{
	return strcmp(data, _other.data) < 0;
}

String& String::operator=(const String& _str)
{
	if (this != &_str) {
		delete[] data;
		data = new char[_str.Length() + 1];
		strcpy(data, _str.data);
	}
	return *this;
}

char& String::operator[](size_t _index)
{
	return CharacterAt(_index);
}

const char& String::operator[](size_t _index) const
{
	return CharacterAt(_index);
}




