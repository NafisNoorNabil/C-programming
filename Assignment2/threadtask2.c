#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void *printnum(void *arg){
    int threadnum= *(int*)arg;

    int start=threadnum*5;
    int stop=threadnum*5+5;

    for (int i=start;i<stop;i++){
        printf("thread %d prints %d\n",threadnum,i+1);
    }
}


int main(){
	pthread_t threads[5];
	for (int i=0;i<5;i++){
        int threadnum=i;
        pthread_create(&threads[i],NULL,printnum,&threadnum);
        pthread_join(threads[i],NULL);
        sleep(1);
	}
	return 0;
}
