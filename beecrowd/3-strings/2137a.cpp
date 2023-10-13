#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main() {
    int N;
    
    while (std::cin >> N) {
        std::vector<std::string> numbers;
        
        // Ler os N números
        for (int i = 0; i < N; i++) {
            std::string number;
            std::cin >> number;
            numbers.push_back(number);
        }
        
        // Ordenar os números
        std::sort(numbers.begin(), numbers.end());
        
        // Exibir os números ordenados
        for (const auto& number : numbers) {
            std::cout << number << std::endl;
        }
    }
    
    return 0;
}