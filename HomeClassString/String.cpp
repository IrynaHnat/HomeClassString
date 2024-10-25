#include "String.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;



String& String::operator=(const String& other)
{
	if (this != &other) {
		delete[] str;
		length = other.length;
		str = new char[length + 1];
		if (str != nullptr) {
			strcpy_s(str, length + 1, other.str);
		}
	}
	return *this;
}

String::~String()
{
	if (str != nullptr)
	{
		cout << "\n \t\t Dtor for " << str << " done " << endl;
		delete[] str;
		str = nullptr;
	}
	--counter;
}

void String::setStr(const char* str)
{
	if (this->str != nullptr)
		delete[] this->str;
	size_t size = strlen(str) + 1;
	this->str = new char[size];
	strcpy_s(this->str, size, str);
}

void String::input()
{
	cout << "Введіть рядок (макс. " << length << " символів): ";
	cin.getline(str, length + 1);
}

size_t String::counter = 0;