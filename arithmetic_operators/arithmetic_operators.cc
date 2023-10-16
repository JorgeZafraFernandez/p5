/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file arithmetic_operators.cc
  * @author Jorge Zafra Fernández
  * @date 13/10/2023
  * @brief The program calculates all the operations possible between two
  *        integers and then compares them.
  * 
  * @see 
  */


#include <iostream>

int main() {
  int first_number, second_number;
  std::cout << "Write two numbers: ";
  std::cin >> first_number >> second_number;
  std::cout << first_number << " % " << second_number << " = " << first_number % second_number
            << std::endl;
  std::cout << first_number << " / " << second_number << " = " << first_number / second_number 
            << std::endl;
  std::cout << first_number << " + " << second_number << " = " << first_number + second_number
            << std::endl;
  std::cout << first_number << " - " << second_number << " = " << first_number - second_number
            << std::endl;
  std::cout << first_number << " * " << second_number << " = " << first_number * second_number
            << std::endl;
}
