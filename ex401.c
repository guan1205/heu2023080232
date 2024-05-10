#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,n;
	scanf("%d",&n);
	float a,b,c;
	a=1.0,b=2.0;
	float sum=0.00;
	for(i=1;i<=n;i++){
		sum=sum+b/a;
		c=b;
		b=a+b;
		a=c;
	}
	printf("%0.2f",sum);
	
	
	return 0;
} 
