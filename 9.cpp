class Solution {
public:
    bool isPalindrome(int x) {
        
    }
    int length_of_arr(int x){
    int count=0;

    int i=0;
    while(x>0){
        count++;
        x=x/10;
    }
    return count;
}
};