//https://leetcode.com/problems/largest-odd-number-in-string/submissions/
class Solution {
public:
    string largestOddNumber(string num) {
        string answer="";
        int flag=0;
        int i;
        for( i=num.size()-1;i>=0;i--)
        {
            int value=num[i]-'0';
                 if(value%2!=0) {
                     flag=1;
                     break;
                 }
               else num.erase(i);
        }
        return num;
        
    }
};
