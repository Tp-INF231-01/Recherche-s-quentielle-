#include<stdio.h>
int recher(int *tab,int taille,int ele){
for(int i=0; i<taille; i++){
if(tab[i]==ele){
printf("trouver %d",tab[i]);
return;
}

}
printf("pas trouver");

}




int main(){
    int taille,ele;
printf("entre l'element a rechercher :");
scanf("%d",&ele);
int tab[4]={2,5,6,7};
recher(tab,4,ele);
return 0;
}




