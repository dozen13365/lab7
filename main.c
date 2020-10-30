#include <stdio.h>
int main(void)
{
  int sqrs[10];
  int i;
  for(i=1;i<11;i++)	            	/* First Loop */
     sqrs[i-1] = i*i;
  for(i=0;i<10;i++)				/* Secondary Loop */
     printf("%d ",sqrs[i]);
  return 0;
}
