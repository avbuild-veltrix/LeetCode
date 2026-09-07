class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0;
        vector<int> maxAlt = {0};
        for(int i = 0; i < gain.size(); i++){
            int push = alt + gain[i];
            maxAlt.push_back(push);
            alt = alt + gain[i];
        }
        int max = maxAlt[0];
        for(int i = 0; i < maxAlt.size(); i++){
            if(maxAlt[i] > max){
                max = maxAlt[i];
            }
        }
        return max;
    }
};