//Suppose we have a list of email addresses, check whether all email addresses have 
//‘@’ in it. Print the odd email out
#include<stdio.h>
int main()
{
	int i,j;
	char gmail[10][30];
	
	printf("\t\t-:Enter 10 gmails:-\n");
	for(i=0;i<10;i++){
		printf("Enter %dth gmail: \t",i+1);
		fgets(gmail[i],30,stdin);
	}
	
	printf("\n\n\t\t-:List of gmail:-\n\n");
	for(i=0;i<10;i++)
	printf("\t%s",gmail[i]);
	
	int temp=0;
	printf("\n\n\t\t-:All odd gmailsl:-\n");
	for(i=0;i<10;i++){
		temp=0;
		for(j=0;gmail[i][j];j++){
			if(gmail[i][j]=='@')
			temp=1;
		}
		if(temp==0)
		printf("\t%s",gmail[i]);
	}
return 0;
}

