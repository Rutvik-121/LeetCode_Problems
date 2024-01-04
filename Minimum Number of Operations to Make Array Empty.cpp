class Solution {
public:
    int minOperations(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int cnt=1;
        int result=0;
        
        for(int i=1;i<nums.size();i++)
        {

            if(nums[i]==nums[i-1])
            {
                cnt ++;
            }
            else if(nums[i]!=nums[i-1])
            {
                if(cnt==1)
                {
                    result=-1;
                    break;
                }
                else {

                    if(cnt%3==0)
                    {
                        result +=(cnt/3);
                    }
                    else{

                        result +=((cnt/3)+1);
                    }
                }
                cnt =1;
            }
        }
        if(cnt==1)
                {
                    result=-1;
                }
                else {

                    if(cnt%3==0)
                    {
                        result +=(cnt/3);
                    }
                    else{

                        result +=((cnt/3)+1);
                    }
                }
    return result;
        
    }
};
