#pragma once
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class String {
private:
    char* str;
    size_t length;
    int id_ = ++counter;
    static size_t counter;

public:

    String() : String(80) {}


    String(size_t len) : length(len) {
        str = new char[length + 1];
        if (str != nullptr) {
            str[0] = '\0';
        }
    }


    String(const char* userStr) : length(userStr ? strlen(userStr) : 0) {
        str = new char[length + 1];
        if (userStr) {
            strcpy_s(str, length + 1, userStr);
        }
        else {
            str[0] = '\0';
        }
    }



    String(const String& other) : length(other.length) {
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
       
    }


    String& operator=(const String& other);

    ~String();

    const char* getStr()const {
        return this->str;
    }
    const size_t& getLength()const;

    void setStr(const char* str);
    
    void input();
        


    void print() const;
    static size_t getCounter();
};

inline const size_t& String::getLength() const
{
    return this->length;
}


inline void String::print() const
{
    cout << endl;
    cout << "Рядок: " << str << "\nДовжина: " << length <<endl;
}

inline size_t String::getCounter()
{
    return counter;
}
