#include <iostream>
#include <iomanip>

int main() {
    int t1, t2, t3;
    float total_time;

    // Ввід значень t1, t2, t3
    std::cout << "Input time t1: ";
    std::cin >> t1;
    std::cout << "Input time t2: ";
    std::cin >> t2;
    std::cout << "Input time t3: ";
    std::cin >> t3;

    // Обчислення загального часу
    total_time = static_cast<float>(t1 + t2 + t3);

    // Виведення результату
    std::cout << "All time: " << std::fixed << std::setprecision(2) << total_time << " hours" << std::endl;

    return 0;
}
