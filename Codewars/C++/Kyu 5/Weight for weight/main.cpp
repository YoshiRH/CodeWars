#include <algorithm>
#include <vector>
#include <sstream>

class WeightSort
{
public:
    // Function to calculate the sum of digits of the number.
    static int sumOfDigits(const std::string &number){
        int sum{0};

        for(char c : number){
            sum += c - '0';
        }

        return sum;
    }

    // Main sort function
    static std::string orderWeight(const std::string &s){
        std::stringstream ss(s);
        std::vector<std::string> numbers;
        std::string number;

        // Divide the string to the separate numbers.
        while (ss >> number){
            numbers.push_back(number);
        }

        // Sorting with rules (acording to the sum of digits of number).
        std::sort(numbers.begin(), numbers.end(), [](const std::string &a, const std::string &b){
            int sumA = sumOfDigits(a);
            int sumB = sumOfDigits(b);

            if(sumA == sumB){
                // if the sum is the same, we compare lexicographically;
                return a<b;
            }
            // if not, then just check which number is larger.
            return sumA<sumB;
        });

        // Change the numbers from vector to single string.
        std::string result;
        for(size_t i=0; i<numbers.size(); ++i){
            result += numbers[i];
            if(i != numbers.size()-1){
                result += " ";
            }
        }

        return result;
    }
};
