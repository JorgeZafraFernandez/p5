/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Suma_de_números.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 16/10/2023
  * @brief The program reads two whole numbers, and prints the sum of them.
  *        
  *        
  *        
  * @bug There are no known bugs
  * @see https://docs.google.com/document/d/1a-JaZ2QD2Hj9q3pFYJR9ifrwDHDqIXljvv1hOIImjWY/edit#heading=h.gjdgxs
  */

#include <iostream>

int main() {
  // std::cout << "Write two whole numbers, and I'll sum them up!"
  int first_rational{-1}, second_rational{-1};
  std::cin >> first_rational >> second_rational;
  std::cout << first_rational + second_rational << std::endl;
} 
