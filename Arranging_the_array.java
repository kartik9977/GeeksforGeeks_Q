class Solution {
    
       public void Rearrange(int arr[], int n){
         
         ArrayList<Integer> list= new ArrayList<>();
         for(int i=0; i<n; i++){
             if(arr[i]<0){
                 list.add(arr[i]);
             }
         }
         
         for(int i=0; i<n; i++){
             if(arr[i]>=0){
                 list.add(arr[i]);
             }
         }
         
         int i=0;
         for(int x: list){
             arr[i]=x;
             i++;
         }
       } 
}
