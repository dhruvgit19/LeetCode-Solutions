class Solution {
public:

    int maxelem(vector<vector<int>>& mat, int mid){
        int maxi = -1;
        int index = -1;
        int n = mat.size();
        for(int i=0;i<n;i++){
            if(mat[i][mid] > maxi){
                maxi = mat[i][mid];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            int largestcol = maxelem(mat, mid);
            int left = -1;
            if(mid-1 >= 0){
                left = mat[largestcol][mid-1];
            }
            int right = -1;
            if(mid+1 < m){
                right = mat[largestcol][mid+1];
            }
            if(mat[largestcol][mid]>left && mat[largestcol][mid]>right){
                return {largestcol, mid};
            }
            else if(mat[largestcol][mid]<left) high = mid-1;
            else low = mid+1;
        }
        return {-1,-1};
    }
};