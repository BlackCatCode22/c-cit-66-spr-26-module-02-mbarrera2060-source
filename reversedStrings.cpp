#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string input_str;
    std::cout << "Please enter a string:";
    std::getline(std::cin, input_str);
    std::reverse(input_str.begin(), input_str.end());
    std::cout<<"The reversed string is:"<<input_str<<std::endl;
    return 0;
}