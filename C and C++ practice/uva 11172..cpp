#include <stdio.h>
int main()
{
    int a[100],b[100],tc,i;
    scanf("%d\n",&tc);

     for(i=0;i<tc;i++)
     {
         scanf("%d %d",&a[i],&b[i]);
     }
     for(i=0;i<tc;i++)
     {
         if(a[i]<b[i]){
         printf("<\n");
         }
         else if(a[i]>b[i]){
         printf(">\n");
         }
         else if(a[i]==b[i]){
         printf("=\n");
         }
     }
     return 0;
}
