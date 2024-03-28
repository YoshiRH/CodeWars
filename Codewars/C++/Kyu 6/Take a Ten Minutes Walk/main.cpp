#include<vector>
#include <algorithm>

bool isValidWalk(std::vector<char> walk);

int main() {
    isValidWalk({'n','s','n','s','n','s','n','s','n','s'});

    return 0;
}

bool isValidWalk(std::vector<char> walk) {
    if(walk.size() != 10) return false;

    int count_x{0}, count_y{0};

    count_x += std::count(walk.begin(), walk.end(), 'n');
    count_x -= std::count(walk.begin(), walk.end(), 's');
    count_y += std::count(walk.begin(), walk.end(), 'w');
    count_y -= std::count(walk.begin(), walk.end(), 'e');

    return (count_x == 0 && count_y == 0);
}
