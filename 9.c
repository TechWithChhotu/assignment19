//Write a program that asks the user to enter a username. If the username entered is 
//one of the names in the list then the user is allowed to calculate the factorial of a 
//number. Otherwise, an error message is displayed
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char List_of_User[][20]={"chhotu@123","ravi@254","ram56","raj@31","divya@123"};
	int N=5,i;
	char ch[20];
	printf("\t\t-:List of string:-\n ");
	for(i=0;i<N;i++)
		printf("%d.  %s\n",i+1,List_of_User[i]);
	
	printf("Enter user name: ");
	fgets(ch,20,stdin);
	for(i=0;i<N;i++){
		if(strncmp(ch,List_of_User[i],strlen(List_of_User[i]))==0){
			int n,fact=1;
			printf("Enter a number to calculate factorial: ");
			scanf("%d",&n);
			while(n>0){
				fact*=n;
				n--;
			}
			printf("factorial = %d",fact);
			exit(0);
		}
	}
	if(i==N)
	printf("invalid user name");
	
return 0;
}

