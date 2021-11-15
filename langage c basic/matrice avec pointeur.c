#include <stdio.h>
#include <stdlib.h>

//saisir n
int saisir_n(){
int n;
do{
printf("taper n=");
scanf("%d",&n);
}while(n<=0);
return n;
}

 //saisir une matrice
  void saisir_matrice(int**m,int n){
      int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            printf("m[%d][%d]=",i,j);
            scanf("%d",&m[i][j]);
        }
    }
  }

   //afficher matrice
    void afficher_matrice(int**m,int n){
    int i,j;
     printf("----------------------\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
            printf("|%d|",m[j][i]);
        printf("\n");
    }
     printf("----------------------\n");
    }

int main()
{
int n,i;
    //cree pointeure double pour representeè une matrice 1er pour representeè les ligne et le deuxiem pour representer colonne
    int **m=(int**)malloc(n*sizeof(int*));
    for( i=0;i<n;i++)
    {
        m[i]=(int*)calloc(n,sizeof(int));
    }
   //saisir n
      n=saisir_n();
        printf("n=%d\n",n);
    //saisir matrice 1er
   saisir_matrice(m,n);
   //afficher matrice 1er
   afficher_matrice(m,n);
    return 0;
}
