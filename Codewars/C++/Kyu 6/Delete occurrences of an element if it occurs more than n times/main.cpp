using namespace std;

vector<int> deleteNth(vector<int> arr, int n)
{
    //New vector for the correct outputs
    vector<int> newList;

    for(int i=0; i < arr.size(); i++){
        //Checking if the number is already more than n times in the new vector
        //if not, then pushing that number into the new vector
        if(count(newList.begin(), newList.end(), arr[i]) < n){
            newList.emplace_back(arr[i]);
        }
    }

    //Returning correct output
    return newList;
}