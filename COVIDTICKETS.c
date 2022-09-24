#include <stdio.h>
int main(void) {
	// your code goes here
	int T;

	int N = 0;
	int M = 0;

	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    scanf("%d %d",&N,&M);
        int seats = 0;
        int rows = 0;
	   for(int j=1;j<=N;j++){
	       if(j%2 != 0){
	           rows++;
	       }
	   }
	   for(int j=1;j<=M;j++){
	       if(j%2 != 0){
	           seats++;
	       }
	   }

    printf("%d\n",rows*seats);
}





	return 0;
}
