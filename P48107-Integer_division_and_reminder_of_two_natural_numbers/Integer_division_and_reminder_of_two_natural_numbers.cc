/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file integer_division_and_reminder_of_two_natural_numbers.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 13/10/2023
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107_en
  */

#include <iostream>

void Presentacion() {
  std::cout << "The program reads two natural numbers a and b, with b > 0, and prints ";
  std::cout << "the integer division d and the remainder r of a divided by b.";
  std::cout << "\nBy definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.\n";
}

int main () {
  // Presentacion();
  int number1{-1}, number2{2};
  // std::cout << "Write two natural numbers.\n";
  std::cin >> number1 >> number2;
  if (number2 <= 0 && number1 < 0) {
    std::cout << "Invalid number!\n";
    return 0;
  }
  std::cout << number1/number2 << " " << number1%number2 << std::endl;
  return 0;
}
