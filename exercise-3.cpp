#include <iostream>

int main() {
  std::string input;
  std::string output = "";
  std::string inputLower = "";
  bool singleInput;

  while(true){
    std::cout << "Please enter a word: ";
    getline(std::cin, input);

    singleInput = true;

    for(int i = 0; i < input.length(); i++){
      if (input[i] == ' '){
        singleInput = false;
      } 
    }
    if(singleInput){
      break;
    } else {
      std::cout << "Please enter a single word only...\n\n";
    } 
  }

  for(int i = 0; i < input.length(); i++){
    inputLower += tolower(input[i]);
  }

  for(int i = 1; i <= input.length(); i++){
    output += inputLower[input.length() - i];
  }
  
  if(inputLower == output){
    std::cout << "Yes, " << input << " is a palindrome";
  } else {
    std::cout << "No, " << input << " is not a palindrome";
  }
}
