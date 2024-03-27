#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

std::string disemvowel(const std::string& str);

int main() {

    string xxx {"This website is for losers LOL!"};
    disemvowel(xxx);

    return 0;
}

std::string disemvowel(const std::string& str) {
    vector<char> vovels{'a', 'e', 'i', 'o', 'u'};
    string new_text{};

    for (char c: str) {
        bool test = any_of(vovels.begin(), vovels.end(), [c](char x) { return x == tolower(c); });
        if (!test) {
            new_text += c;
        }
    }

    return new_text;
}