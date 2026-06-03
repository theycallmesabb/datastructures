class Solution {
public:
    int countAsterisks(string s) {
       int bar=0;
        int count = 0;
        for(char c : s){
            if(c=='|')bar++;
            else{
           if(bar%2==0 && c=='*') count++;
            }
        }
        return count;
    }
};