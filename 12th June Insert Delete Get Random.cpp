class RandomizedSet {
public:
    /** Initialize your data structure here. */
    vector<int>v;
    int l;
    RandomizedSet() {
        l=0;
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(find(v.begin(),v.end(),val)==v.end())
        {v.push_back(val);
        l++;return true;}
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(find(v.begin(),v.end(),val)==v.end())
        {
            return false;
        }
        v.erase(find(v.begin(),v.end(),val));
        l--;
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int r=rand()%l;
        return v[r];
    }
};
