#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

string to_roman(int num);
int from_roman(string rnum);

int main() {
    to_roman(1000);
    from_roman("M");
    return 0;
}

string to_roman(int num) {
        vector<string> roman = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int> roman_value = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string result {};

        for (int i {0}; i < roman.size(); ++i) {

            while (num >= roman_value[i]) {
                num -= roman_value[i];
                result += roman[i];
            }

        }

        return result;
}

int from_roman(string rnum) {
        unordered_map<char, int> roman_to_dec = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int result {0};

        for (int i {0}; i < rnum.size(); ++i) {

            if (i+1 < rnum.size() && roman_to_dec[rnum[i]] < roman_to_dec[rnum[i+1]]){
                result -= roman_to_dec[rnum[i]];
            }
            else {
                result += roman_to_dec[rnum[i]];
            }

        }

        return result;
}
