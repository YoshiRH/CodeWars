#include <string>
#include <map>
using namespace std;

string rot13(string str) {
    string main {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string rot13 {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
    int index = 0;

    for (int i = 0; i < size(str); ++i) {
        if (main.find(str[i]) != string::npos) {
            index = main.find(str[i]);
            str[i] = rot13[index];
        }
    }

    return str;
}