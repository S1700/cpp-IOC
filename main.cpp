#include <iostream>
#include <windows.h>

int main() {
    std::string name;
    int a;
    int b;
    int menuOpt;

    std::cout << "Whats your name? ";
    std::cin >> name;
    std::cout << "Whats your first number " << name << "? ";
    std::cin >> a;
    std::cout << "Whats your second number? ";
    std::cin >> b;

    std::cout << "Would you like to add (1), divide (2) or multiply (3)? ";
    std::cin >> menuOpt;

    if (menuOpt == 1) {
        int add = a + b;
        std::cout << "Added: " << add;
        Sleep(3000);
    } else if (menuOpt == 2) {
        int divide = a / b;
        std::cout << "Divided: " << divide;
        Sleep(3000);
    } else if (menuOpt == 3) {
        int mult = a * b;
        std::cout << "Multiplied: " << mult;
        Sleep(3000);
    } else {
        std::cout << "Invalid option, rerun the application because I don't know how to bring you back to the menu, i'm still learning!";
        Sleep(2000);
    }
}   