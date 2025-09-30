#include <iostream>
#include <string>
#include <random>
#include "random.h"


int main()
{
    std::cout << "Hello World!" << std::endl;                   // Print Message "Hello World!". Back Line
    std::string userage("Sans age");                            // Memory caractere Age User
    std::cout << "your age" << std::endl;                       // Print Message "your age". Back Line
    std::cin >> userage;                                        // Case Remplie Par User 
    std::cout << "User Age = " << userage << std::endl;         // Print "User Age = " + Age User
    int rdm = getRandomNumber(0, 100);                          // Déclaration Variable rdm aux random

    std::cin.ignore();                                          // End Cin

    std::string userpsdo("No Pseudo");                          // Memory Caractere Pseudo User
    std::cout << "User Pseudo" << std::endl;                    // 
    std::getline(std::cin, userpsdo);                           // Line Remplie Par User
    std::cout << userpsdo << " had " << userage << std::endl;   // Print userpsdo "had" userage. Back Line
    std::cout << rdm;                                           //
    std::cout << "test";
}
