class Solution {
public:
    string makeGood(string s) {
string st;
        
        for(const char &ch : s) {
            if(abs(st.back() - ch) == 32)//to check whether the next consecutive character is upper case  ,if upper case then pop the previous element.
                st.pop_back(); //string functions
            else
                st.push_back(ch);
        }
        
        return st; 
    }
};
