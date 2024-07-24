class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      /*BRUTE FORCE APPROACH
        class Solution {
        public:
            vector<vector<int>> threeSum(vector<int>& nums) {
                set<vector<int>> s;
                vector<vector<int>> result;
                int n = nums.size();
                sort(nums.begin(),nums.end());
                for(int i=0;i<n;i++){
                    for(int j=i+1;j<n;j++){
                        for(int k=j+1;k<n;k++){
                            if(nums[i]+nums[j]+nums[k]==0){
                                vector<int> triplet = {nums[i], nums[j], nums[k]};
                                s.insert(triplet); 
                            }
                        }
                    }
                }
               for(auto allTriplets : s)
                    result.push_back(allTriplets);
                return result;
            }
        };*/
      
        int n = nums.size();
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                } 
                else{
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    result.push_back(triplet);
                    j++;
                    k--; 
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k]== nums[k+1]) k--;
                }
            }
        }
        return result;

    }
};
