class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            int size=s.length();
            reverse(s.begin(), s.end());
            int temp=0;
            for(int i=0; i<size; i++){
                if(s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/'){
                    int j=i-1;
                    while(temp<j){
                        swap(s[temp], s[j]);
                        j--;
                        temp++;
                    }
                    temp=i+1;
                }
            }
            int j=size-1;
            while(temp<j)
            {
                swap(s[temp], s[j]);
                j--;
                temp++;
            }
            return s;
        }
};
