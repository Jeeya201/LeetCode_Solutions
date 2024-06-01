class Solution {
    public int strStr(String haystack, String needle) {
        String s="";
        int j=0;
        
        for(int i=0;i<haystack.length();i++){
            if(haystack.charAt(i) == needle.charAt(j)){
                s=s+haystack.charAt(i);
                j++;
            }
            else{
                i = i - j;
                j=0;
                s="";
            }
            if(s.length()==needle.length() && s.equals(needle)){
                return i-j+1;
            }
        }
        return -1;
    }
}