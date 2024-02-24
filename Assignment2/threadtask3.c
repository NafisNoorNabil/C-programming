#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

void *nametoascii(void *arg){
    char *name=(char *) arg;
    int sum=0;
    for (int i=0;i<strlen(name)-1;i++)
    {
        sum=sum+name[i];
    }
    return (void *) sum;
}

int main(){
    pthread_t threads[3];
    char name[50];
    int totalsum[3]=
    void *returnedvalue;

    for (int i=0;i<3;i++){
        printf("Enter your name: ");
        fgets(name,50,stdin);

        pthread_create(&threads[i],NULL,nametoascii,name);
        pthread_join(threads[i], &returnedvalue);

        printf("ASCII value %d\n",(int) returnedvalue);



        totalsum[i]=(int) returnedvalue;
        sleep(1);
    }
    if (totalsum[0]==totalsum[1] && totalsum[1]==totalsum[2]){
        printf("Youreka\n");
    }
    else if (totalsum[0] ==totalsum[1] ||totalsum[0]==totalsum[2]||totalsum[1]==totalsum[2]){
        printf("Miracle\n");
   }
    else{
        printf("Hasta la vista\n");
        }

    return 0;
}
































void numfunc(*num);
 *num=5



 num=1
 numfunc(&num);
 prinf(num)



