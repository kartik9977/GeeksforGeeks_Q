public 
class Solution {

    public static long findMaxSubsetSum(int N, int[] A) {
        // code here
        int sum=0;
        for(int i=0; i<N; i++)
        {
            if(A[i]>=0)
            {
                sum+=A[i];
            }
        }
        return sum;
    }
}
      {
    
}
