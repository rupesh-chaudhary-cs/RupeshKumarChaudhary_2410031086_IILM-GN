class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int M=arr1.size();
        vector<int>v;
        vector<int>v1;
        int N=arr2.size();
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(arr2[i]==arr1[j]){
                    v.push_back(arr1[j]);
                    arr1[j]=INT_MAX;
                }
            }
        }
        for(int k=0;k<M;k++){
            if(arr1[k]!=INT_MAX){
                v1.push_back(arr1[k]);
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            v.push_back(v1[i]);
        }
        arr1=v;
        return arr1;
        
    }
};