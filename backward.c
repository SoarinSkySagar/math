#include<stdio.h>
int main(){
	int i,j,n,k;
	float a[50][50],x,sum=0,term;
	printf("Enter the number of datapoints: ");
	scanf("%d",&n);
	printf("Enter X values: \n");
	for(i=0;i<n;i++){
		printf("Enter x[%d]: ",i);
		scanf("%f",&a[i][0]);
	}
		printf("Enter Y values: \n");
	for(i=0;i<n;i++){
		printf("Enter y[%d]: ",i);
		scanf("%f",&a[i][1]);
	}
	for(j=2;j<=n;j++){
		for(i=n-1;i>=j-1;i--){
			a[i][j]=a[i][j-1]-a[i-1][j-1];
					
		}
	}
	printf("The backward difference table is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<=i+1;j++){
			printf("%f\t",a[i][j]);
			
		}
		printf("\n");
	}
	printf("Enter the interpolating point: ");
	scanf("%f",&x);
	float h,p;
	h=a[1][0]-a[0][0];
	p=(x-a[n-1][0])/h;
	sum=a[n-1][1];
	term=1;
    
    
    for (k = 2; k <=n; k++) {
        term *= (p + k-2) / (k -1);
        sum += a[n-1][k ] * term;
    }
    
	printf("The value at %f is %f",x,sum);
	return 0;
	
}