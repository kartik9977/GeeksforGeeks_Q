class Solution {
    public static int bitMagic(int n, int[] arr) {
        // code here
        int res=0, i=0, j=n-1;
        while(i<j)
        {
            if(arr[i]!=arr[j])res++;
            i++;
            j--;
        }
        return res/2+res%2;
    }
}