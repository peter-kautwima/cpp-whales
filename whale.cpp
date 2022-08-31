#include <iostream>
#include <vector>
#include <string>
 
int main() {
 
  // Whale, whale, whale.
  // What have we got here?
 std::string input = "hi, human";

 std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
 
  // vowels.push_back('a');
  // vowels.push_back('e');
  // vowels.push_back('i');
  // vowels.push_back('o');
  // vowels.push_back('u');

  std::vector<char> result;

  for (int i = 0; i < input.size(); i++) {

    for (int j = 0; j < vowels.size(); j++) {
      if(input[i] == vowels[j]) {
        result.push_back(input[i]);
      }
    }
    
    if(input[i] == 'e' || input[i] == 'u') {
      result.push_back(input[i]);
    }

  }

  for (int l = 0; l < result.size(); l++){
    std::cout << result[l];
  }
}
