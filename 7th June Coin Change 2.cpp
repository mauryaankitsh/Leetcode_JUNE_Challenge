class Solution {
public:
    int change(int am, vector<int>& coins) {
        int i;
        int n=coins.size();
        int arr[am+1];
        memset(arr,0,sizeof arr);
        arr[0]=1;
        for(i=0;i<n;i++)
        {
            for(int j=1;j<=am;j++)
            {
                if(j>=coins[i])
                {
                    arr[j]=arr[j]+arr[j-coins[i]];
                }
            }
        }
        return arr[am];
    }
};