/*
Dato l'array     numeri[100,200,300,400,500] 
creare un programma che popoli arrayInverso[500,400,300,200,100]  e lo stampi con la seguente forma:
"Posizione  0 -> Valore 500"
"Posizione  1 -> Valore 400"
"Posizione  2 -> Valore 300"
"Posizione  3 -> Valore 200"
"Posizione  4 -> Valore 100"
Nota bene il programma dovrà funzionare anche con altri numeri;
*/
#include <stdio.h>
int main(){
    int numeri[5]={100,200,300,400,500};
    int arrayIverso[5]; // 0 <- 500, 1 <- 400, ...

    for(int i=4;i>=0;i--){
        arrayInverso[4-i]=numeri[i];
    }
    for(int i=0;i<5;i++){
        printf("\n Posizione %d -> Valore %d",i,arrayInverso[i]);
    }

    return 0;
}
