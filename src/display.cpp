#include "display.h"
#include <string.h>
#include <iostream>

// using namespace std;

string Display::showText(int str)
{
    // string msg=to_string(str);
    std::cout << "PrintedtTxtNo " << str << "\n";
    return "";
}


void Display::showMessage(){
    std::cout << "Display.CPP Text" << "\n";
}