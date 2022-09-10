//Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
int main()
{
	int i,j;
    char str[10][50];
   
   
   	printf("\t\t-:Enter ten name:- \n");
   	for(i=0;i<10;i++){
   		printf("Enter %dth name:   ",i+1);
   		fgets(str[i],50,stdin);
	}
   
   printf("\n\n-:Entred name:-\n");
   	for(i=0;i<10;i++)
   	printf("%s",str[i]);
return 0;
}

