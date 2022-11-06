#include<stdio.h>
#include<stdint.h>

int main(int argc, char *argv[]) {

    printf("Imie: %s\nPseudonim: %s\n",argv[1],argv[2]);
    printf("Hello World!\n");
    float srednia = 0;
    for (int i=3; i<argc ;i++){
        int a = atoi(argv[i]);
        srednia+=a;
    }
    srednia/=(argc-3);
    printf("Srednia:%.0f\n",srednia);
}