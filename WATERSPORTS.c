#include <stdio.h>

int main(void) {
	// your code goes here
	int T = 0;
	scanf("%d",&T);
	int Z=0;
	int Y=0;
	int A=0;
	int B=0;
	int C=0;
	int result[T];
	for(int i=0;i<T;i++){

	    scanf("%d %d %d %d %d",&Z,&Y,&A,&B,&C);
	    result[i]=(Z-Y) - (A+B+C);

	}
	for(int i=0;i<T;i++){

	   if(result[i]>=0){
	       printf("YES\n");
	   }else{
	       printf("NO\n");
	   }


	}


	return 0;
}

