#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

std::unordered_map<std::string, int> count_characters(std::string& s) {
    std::unordered_map<std::string, int> counts;

    for (char c : s) {
        std::string char_str = "";
        char_str += c;

        counts[char_str]++;
    }

    return counts;
}

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::unordered_map<std::string, int> res = count_characters(s);
    std::map<std::string, int> ordered_res(res.begin(), res.end());
    for (auto const& pair : ordered_res) {
        std::cout << pair.first << ' ' << pair.second << '\n';
    }

    return 0;
}