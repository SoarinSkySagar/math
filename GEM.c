#include <stdio.h>

int main() {
    // Write C code here
    float a[100][100];
    int i,j,k,n;
    printf("Enter the no of variables: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    //print matrix
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
            if(j==n) printf(" :\t");
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
	//create echelon
	for(k=0;k<n-1;k++){
		for(i=k+1;i<n;i++){
			float m=a[i][k]/a[k][k];
			for(j=0;j<=n;j++){
				a[i][j]=a[i][j]-m*a[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
            if(j==n) printf(" :\t");
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    //calculation
    //create echelon
	for(k=n-1;k>=0;k--){
		for(i=k-1;i>=0;i--){
			float m=a[i][k]/a[k][k];
			for(j=n;j>=0;j--){
				a[i][j]=a[i][j]-m*a[k][j];
			}
		}
	}
    for(i=0;i<n;i++){
        for(j=0;j<=n;j++){
            if(j==n) printf(" :\t");
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    float b[100];
    for(i=0;i<n;i++){
        b[i]=a[i][n]/a[i][i];
        printf("X%d: %f",i+1,b[i]);
    }

	return 0;
}