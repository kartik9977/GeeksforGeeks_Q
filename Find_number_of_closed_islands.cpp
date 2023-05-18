
class Solution {
    public:
    void sol(vector<vector<int>>&arr, int i, int j, int N, int M)
    {
        if(i<0 || j<0 || i==N || j==M || arr[i][j]==0) return;
        arr[i][j]=0;
        sol(arr, i+1, j, N, M);
        sol(arr, i-1, j, N, M);
        sol(arr, i, j+1, N, M);
        sol(arr, i, j-1, N, M);
    }
    int closedIslands(vector<vector<int>>& mat, int N, int M)
    {
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(mat[i][j]==1)
                {
                 if(i==0 || j==0 || i==N-1 || j==M-1)
                 {
                     sol(mat, i, j, N, M);
                 }
                }
            }
        }
        int count=0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                    sol(mat, i, j, N, M);
                }
            }
        }
        return count++;
        
    }
};