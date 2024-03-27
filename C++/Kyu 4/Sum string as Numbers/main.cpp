#include <string>
#include <algorithm>

using namespace std;

string sum_strings(const string &a, const string &b)
{
    string final;

    int num {0};
    int n = max(a.size(),b.size());

    for (int i{0}; i<n ; i++){
        if (i < a.size()) num += a[a.size()-1-i]-'0';
        if (i < b.size()) num += b[b.size()-1-i]-'0';

        final.push_back('0'+num%10);
        num /= 10;
    }

    final.push_back(num+'0');

    while (final.size() > 1 && final.back() == '0')
        final.pop_back();

    reverse(final.begin(), final.end());
    return final;
}