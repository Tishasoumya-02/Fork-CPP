class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count=0,x;
        while(count<students.size())
        {
            if(students[0]==sandwiches[0])
            {
                sandwiches.erase(sandwiches.begin());
                students.erase(students.begin());
                count=0;
            }
            //if the student[0] and sandwiches[0] is equal we erase the both the values from the vector and set the counter to 0;
            else
                
            {
                x=students[0];   
                students.erase(students.begin());
                students.push_back(x);
                count++;
            }
            //if both the values are unequal we erase the top element from students vector and push back into the vector and set the count++;
        }
        return count;
    }
};
