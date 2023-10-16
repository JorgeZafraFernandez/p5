/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file boolean_operators.cc
 * @author Jorge Zafra Fernández
 * @date 13/10/2023
 * @brief This program uses two boolean variables to show the posible outputs of the different boolean operators.
 *
 *
 * @see 
 */


#include <iostream>

int main() {
  std::cout << "\n\n\nWhen both booleans are false:\n\n" << std::endl;
  bool boolean_variable_1 = false;
  bool boolean_variable_2 = false;
  for(int i{0}; i < 2; i++) {
    std::cout << "NOT boolean 1: " << !boolean_variable_1 << "\nNOT boolean 2: " << !boolean_variable_2 << std::endl;
    std::cout << "OR: " << (boolean_variable_1 || boolean_variable_2) << std::endl;
    std::cout << "AND: " << (boolean_variable_1 && boolean_variable_2) << std::endl;
    if (i==0) {
      std::cout << "\n\n\nWhen boolean 1 is true and boolean 2 is false:\n\n" << std::endl;
      boolean_variable_1 = true;
    }
 }
  std::cout << "\n\n\nWhen boolean 1 is false and boolean 2 is true:\n\n" << std::endl;
  boolean_variable_1 = false;
  boolean_variable_2 = true;
  for(int i{0}; i < 2; i++) {
    std::cout << "NOT boolean 1: " << !boolean_variable_1 << "\nNOT boolean 2: " << !boolean_variable_2 << std::endl;
    std::cout << "OR: " << (boolean_variable_1 || boolean_variable_2) << std::endl;
    std::cout << "AND: " << (boolean_variable_1 && boolean_variable_2) << std::endl;
    if (i==0) {
      std::cout << "\n\n\nWhen boolean 1 is true and boolean 2 is true:\n\n" << std::endl;
      boolean_variable_1 = true;
    }
  }
}
