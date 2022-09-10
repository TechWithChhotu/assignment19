//From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
int main()
{
	int i,j=0,num,N,k,check;
	
	printf("How many IP addresses do you want to enter: ");
	scanf("%d",&N);
	
	char IP[N][16],temp[3];
	printf("\n\n\t\t-:Enter the IP address:-\n\n");
	fflush(stdin);
	for(i=0;i<N;i++){
		printf("Enter %dth IP address:    ",i+1);
		fgets(IP[i],20,stdin);
	}
	printf("\n\n\t\t-:List of all IP address:-\n\n");
	for(i=0;i<N;i++)
	printf("%d.  %s",i+1,IP[i]);
	
	printf("\n\n\t\t-:List of all invalid IP address:-\n");
	k=0;
	for(i=0;i<N;i++){
			check=0;
		for(j=0;j<strlen(IP[i]);j++){//IP[i][j]!='a'
		if(IP[i][j]=='.'||IP[i][j]<=10){
			
			num=atoi(temp);
			if(num>=0&&num<=255)
				check++;
			for(k=0;temp[k];k++)
			temp[k]=NULL;
					k=0;
		}
		else{
				temp[k]=IP[i][j];
				k++;
			}
		}
//		if(check==4)
//		printf("\nvalid IP address");
		if(check!=4)
		printf("\n\t%s",IP[i]);
		printf("\n");
	}
	

return 0;
}

