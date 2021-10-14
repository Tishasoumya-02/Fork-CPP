#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);
long parse_long(char*);


/*
 * Complete the 'taskOfPairing' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY freq as parameter.
 */

long taskOfPairing(int freq_count, long* freq) {
 long count=0;
 long carry=0;
 for(int i=0;i<freq_count;i++)
 {
     if(freq[i]==1)
       continue;
     if(freq[i]%2==0)
      count=count+(freq[i]/2);
     else 
     {
         carry=freq[i]%2;
         count=count+(freq[i]/2);
         if(i<freq_count-1)
         freq[i+1]=freq[i+1]+carry;
     } 
     
 }
 return count;
}
int main()
