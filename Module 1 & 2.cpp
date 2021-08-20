//#include<iostream>
//#include<iomanip>
//using namespace std;
//      
//int main()
//{
//    float c = 5.0;
//    float far = (9/5.0)*c + 32;
//    float c1=(9/5.0);
//    cout<<c1<<"\n";
//    cout << fixed << "Temperature in Fahrenheit is "<< setprecision(2) << far;
//    return 0;#include <iostream>
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
////	In C++, when an integer value is compared with an unsigned int, the int is promoted to unsigned. Negative numbers 
////	are stored in 2’s complement form and unsigned value of the 2’s complement form is much higher than the sizeof int.
//
//    if (sizeof(int) > -2)
//        cout << "Yes";
//    else
//        cout << "No";
//    return 0;
//} 

//There are 3 indicators in CPP 1.Error Indicator 2.End-of-file Indicator,3.Position Indicator.

//
//#include <iostream>
//using namespace std;
//
//int main ()
//{ //Error here because we are not allowed to use addition operation in cin
//    int i;
//    cout << "Please enter an integer value: ";
//    cin >> i + 4;
//
//    return 0;
//} 

//There are two groups of output operation in c++. They are formatted output and unformatted output

//#include <iostream>
//using namespace std;
//
//int main ()
//{
//    int a, b;         
//     a = 10;           
//     b = 4;            
//     a = b;           
//     b = 7;           
//    cout << "a:";
//    cout << a;
//    cout << " b:";
//    cout << b;
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	//Answer will be False because 1010 && 0000=0000
//    int a = 0;
//    int b = 10;
//    cout<<a&&b;
//     if (a && b)
//      {
//         cout << "True"<< endl ;
//      }
//    else
//     {
//        cout << "False"<< endl ;
//     }
//        return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//Output is 50
//
//   int a = 20;
//   int b = 10;
//   int c = 15;
//   int d = 5;
//   int e;
//   e = a + b * c / d;
//   cout << e << endl ;
//
//   return 0;
//
//} 
//
// 
//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//   int x = 3, y = 5, z = 6;
//   int a = 2, b = 4, c = 7;
//   
//   int res1 = c ^ (x ^ y);
//   int res2 = z ^ (a ^ b);
//   
//   cout << (res1 | res2);
//
//   return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() 
//{ 
//    int i = 0; 
//    switch (i) 
//    { 
//        case '0': cout << "Geeks"; 
//                break; 
//        case '1': cout << "Quiz"; 
//                break; 
//        default: cout << "GeeksQuiz"; 
//    } 
//    return 0; 
//}  
//
//#include <iostream>
//using namespace std;
//
//#define EVEN 0
//#define ODD 1
//int main()
//{
//    int i = 3;
//    switch (i & 1)
//    {
//        case EVEN: cout << "Even";
//                break;
//        case ODD: cout << "Odd";
//                break;
//        default: cout << "Default";
//    }
//    return 0;
//}  

//There are 8 different methods of solving fibonnaci series
//https://practice.geeksforgeeks.org/tracks/module-2-arrays-and-strings/?batchId=113

//XOR of a number with itself is 0 and XOR of a number with 0 is the number itself.
//Set doesnot have duplicate elements

// Brian Kernighan's Algorithm:  

//
//if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit.
// If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count. 
//The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer. 


// C++ program to Count set
// bits in an integer
//#include <iostream>
//using namespace std;
//class gfg {
//    /* Function to get no of set bits in binary
//representation of passed binary no. */
//public:
//    unsigned int countSetBits(int n)
//    {
//        unsigned int count = 0;  //unsigned int because count cannot be negative so better use unsigned int for it 
//        while (n) {
//            n &= (n - 1);
//            count++;
//        }
//        return count;
//    }
//};
///* Program to test function countSetBits */
//int main()
//{
//    gfg g;
//    int i = 10;
//    cout << g.countSetBits(i);
//    return 0;
//}
//Time Complexity -O(log n)
//Example implemation of brian's algo
// n =  9 (1001)
//
//   count = 0
//
//
//
//   Since 9 > 0, subtract by 1 and do bitwise & with (9-1)
//
//   n = 9&8  (1001 & 1000)
//
//   n = 8
//
//   count  = 1
//
//
//
//   Since 8 > 0, subtract by 1 and do bitwise & with (8-1)
//
//   n = 8&7  (1000 & 0111)
//
//   n = 0
//
//   count = 2
//
//
//
//   Since n = 0, return count which is 2 now.


//*****NOTE:In GCC, we can directly count set bits using __builtin_popcount(). 
//So we can avoid a separate function for counting set bits. 
//memset use:
// memset(arr ,0, n*sizeof(*arr));
