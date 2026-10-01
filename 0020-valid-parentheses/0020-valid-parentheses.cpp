class Solution {
public:
    
    bool isMatching(char opening, char closing){
        if(opening == '(' && closing == ')'){
            return true;
        }
        if(opening == '{' && closing == '}'){
            return true;
        }
        if(opening == '[' && closing == ']'){
            return true;
        }
    return false;
    }
    
    bool isValid(string s) {
        char ch;
        char opening;
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            ch = s[i];
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else if(ch == ')' || ch == '}' || ch == ']'){
                if(st.empty()){
                    return false;
                }
                opening = st.top();
                st.pop();

                if(!isMatching(opening, ch)){
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};