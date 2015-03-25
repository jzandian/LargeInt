#include <stdio.h>
#define SIZE 10
int findLargestNumberinArray(int ar []);
int main void()
{
  int ar[SIZE]={1,2,3,4,5,6,7,8,100};
  printf("Largest number is %i\n", findLargestNumberinArray(ar));
  return 0;
  }
  int findLargestNumberInArray(int ar[])
  {
    int largestInt=0;
    for (int i=0; i<SIZE; i++)
    {
        int number= ar[i];
        if (number > largestInt)
        {
          largestInt= number;
          }
    }
    return largestInt;
    }
