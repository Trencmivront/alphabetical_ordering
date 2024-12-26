#include <stdio.h>

void orderer(char []);

int main(){

    char sentence[1000];

    printf("Please enter the sentence;\n");
//getting sentence
    fgets(sentence, 1000, stdin);

    orderer(sentence);

}

void orderer(char a[]){

    int i;
    char temp;
//Loop until '\0' character of sentence
    for(i = 0;(a[i]) != '\0';i++){
//skipping spaces
        for(;a[i] ==' ';i++){

        }
//ASCII check
        if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'){

            for(int b=i;a[b] != '\0';b++){
//skipping spaces
                for(;a[b] == ' ';b++){

                }
//ordering
                if(a[b]<a[i]){

                temp = a[b];
                a[b] = a[i];
                a[i] = temp;

            }

            }

        }

    }

    fputs(a, stdout);

}
