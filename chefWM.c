#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	int N;
	int M;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&M);
	    int mFactorCount = 0;
	    int m  = M;
        /*
	    int count = 0;
        for(int i=1;i<=M;i++){
            if(M % i == 0){
                count  = 0;
                for(int j=1;j<=i;j++){
                    if(i%j==0){
                        count++;
                    }
                }
                if(count == 2){
                    mFactorCount++;
                }
            }
        }
       */
       for(int j=2; j*j <= m; j++) {   // here

            int c=0;
            while( m%j==0 ) {
                c++;
                m /= j;
            }
            if(c!=0){
                mFactorCount++;
            }
    }
    if(m>1) {  // and here
        mFactorCount++;
    }




        if(mFactorCount == 0){
            printf("%d\n",mFactorCount);
        }else if(N%mFactorCount == 0){
            printf("%d\n",mFactorCount);
        } else{

            while(1){
                if(N%mFactorCount == 0){
                    break;
                }else{
                    mFactorCount--;
                }

            }

            printf("%d\n",mFactorCount);
        }

	}

	return 0;
}
