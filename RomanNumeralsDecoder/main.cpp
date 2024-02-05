#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> rom_dec = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};

int solution(const string& roman);

int main() {
    cout << solution("MDCLXVI");
    return 0;
}

int solution(const string& roman) {
    int modern {0};
    int old {0};

    for(auto x : roman){
        int current = rom_dec[x];
        modern += current;

        if(current > old){
            modern -= 2 * old;
        }

        old = current;
    }

    return modern;
}
