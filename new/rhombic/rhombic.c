#include <stdio.h>
int main(){
    int a[5][5];
    int i=0,j=0,m=2;
    for(i=0;i<5;i++){
        	for(j=0;j<5;j++){
        	if(j<m||j>(4-m)){
        		printf(" ");
			}
			else{
				printf("*");
			}	
			}
			printf("\n");
		if(i<2){
			m--;
		       }
		else{ m++;
			}
		} 
    return 0;
}