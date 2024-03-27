#include <vector>

using namespace std;

typedef unsigned long long ull;
class ProdFib
{
public:
    static vector<ull> productFib(ull prod)
    {
        ull x{0};
        ull y{1};

        while (x*y < prod) {
            swap(x, y);
            y += x;
        }

        return {x, y, ((x*y == prod) ? true : false)};
    }
};