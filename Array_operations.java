
class Solution {
    public static int arrayOperations(int n, int[] arr) {
        // code here
        int count=0,ans=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
            {
                if(count>0)
                {
                    ans++;
                }
                count=0;
            }
            else
            {
                count++;
            }
        }
        if(count==n)
        {
            return -1;
        }
        if(count>0)
        {
            ans++;
        }
        return ans;
    }
}