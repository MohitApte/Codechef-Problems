#include <stdio.h>

int main(void) {
	// your code goes here
	int T = 0;
	scanf("%d",&T);
	int result[T];
	for(int i=0;i<T;i++){
	    int N;
	    int x;
	    int y;
	    scanf("%d %d %d",&N, &x, &y);
	    int centre  = (N+1)/2;
	    int condition = (x+y)%2==0;
	    if(condition){
	        result[i] = 0;
	    }else{
	        result[i] = 1;

	    }




	}
	for(int i=0;i<T;i++){
	    printf("%d\n",result[i]);
	}
	return 0;
}

