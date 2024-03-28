class add_class{

private:
    int digit;

public:
    add_class(int x) : digit(x) {}
    int operator+ (int x) {return digit + x;}
    int operator- (int x) {return digit - x;};
    add_class operator() (int x) {return add_class(digit + x);}
    friend bool operator== (int x, const add_class &y) {return x == y.digit;}
};

auto add(int n)
{
    return add_class(n);
}