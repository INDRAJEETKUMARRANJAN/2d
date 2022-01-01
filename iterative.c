#include<stdio.h>
int main ()
int binarysearch(int[]A, intx)
{
int low=0, high=A.length - 1;
while(low <= high)
{
     int mid = (low + high)/2;
      if (x== A[mid])
{  return mid;
              }

    else if (x < A[mid])
{high = mid -1;
              }

 else {
        low = mid + 1;
                  }
                }
                return -1;
                }
