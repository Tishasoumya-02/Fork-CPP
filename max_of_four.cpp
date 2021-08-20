#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
int w,b;
class Rectangle
{
	public:
   void display()
   {
     cout<<w<<" "<<b<<endl;  
   }
};
class RectangleArea:public Rectangle
{
    public:
    void read_input()
    {
        cin>>w;
        cin>>b;
    }
    void display()
    {
        cout<<w*b<<endl;
    }
    
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
