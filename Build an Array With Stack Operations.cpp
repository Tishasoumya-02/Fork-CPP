class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int i,count=1;
        for(i=0;i<target.size();i++)
        {
            while(target[i]!=count)
            {
             result.push_back("Push");
             result.push_back("Pop");
                count++;
            }
            result.push_back("Push");
            count++;
        }
        return result;
    }
};
