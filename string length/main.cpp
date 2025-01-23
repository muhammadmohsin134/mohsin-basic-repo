#include <iostream>

using namespace std;

int main()
{
        std::string userInput;
        std::cout << "Enter a string: ";
        std::getline(std::cin, userInput);
        std::cout << "The length of the string is: " << userInput.length() << std::endl;

    return 0;


}
