//The idea is to sort the array and starting from the highest possible H-index we keep checking if this is a valid answer or not.
//For example, the citations are [3,0,6,1,5].
//On sorting, [0, 1, 3, 5, 6]
//The maximum possible H-index can be 5 so we set the res as 5 initially.
//Now, we run a simple loop to check if the current res can be an H-index or not. If the value at the (n-res) index is greater than or equal to res, then we are sure that res papers have at least res citations. We take care of the second condition by checking the previous element in the sorted array. If the previous element is lesser than or equal to res, then this is the answer and we break the loop. Else we decrement res.
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int res=citations.size();
        for(int i=0;i<citations.size();i++)
        {
            if(citations[i]>=res&&(i-1<0||citations[i-1]<=res))
                break;
            else res--;
        }
        return res;
    }
};
