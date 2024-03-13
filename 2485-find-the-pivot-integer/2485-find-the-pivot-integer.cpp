class Solution {
public:
    int pivotInteger(int n) {
        
        int temp=1;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            int p=1;
            int postsum=0;
            while(p<=temp)
            {
                sum+=p;
                p++;
            }
            int j=temp;
            while(j<=n)
            {
                // cout<<j;
                postsum+=j;
                j++;
            }
            // cout<<"Sum : "<<sum<<endl;
            // cout<<"Postsum : "<<postsum<<endl;
            if(sum==postsum)
            {
                return temp;
            }
            else
            {
                temp++;
            }
        }
                        return -1;

    }
};