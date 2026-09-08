class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int>v;
        v=heights;
        int M=v.size();
        sort(v.begin(),v.end());
        int N=heights.size();
        int j=0;
        for(int i=0;i<N;i++){
            if(heights[i]!=v[j]){
                count++;
                
            }
            j++;
        }


        return count;                                                                                                                                                                                                                                           
    }
};