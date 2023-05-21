
class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
   
     sort(chairs.begin(), chairs.end());
    sort(passengers.begin(), passengers.end());
    int count=0,temp=0;
    for(int i=0; i<n; i++)
    {
     if(chairs[i]>passengers[i])
     {
         count=chairs[i]-passengers[i];
     }
     else
     {
      count=passengers[i]-chairs[i];   
     }
     temp+=count;
   }
    return temp;    
 }   
};
