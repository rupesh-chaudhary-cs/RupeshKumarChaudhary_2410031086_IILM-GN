class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int N=arr.size();
        int maximum=INT_MIN;
        for(int i=0;i<N;i++){
            
            for(int j=i+1;j<N;j++){
                if(arr[j]>maximum){
                    maximum=arr[j];
                }
            }
            if(i==N-1){
                arr[i]=-1;
                return arr;
            }
            arr[i]=maximum;
            maximum=INT_MIN;
        }
        return arr;
    }
};