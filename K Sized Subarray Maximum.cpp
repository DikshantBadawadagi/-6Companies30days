// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        int i=0,j=0,n=arr.size(),maxi=arr[0],ind;
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        
        while(j<n){
           pq.push({arr[j],j});
           
           if(j-i+1 >= k){
               while(pq.top().second < i)pq.pop();
               ans.push_back(pq.top().first);
               i++;
           }
           
           j++;
        }
        return ans;
    }
};
