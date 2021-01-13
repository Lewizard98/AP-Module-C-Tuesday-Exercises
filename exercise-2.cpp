#include <iostream>

int main() {
  std::string input;
  std::string output;
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
    output += tolower(input[i]);
  }

  std::cout << input << " converted to lowercase is: " << output;


}
