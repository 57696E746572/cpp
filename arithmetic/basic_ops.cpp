#include <iostream>  

int main() {
    int x = 25;
    int a = 15;
    int b = 30;
    int result1 = a + b;
    int result2 = a - b;
    int result3 = a * x;
    int result4 = a / b;
    int result5 = a % b;
  
    std::cout << a << "+" << b << "=" << result1 << std::endl;
    std::cout << a << "-" << b << "=" << result2 << std::endl;
    std::cout << a << "*" << x << "=" << result3 << std::endl;
    std::cout << a << "/" << b << "=" << result4 << std::endl;
    std::cout << a << "%" << b << "=" << result5 << std::endl;

    return 0;  
}  
