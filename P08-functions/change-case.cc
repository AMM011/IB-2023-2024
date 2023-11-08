#include <iostream>
#include <string>

std::string LowerToupper(const std::string& word);

int main () {
  std::string word {""};
  getline(std::cin, word);
  std::string new_word = LowerToupper(word) ;
  std::cout << new_word << std::endl;
  return 0;
}

std::string LowerToupper(const std::string& word) {
  std::string new_word {""};
  for(int i {0}; i < word.length(); ++i) {
    if(islower(word.at(i))) new_word.push_back(toupper(word.at(i)));
    else new_word.push_back(tolower(word.at(i)));
  }
  return new_word;
}
