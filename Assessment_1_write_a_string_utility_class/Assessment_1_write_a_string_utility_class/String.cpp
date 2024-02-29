#include<iostream>
#include "String.h"
#include <cstring>
#include <cstddef>

using namespace std;


String::String(){}  //  Member function for String class

String::String(const char* _str)
{

}

String::String(const String& _other)
{

}

String::~String(){}

//int String::dbug(int v) {
//	cout << "hi" << v << endl;
//	return v * 100;
//}


size_t String::Length() const 
{
	return 13;
	
}

char& String::CharacterAt(size_t _index)
{
	if (_index < 0 || _index > 13)
	{
		char _index[13] = {'\0'};
		return _index[13];
	}
	else {
		return;
	}
}

const char& String::CharacterAt(size_t _index) const
{


}


bool String::EqualTo(const String& _other) const {

	if (this->ID == _other.ID) { return true; }
	else
	{
		return false;
	}
}

String& String::Append(const String& _str)
{

}

String& String::Prepend(const String& _str)
{

}

const char* String::CStr() const
{

}

String& String::ToLower() 
{

}

String& String::ToUpper()
{

}

size_t String::Find(const String& _str)
{

}

size_t String::Find(size_t _startIndex, const String& _str)
{

}

String& String::Replace(const String& _find, const String& _replace)
{

}

String& String::ReadFromConsole()
{
	cout << "Please input some data: \n";
	cin >> input;
}

String& String::WriteToConsole()
{

}

bool String::operator==(const String& _other)
{

}

bool String::operator!=(const String& _other)
{

}

String& String::operator=(const String& _str)
{

}

char& String::operator[](size_t _index)
{

}

const char& String::operator[](size_t _index) const
{

}

bool String::operator<(const String& _other)
{
	return false;
}

bool String::operator>(const String& _other)
{
	return false;
}

