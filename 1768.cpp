class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
       
       int i=0;
       while(i<word1.size() && i<word2.size()){
           s.push_back(word1[i]);
           s.push_back(word2[i]);
           i++;
       }
       while(i<word1.size()){
           s.push_back(word1[i]);
           i++;
       }
        while(i<word2.size()){
           s.push_back(word2[i]);
           i++;
       }

        return s;
    }
};