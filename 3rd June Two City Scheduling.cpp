class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,pair<int,int> > >vp;
        for(int i=0;i<costs.size();i++)
        {
            vp.push_back(make_pair(abs(costs[i][0]-costs[i][1]),make_pair(costs[i][0],costs[i][1])));
        }
        // making pairs of difference betwwen cost of going to city a and city b of ith student with
        // their costs . you can alse do the pair of indexes and difference. 
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        // sorted in decreasing order of difference.
        int a=0,b=0,i=0;
        int n=costs.size()/2;
        int sum=0;
        // making n - n distribution in city a and b
        while(a<n && b<n)
        {
            int t=min(vp[i].second.first,vp[i].second.second);
            if(t==vp[i].second.first)
            {
                a++;
            }
            else
            {
                b++;
            }
            sum+=t;
            i++;
        }
        while(a<n)
        {
            sum+=vp[i].second.first;
            a++;
            i++;
        }
        while(b<n)
        {
            sum+=vp[i].second.second;
            b++;
            i++;
        }
        return sum;
        
    }
};