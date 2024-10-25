#include <iostream>
#include <cstring>
#include"String.h"
#include<Windows.h>

using namespace std;



int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    cout << "Кількість створених об'єктів: " << String::getCounter() << endl;

    String str1; 
    String str2(100); 
    String str3("Hello,word!");

    cout << "Кількість створених об'єктів: " << String::getCounter() << endl;

    str1.print();
    str2.print();
    str3.print();

    str2.input();
    str2.print();

    cout << "Кількість створених об'єктів: " << String::getCounter() << endl;

    
}
