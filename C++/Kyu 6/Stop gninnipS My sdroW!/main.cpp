#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string spinWords(const string &str)
{
    string s{};
    stringstream ss(str);
    vector<string> vec{};

    while(getline(ss,s,' ')){
        vec.push_back(s);
    }

    s.clear();

    for(auto &x:vec){
        if(x.length() >= 5){
            reverse(x.begin(),x.end());
        }
        s += x + " ";
    }

    s.pop_back();

    return s;
}

int main() {
    string s = spinWords("Hey fellow warriors");
    cout << s << endl;

    return 0;
}


