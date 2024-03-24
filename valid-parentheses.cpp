class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;

        for(char c : s){
            if(c == '('||c == '{'|| c == '['){
                temp.push(c);
            }else{
                if(temp.empty()|| (c == ')' && temp.top()!='(') ||
                (c=='}' && temp.top() != '{') || (c==']' && temp.top() != '[')) {
                    return false;
                }
                temp.pop();
            } 
        }

        return temp.empty();
    }
};