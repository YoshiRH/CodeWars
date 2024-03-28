#include <iostream>
#include <vector>
int FindOutlier(const std::vector<int>& arr);


int main()
{
    std::vector<int> arr {0,2,4,6,8,10,3,12,-2};
    std::cout << FindOutlier(arr) << std::endl;
    return 0;
}

int FindOutlier(const std::vector<int>& arr)
{
    int even;
    int odd;

    int evCount = 0;
    int oddCount = 0;

    for (auto x : arr)
        x % 2 == 0 ? (evCount++, even = x) : (oddCount++, odd = x);

    return evCount < oddCount ? even : odd;
}
