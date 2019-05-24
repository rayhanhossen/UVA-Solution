#include<stdio.h>
#include<string.h>
int main()
{

    char a[100];
    int i=0;


    while(gets(a))
    {
    if(strcmp(a,"*")==0)
     break;
    i++;

    if(strcmp(a, "Hajj")==0){
     printf("Case %d: Hajj-e-Akbar\n",i);
      }
      if(strcmp(a,"Umrah")==0){
          printf("Case %d: Hajj-e-Asghar\n",i);
      }

}
return 0;
}

