#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>

int main() {
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Convert time point to time_t (a C-style time representation)
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    // Convert time_t to a string representation
    std::cout << "Current time: " << std::put_time(std::localtime(&now_c), "%F %T") << std::endl;

    return 0;
}
