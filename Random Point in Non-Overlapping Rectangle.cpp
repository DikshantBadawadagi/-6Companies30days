class Solution {
public:

    vector<long long> area;
    vector<vector<int>> rect; 

    Solution(vector<vector<int>>& rects) {
        rect = rects;
        
        long long a,b,sum=0;
        for(auto r : rects) {
            a = r[2]-r[0]+1;
            b = r[3]-r[1]+1;
            sum += a*b;
            area.push_back(sum);
        }
    }
    
    vector<int> pick() {
        long long r = 1 + rand()%(area.back());
        int i = lower_bound(area.begin(), area.end(), r)-area.begin();

        auto rec = rect[i];
        int x = rec[0] + rand()%(rec[2]-rec[0]+1);
        int y = rec[1] + rand()%(rec[3]-rec[1]+1);
        return {x,y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(rects);
 * vector<int> param_1 = obj->pick();
 */
