class Solution {
public:
    int calPoints(vector<string>& ops) {
    stack<int> st;
        int i,a,b,sum=0,x;
        for(i=0;i<ops.size();i++)
        {
            
           if( ops[i]=="+")
           {
              a=st.top();
               st.pop();
               b=st.top()+a;
               st.push(a);
               st.push(b);
               
           }
            else if( ops[i]=="D")
            {
               int y=2*st.top();
                st.push(y);
            
            }
            else if( ops[i]=="C")
            {
                st.pop();
            }
            else
            {
                x=stoi(ops[i]);  //converting the string into integers for mathematical calculations
                st.push(x);
            }
                
        }
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        
        return sum;
    }
};
