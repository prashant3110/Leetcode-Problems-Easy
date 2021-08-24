//  Given a square matrix mat, return the sum of the matrix diagonals.
//  Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sum=0;
        
        for(int i=0;i<n;i++) 
        {
            for(int j=0;j<m;j++)
            {
                if((i==j) || (i+j==n-1))
                {
                    sum+=mat[i][j];
                }
            } 
        } 
        return sum;
    } 
}; 
