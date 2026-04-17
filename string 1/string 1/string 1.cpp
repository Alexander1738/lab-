#include <iostream>
#include <string>

int compare_strings(std::string& s1, std::string& s2) {
    if (s1 < s2) {
        return -1; 
    }
    if (s1 > s2) {
        return 1;  
    }
    return 0;      
}
int main() {
    std::string s1;
    std::getline(std::cin, s1);
    std::string s2;
    std::getline(std::cin, s2);
    int res = compare_strings(s1, s2);
    std::cout << res << '\n';
    return 0;
}