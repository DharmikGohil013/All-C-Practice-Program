#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string leftAlignedText = "Left Aligned";
    std::string rightAlignedText = "Right Aligned";

    // Left alignment
    std::cout << std::left << std::setw(20) << leftAlignedText << std::endl;

    // Right alignment
    std::cout << std::right << std::setw(20) << rightAlignedText << std::endl;

    return 0;
}
