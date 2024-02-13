#include <iostream>
#include <vector>
#include <algorithm>

bool comp(std::vector<int>&a, std::vector<int>&b);

int main() {
    std::vector<int> a {121, 144, 19, 161, 19, 144, 19, 11};
    std::vector<int> b {14641, 20736, 361, 25921, 361, 20736, 361, 121};
    comp(a,b);
    return 0;
}

bool comp(std::vector<int>&a, std::vector<int>&b) {
    for(auto &number:a){
        number = number*number;
    }
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    return a==b;
}