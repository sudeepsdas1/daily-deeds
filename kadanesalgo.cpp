// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxi=INT_MAX;
//         for(int i=0;i<=nums.size();i++){
//             int sum=0;
//             for(int j=i;j<=nums.size();i++){
//             sum=sum+nums[j];
//             maxi=max(maxi,sum);
//             }
//         }
        
//         return maxi;
//     }
// };


/*============================   this approach is not good  =======================*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestsum=INT_MIN;
        int currentsum=0;
        for(int i=0;i<=nums.size();i++){
            currentsum= max(nums[i],currentsum+nums[i]);
            bestsum=max(bestsum,currentsum);
        }
        
        return bestsum;
    }
};