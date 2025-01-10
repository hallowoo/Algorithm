#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string>cansay = {"aya", "ye", "woo", "ma"};
    
    for(string s : babbling){int count = 0;
        for(string r : cansay){string zr = "";
            for(int i = 0; i < r.size(); i++){
                    zr += '0';
                }           
            while(true){
               
                if(s.find(r) == string::npos){
                    break;
                }
                if(s.find(r + r) != string::npos){
                    break;
                }                
                s.replace(s.find(r), r.size(), zr);
                count += r.size();
            }            
        }if(s.size() == count){answer++;}
    }
    
    return answer;
}