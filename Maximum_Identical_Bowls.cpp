class Solution {
  public:
    int getMaximum(int N, vector<int> &arr) {
        // code here
        long sum=0,temp;
        for(long i=0; i<N; i++)
        {
            sum+=arr[i];
        }
        for(long i=1; i<=N; i++)
        {
            if(sum%i==0)
            {
                temp=i;
            }
        }
        return temp;
    }
};
