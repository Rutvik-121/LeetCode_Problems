class Solution {
public:
    int maxScore(string s) {
        int total_ones=0,left_zeros=0,max_score=0;
        for(int i=0;i<s.length();i++){
        if(s[i]=='1')
            {total_ones++;}
        }
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='0')
            {left_zeros++;}
            else{
                total_ones--;
            }
        int score=left_zeros+total_ones;
        max_score=max(max_score,score);
        }
        return max_score;
        
    }
};
