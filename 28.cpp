class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            string s=haystack.substr(i,needle.length());

            if(s==needle){
                return i;
            }

        }
        return -1;
    }
};