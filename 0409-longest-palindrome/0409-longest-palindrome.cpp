class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128]={0};
        int ans=0;
        for(char c:s){
            freq[c]++;
        }
        for(int i=0;i<128;i++){
            ans+=(freq[i]/2)*2;
        }
        if(ans<s.size()){
            ans++;
        }
        return ans;
    }
};