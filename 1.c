//Write a program to find the number of vowels in each of the 5 strings stored in two 
// dimensional arrays, taken from the user.
#include<stdio.h>
int main(){
    char str[5][50],vowel[11]={'a','e','i','o','u','A','E','I','O','U'};
    printf("\t\t-:Enter five string:-\n");
    for (int i = 0; i < 5;i++){
        printf("%dth string: ", i+1);
        fgets(str[i], 50, stdin);
    }
    int count;
    for (int i = 0; i < 5;i++){
        count = 0;
        for (int j = 0; str[i][j];j++){
            for (int v = 0; v < 11;v++){
                if(str[i][j]==vowel[v]){
                    count++;
                }
            }
        }
        printf("%dth string: %s\t total number of vowel in this string is %d\n", i + 1, str[i],count);
    }

    return 0;
}

