class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l=nums.size();int r=0;
    for(int i=0;i<=l;i++)
    {
        if ( find(nums.begin(), nums.end(), i) != nums.end() )
            continue;
        else
        {
            r=i;
            break;
        }
    }
        return r;
    }
    
};
