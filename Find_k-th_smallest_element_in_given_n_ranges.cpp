class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        sort(range.begin(), range.end());
        vector<int> a;
        for(int i=0; i<q; i++)
        {
            int tmp=queries[i];
            int l=-1, j=0, t;
            for(j=0; j<n; j++)
            {
                if(l<range[j][1] && l>=range[j][0])
                {
                    t=range[j][1]-l;
                    if(t>=tmp)
                    {
                        a.push_back(l+tmp);
                        break;
                    }
                    l=range[j][1];
                    tmp-=t;
                }
                else if(l<range[j][1])
                {
                    t=range[j][1]-range[j][0]+1;
                    if(t>=tmp){
                            a.push_back(range[j][0]+tmp-1);
                            break;
                    }
                    l=range[j][1];
                    tmp-=t;
                }
            }
                if(j==n) a.push_back(-1);

            
        
    } 
            return a;
    }
};
