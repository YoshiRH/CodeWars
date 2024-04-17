#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
    //Creating vector for the tower
    std::vector<std::string> final {};

    //Loop for creating a single line in a tower
    for(int i=1; i<=nFloors; i++){
        //Calculating the right amount of stars 2*i-1 so the stars will always have 2 more stars each line
        std::string stars(2 * i - 1, '*');
        //Calculating the right amount of blank spaces for each side of stars
        std::string blank(nFloors - i, ' ');
        //Inserting the tower line to the vector
        final.push_back(blank + stars + blank);
    }

    //Returning tower
    return final;
}