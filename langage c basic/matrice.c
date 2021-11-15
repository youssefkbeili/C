#include <stdio.h>
#include <stdlib.h>

void main()
{
int t[100][100];
int i,j,n,m;

printf("taper n=");
scanf("%d",&n);
printf("taper m=");
scanf("%d",&m);


for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("t[%d][%d]=",i,j);
        scanf("%d",&t[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        printf("%d\t",t[i][j]);
    }
    printf("\n");
}
}


