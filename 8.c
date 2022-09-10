//Given a list of words followed by two words, the task is to find the minimum distance 
//between the given two words in the list of words.
//(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 1 )	
#include<stdio.h>
#include<string.h>
int main()
{
	char str[][10]={"the","chhotu","the","ravi","raj","ram"},w1[]="the",w2[]="ram";
	int i,j,temp=-1,temp2=-1;

	for(i=0;i<6;i++){
			
		if(strcmp(str[i],w1)==0){
					temp=i+1;///3
		}
		if(strcmp(str[i],w2)==0){
			temp2=i+1;//1
		}
		if(temp!=-1&&temp2!=-1)
		break;	
	}
	printf("%d",abs(temp2-temp)-1);

return 0;
}

