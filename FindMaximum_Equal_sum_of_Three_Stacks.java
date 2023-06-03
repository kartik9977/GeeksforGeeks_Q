

class Solution {
    public static int maxEqualSum(int N1,int N2,int N3, int[] S1, int[] S2, int[] S3) {
        // code here
        int  sum1=0, sum2=0, sum3=0;
        for(int i=0; i<N1; i++){
            sum1+=S1[i];
        }
        for(int i=0; i<N2; i++){
            sum2+=S2[i];
        }
        for(int i=0; i<N3; i++){
            sum3+=S3[i];
        }
        int ans=1;
        int i=0, j=0, k=0;
        while(ans!=0){
            int min1=Math.min(sum1,sum2);
            int min=Math.min(min1,sum3);
            while(sum1>min){
                sum1=sum1-S1[i];
                i++;
            }
            while(sum2>min){
                sum2=sum2-S2[j];
                j++;
            }
            while(sum3>min){
                sum3=sum3-S3[k];
                k++;
            }
            if(sum1==sum2 && sum1==sum3){
                return sum1;
            }else if(i==N1 && j==N2 && k==N3){
                ans=0;
            }
        }
        return 0;
    }
}
        
