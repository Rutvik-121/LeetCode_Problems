class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=accounts[0][0];
        int m=accounts.size();
        for(int i=0;i<m;i++){
            int j=0,n=accounts[i].size();
            if(n==1 && accounts[i][j] > max)
                max=accounts[i][j];
            for(j=1;j<n;j++){
                accounts[i][j]+=accounts[i][j-1];
				if(accounts[i][j] > max)
					max=accounts[i][j];
            }
        }
        return max;
    }
};
