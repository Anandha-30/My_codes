#include <iostream>

int countTrailingZeroes(int n) {
    int count = 0;
    
    // Keep dividing n by 5 and accumulating the count
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    
    return count;
}

int main() {
    int n;
    std::cout << "Enter an integer n: ";
    std::cin >> n;

    int trailingZeroes = countTrailingZeroes(n);

    std::cout << "Number of trailing zeroes in " << n << "! is: " << trailingZeroes << std::endl;

    return 0;
}
//5