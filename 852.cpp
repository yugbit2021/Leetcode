class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         priority_queue<int, vector<int> , greater<int>> h;
    int count=1;
    int data;
    int n=5;
    int i=0;
    int index=0;

    while(i<arr.size()){
        data=arr[i];
        if(count<=1){
            h.push(data);
            count++;
        }
        else{
            if(data>h.top()){
                h.pop();
                h.push(data);
                index=i;
            }
        }
        i++;
    }
    return index;
    }
};