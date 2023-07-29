#include <stdio.h>
int main()
{
        int nums[] = {3, 7, 12, 15, 18, 21, 25};
        int len = sizeof(nums) / sizeof(nums[0]);
        
        for(int i = 0; i < len; i++) {
        if(nums[i]% 2 != 0) {
           printf("%d", nums[i]);
           
          }
         }
          return 0;
          }
           
