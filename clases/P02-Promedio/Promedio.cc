/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Promedio.cc
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es 
  * @date 16/10/2023
  * @brief El programa lee una secuencia de números reales mayores que 0 y
  *        devuelve el promedio con dos dígitos de exactitud.
  *        
  *        
  *        
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P78142_en
  */

#include <iostream>
#include <vector>

int main() {
  std::vector<int> inputs;
  int input{0};
  while ( std::cin >> input ) {
    inputs.emplace_back(input);
  }

} 
