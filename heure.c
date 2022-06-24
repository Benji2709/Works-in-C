#include<stdlib.h>
#include<stdio.h>

void cut_minutes(int* p_heures, int* p_minutes);


int main(){
    int heures,minutes;
    printf("entrez une heure:\n");
    scanf("%d",&heures);
    printf("entrez les minutes:\n");
    scanf("%d",&minutes);
    cut_minutes(&heures,&minutes);

    printf("vous avez entrer l'heure:\n");
    printf("%d h et %d minutes",heures,minutes);

}

void cut_minutes(int* p_heures,int* p_minutes){
    *p_heures = *p_heures + *p_minutes/60;
    *p_minutes = *p_minutes % 60;
}
