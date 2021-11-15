#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    //x est un pointeur qui represent un tableau
     int *x=(int*)calloc(n,sizeof(int));

     //saisir taille de tableau avec n est toujour positive
            do{
            printf("taper n=");
            scanf("%d",&n);
            }while(n<=0);
    //remplire tableau de taille n
     for(i=0;i<n;i++){
         printf("x[%d]=",i);
            scanf("%d",&x[i]);
    }
    //afficher tableau de taille n
      printf("----------------------\n");
 for(i=0;i<n;i++){
         printf("|%d|\n",x[i]);
    }
     printf("----------------------\n");
}
