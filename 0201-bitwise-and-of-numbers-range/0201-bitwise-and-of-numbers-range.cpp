class Solution {
public:
    //Refer this video :https://www.youtube.com/watch?v=gLZZyvXTRLk
    int rangeBitwiseAnd(int left, int right) {
        
        while(right>left)
        {
            right=(right&right-1);
        }
        return right;
    }
};