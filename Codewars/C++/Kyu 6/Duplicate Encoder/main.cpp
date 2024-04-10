#include <string>

using namespace std;

string duplicate_encoder(const string& word){
    string final, newWord;

    for(char x: word){
        newWord += tolower(x);
    }


    for(int i=0; i<newWord.length(); i++){

        if(count(newWord.begin(),newWord.end(),newWord[i]) > 1){
            final += ")";
        }

        else final += "(";

    }

    return final;
}