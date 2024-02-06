#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int score(const vector<int>& dice);

int main() {
    vector<int> d {2,4,4,5,4};
    cout << score(d) << endl;

    return 0;
}

int score(const vector<int>& dice) {
    int d_1 = count(dice.begin(),dice.end(),1);
    int d_2 = count(dice.begin(),dice.end(),2);
    int d_3 = count(dice.begin(),dice.end(),3);
    int d_4 = count(dice.begin(),dice.end(),4);
    int d_5 = count(dice.begin(),dice.end(),5);
    int d_6 = count(dice.begin(),dice.end(),6);
    int points{0};

    if(d_1 >= 3) points+=1000;
    if(d_2 >= 3) points+=200;
    if(d_3 >= 3) points+=300;
    if(d_4 >= 3) points+=400;
    if(d_5 >= 3) points+=500;
    if(d_6 >= 3) points+=600;

    points += ((d_1%3)*100)+((d_5%3)*50);

    return points; // your code here
}


