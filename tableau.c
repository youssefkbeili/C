#include <stdio.h>
#include <stdlib.h>

void main()
{
    const int max = 100;
    int tab[max],i,n;

    printf("taper le nombre de case de tableau :");
    scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("tab[%d]=\t",i);
    scanf("%d",&tab[i]);
   }

    for(i=0;i<n;i++)
    printf("%d\t",tab[i]);

}
