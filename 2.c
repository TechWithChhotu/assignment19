//Write a program to sort 10 city names stored in two dimensional arrays, taken from 
//the user
#include<stdio.h>
#include<string.h>
int main(){
    int i,j,r;
    char str[10][50], temp[50];
   
   
   	printf("\t\t-:Enter ten citys name:- \n");
   	for(i=0;i<10;i++){
   		printf("Enter %dth city:   ",i+1);
   		fgets(str[i],50,stdin);
	}

	
   	for(i=0;i<10;i++){
   		for(j=i+1;j<10;j++){
   			r=strcmp(str[i],str[j]);
   			if(r==1){
   				strcpy(temp,str[i]);
   				strcpy(str[i],str[j]);
   				strcpy(str[j],temp);
		  }
   	  }
    }
   
   printf("\n\n-:after sorted city name:-\n");
   	for(i=0;i<10;i++)
   	printf("%s",str[i]);

}

