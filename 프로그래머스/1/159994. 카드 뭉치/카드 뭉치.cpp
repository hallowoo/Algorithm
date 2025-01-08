#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";    
    int fntCrd1 = 0;
    int fntCrd2 = 0;
    
    for(int i = 0; i < goal.size(); i++){
        if(goal[i] == cards1[fntCrd1]){fntCrd1++;}
        else if(goal[i] == cards2[fntCrd2]){fntCrd2++;}
        else{return "No";}
    }
    
    return "Yes";
}