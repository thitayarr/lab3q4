#include <stdio.h>
int main() {
	int a = 0;
	int sum = 0;
	float count = 0;
	printf("enter a number : ");
        scanf("%d",&a);
	sum += a;
	
	while(a > 0){
		count++;
		printf("enter a number : ");
        	scanf("%d",&a);
		sum += a;
	}
	printf("sum = %d\n",sum);
	printf("avg = %f\n",(sum/count));
}

