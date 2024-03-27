#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>>& arr)
{
    std::vector<int> vec;
    if(arr[0].empty()) return vec;

    int a{0},b{0},c{0};
    int x = arr.size();

    while(x>0)
    {
        for(; b<x; ++b) vec.push_back(arr[a][b]); ++a; --b;
        for(; a<x; ++a) vec.push_back(arr[a][b]); --a; --b;
        for(; b>=c; --b) vec.push_back(arr[a][b]); --a; ++b; ++c;
        for(; a>=c; --a) vec.push_back(arr[a][b]); ++a; ++b; --x;
    }

    return vec;
}