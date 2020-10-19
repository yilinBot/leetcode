#include <iostream> 
using namespace std; 

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return build(S) == build(T);
    }

    string build(string str){
        string ret; 
        for(char ch : str){
            if(ch != '#'){
                ret.push_back(ch);
            }else if(!ret.empty()){ //string :: empty, test if the string length is 0, false otherwise
                ret.pop_back();
            }
        }
        return ret; 
    }
};