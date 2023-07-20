#include<stdio.h>
int main() {

       	int a= 1;
        int count=0;
        int sum =0;
        float avg;
       	while(a>0){
        	printf("enter a number : ");
		scanf("%d",&a);
                sum+=a;
                count++;
       }
       sum=sum-a;
       avg = sum/(float)(count-1);
      
       printf("summation = %d\n",sum);
       printf("average  = %f\n",avg);
	return 0;
}


