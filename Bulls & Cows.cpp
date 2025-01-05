class Solution {
public:
    string getHint(string s, string g) {
        int cnt=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<s.length();i++){
            if(s[i] == g[i]){cnt++;s[i] = INT_MAX;g[i] = INT_MAX;}
            else{
                mpp[s[i]]++;
            }
        }

        int cnt2=0;
        for(char c : g){
            if(mpp[c]){
                if(mpp[c] > 0)
                    {mpp[c]--;
                    cnt2++;}
            }
        }
        return to_string(cnt) + "A" + to_string(cnt2) + "B";
        
    }
};
