#include <iostream>
#include <Windows.h>
#include "String.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    String str1("sdqcg");
    String str2("rgfas34");

    
    String result = str1 * str2;

    cout << "Перетин рядків: ";
    result.print();

  
}
