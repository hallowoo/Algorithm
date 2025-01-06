#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> n = {"zero", "one", "two", "three", "four", 
                        "five", "six", "seven", "eight", "nine"};
    
    for(int i = 0; i < n.size(); i++){
        if(s.find(n[i]) != string::npos){
            while(s.find(n[i]) != string::npos){s.replace(s.find(n[i]), n[i].length(), to_string(i));}
                  }
    }
    answer = stoi(s);
    return answer;
}