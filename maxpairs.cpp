#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'maxPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY skillLevel
 *  2. INTEGER minDiff
 */

int maxPairs(vector<int> skillLevel, int minDiff) {
sort(skillLevel.begin(),skillLevel.end());
int i=0,j=0,mid;
mid=skillLevel.size()/2;
j=mid;
int pairs=0;
while(i<mid && j<skillLevel.size())
{
   
    while(skillLevel[j]-skillLevel[i]<minDiff)
    {
        j++;
        if(j>=skillLevel.size())
        break;
    }
      if(j>=skillLevel.size())
        break;
        else {
        pairs++;
        i++;
        j++;
        }
}
return pairs;
}
int main()
