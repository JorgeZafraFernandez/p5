/** Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @author Jorge Zafra Fernández alu0101567433@ull.edu.es
  * @date 13/10/2023
  * @brief A program which, given a uppercase letter, returns its lowercase
  *        version.
  * @see 
  */

#include <iostream>

void Presentation() {
  std::cout << "This program's mission is, given a uppercase letter, return ";
  std::cout << "its lowercase counterpart!\n";
}
 
char UppercaseToLowercase(char letter) {
  int letter_integer{static_cast<int>(letter)};
  if (letter_integer >= 65 && letter_integer <= 90) {
    char lowercase_letter{static_cast<char>(letter_integer + 32)};
    return lowercase_letter;
  }  else {
      std::cout << "That is not a uppercase letter!" << std::endl;
      return letter;
  }
}

int main() {
  Presentation();
  char letter;
  std::cin >> letter;
  std::cout << UppercaseToLowercase(letter) << std::endl;
  return 0;
}
