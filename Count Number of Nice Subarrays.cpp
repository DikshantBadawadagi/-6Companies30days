class Solution {
    private:
    int solve(vector<int>&nums,int k){
        int n = nums.size();
        int l=0,r=0;
        int sum=0,cnt=0;
            if(k < 0)return 0;
        while(r < n){
            sum+=nums[r]%2;
            while(sum > k){
                sum-=nums[l]%2;
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        //k=0 -1
        return solve(nums,k) - solve(nums,k-1);
    }
};
