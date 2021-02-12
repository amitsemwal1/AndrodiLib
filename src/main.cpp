#include "display.h"

#include <iostream>
int main(int argc, char *args[])
{
    Display dis;
    for (int i = 0; i < 10; i++)
    {
        Display::showText(i);
        
        // Display::showMessage();
        // std::cout << "PrintedtTxtNo"+i << "\n";
    }
    
}