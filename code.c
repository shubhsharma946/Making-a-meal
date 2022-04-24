#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 void main()
{
      int t;
      scanf("%d",&t);
      while(t--)
      {
           int n,arr[5]={0},i,min=0;
           scanf("%d",&n);
           char *s=NULL,c;
           for(i=0;i<n;i++)
           {   
                s=(char *)malloc( 1000*sizeof(char));
                scanf("%s",s);
                // printf("%s" ,s);
                for(int j=0;j<strlen(s);j++)
                {
                     if(s[j]=='c')
                         arr[0]++;
                    else if(s[j]=='d')
                         arr[1]++;
                    else if(s[j]=='e')
                         arr[2]++;
                    else if(s[j]=='f')
                         arr[3]++;
                    else if(s[j]=='h')
                         arr[4]++;
                }
            //   printf("%s\n" ,s);
                free(s);
                s=NULL;
           }
          
               arr[0]/=2;
          
                arr[2]/=2;
          
           for(i=0;i<5;i++)
           {
              //  printf(" arr[%d]  = %d \n", i,arr[i]);
                if(i==0)
                min=arr[i];
                else
                {
                    if(arr[i]<min)
                    min=arr[i];
                }
           }

           printf("%d\n",min);

      }
}
