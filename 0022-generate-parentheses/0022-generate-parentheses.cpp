class Solution {
public:

    void generate(string current, int opening, int closing, int n, vector<string> &ans){
        if(opening == n && closing == n){
            ans.push_back(current);
            return;
        }

        if(opening < n){
            generate(current + "(", opening + 1, closing, n, ans);
        }
        
        if(closing < opening){
            generate(current + ")", opening, closing + 1, n, ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate("", 0 , 0, n, ans);
        return ans;
    }
};