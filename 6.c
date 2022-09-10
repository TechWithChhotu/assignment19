//Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k;
	char str[5][30];
	

	printf("\t\t-:Enter 10 string:-\n");
	for(i=0;i<5;i++){
		printf("Enter %dth string: \t",i+1);
		fgets(str[i],30,stdin);
	}
	
	printf("\n\n\t\t-:List of string:-\n\n");
	for(i=0;i<5;i++)
	printf("\t%s",str[i]);

	printf("\n\n\t\t-:all palindrom string:-\n");
	int count=0;
	
	for(i=0;i<5;i++){
		count=0;
		k=strlen(str[i])-2;
		for(j=0;k>=0;j++,k--){
			if(str[i][j]==str[i][k]){
				count++;
			}
		}
		if(count==j)
		printf("\t%s",str[i]);
	}
return 0;
}

