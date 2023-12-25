class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        int a = 1;
        int b = 1;
        for(int i=n-1; i>=0; i--)
        {
            int op1 = s[i] - '0';
            int op2 = 0;
            int cur = 0;
            if(i<n-1) op2 = op1*10 + s[i+1] - '0';
            if(op1 > 0)
            {
                cur+=b;
                if(op2 > 0 and op2 <= 26) cur+=a;
            }
            a = b;
            b = cur;
        }
        return b;
    }
};
