// Write a program to search a string in the list of strings.
#include<stdio.h>
int main()
{
	int i,j;
    char str[10][50],sear[50];
   
   	printf("\t\t-:Enter ten name:- \n");
   	for(i=0;i<10;i++){
   		printf("Enter %dth name:   ",i+1);
   		fgets(str[i],50,stdin);
	}
	
     printf("\n\n-:List of name:-\n");
   	for(i=0;i<10;i++)
   	printf("%s",str[i]);


   	printf("Enter name to search: ");
   	fgets(sear,50,stdin);
   	
   	for(i=0;i<10;i++){
   		if(strcmp(str[i],sear)==0)
		   printf("\nthis name in exist index no. %d",i);	
	}
   	
   
 
return 0;
}

