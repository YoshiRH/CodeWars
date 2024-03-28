#include <vector>

using namespace std;

int maxSequence(const vector<int>& arr){
    int maximum {0}, actual {0};

    for (auto x: arr) {
        actual = max(0, x + actual);
        maximum = max(maximum, actual);
    }

    return maximum;
}