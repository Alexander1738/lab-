#include <iostream>
#include <limits>
#include <string>

std::string safe_modify_string(std::string& s, int index, std::string& new_char) {
    std::string copy = s;

    if (index >= 0 && index < copy.length() && !new_char.empty()) {
        copy[index] = new_char[0];
    }

    return copy;
}

void ignore_line() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    int index;
    std::cin >> index;
    ignore_line();
    std::string new_char;
    std::getline(std::cin, new_char);

    std::string res = safe_modify_string(s, index, new_char);
    std::cout << res << '\n';
    return 0;
}