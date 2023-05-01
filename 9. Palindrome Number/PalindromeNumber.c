#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPalindrome(int x){
        if (x<0 || (x%10==0 && x!=0))
        {
            return false;
        }

        long int new_num=0;
        int old_num=x;
        int count=(x==0)?1:log10(x)+1;  
        long int n=pow(10,count-1);

        while(x>0)
        {
            new_num=new_num+(x%10)*n;
            x=x/10;
            n=n/10;
        }
        //printf("%d\n",new_num-old_num);
        if (new_num==old_num)
        {
            //printf("trun");
            return true;
        }
        else
        {
            //printf("%d\n",new_num);
            return false;
        }



}
