class Solution{
    //Function to find the leaders in the array.
    static ArrayList<Integer> leaders(int arr[], int n){
        // Your code here{
        int check=0;
        ArrayList<Integer> list=new ArrayList();
        for(int i=n-1; i>=0; i--){
            if(i==n-1){
                list.add(arr[i]);
                check=arr[i];
            }
            else{
                if(arr[i]>=check){
                    list.add(arr[i]);
                    check=arr[i];
                }
            }
        }
        Collections.reverse(list);
        return list;
    }
}
