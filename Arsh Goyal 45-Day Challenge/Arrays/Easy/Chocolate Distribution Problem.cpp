class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    if (m == 0 || n == 0) {
        return 0;
    }
    sort(a.begin(),a.end());
    int min_diff = INT_MAX;
    for (int i = 0; i <= n - m; i++) {
        int current_diff = a[i + m - 1] - a[i]; 
        min_diff = min(min_diff, current_diff);
    }

    return min_diff;
    
    }   
};
