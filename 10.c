//Create an authentication system. It should be menu driven
#include<stdio.h>
int main()
{
	char user_pass[3][2][20]={"chhotu","123",
								"ravi","234",
								"amit","345"};
	int i,j;
		
		printf("list of user name & password\n");						
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf(" %s ",user_pass[i][j]);
		}
		printf("\n");
	}
	
	char user[2][20];
	int count=0;
	printf("\nEnter user name & password:  ");
	for(i=0;i<2;i++)
	fgets(user[i],20,stdin);

	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if(strncmp(user_pass[i][j],user[j],strlen(user_pass[i][j]))==0){
				count++;
			}
		}
		if(count==2){
			printf("logined success");
			exit(0);
		}
	}
	printf("invalid user name & password");
	
return 0;
}

