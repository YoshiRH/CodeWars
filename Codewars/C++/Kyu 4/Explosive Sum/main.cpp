#include <vector>
using ull = unsigned long long;

ull exp_sum(unsigned int n)
{
    std::vector<ull> vec(n+1,0);

    vec[0]=1;

    for (unsigned int i{1}; i <= n; ++i)
        for (unsigned int j{0}; (j + i) <= n; ++j)
            vec[j + i]+=vec[j];

    return vec[n];
}