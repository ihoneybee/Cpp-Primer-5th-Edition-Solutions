#include <iostream>

int main(){
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The Product of " << v1; 
    << "and " << v2; // illegal
    << " is " << v1 * v2 << std::endl; // illegal

    return 0;
}
