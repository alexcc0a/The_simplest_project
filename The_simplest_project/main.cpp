//
//  main.cpp
//  The_simplest_project
//
//  Created by Александр Нестеров on 8/9/24.
//

#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);
    std::cout << "Здравствуйте, " << name << "!" << std::endl;
    return 0;
}
