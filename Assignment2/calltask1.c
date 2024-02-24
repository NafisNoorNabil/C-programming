#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    int fd;
    char message[50]="hello dora"




    int fd = open("myfile.txt", O_WRONLY | O_CREAT);


    if (argc<2){
      printf("One Argument Expected\n");
    }
    printf("Enter message: ");
    fgets(message,50,stdin);

    while (strcmp(message,"-1\n")==0){
        printf("Enter message: ");
        fgets(message, 50, stdin);
    }

    fd=open(argv[1],O_RDWR|O_CREAT);
    if (fd!=-1){
        write(fd,message,strlen(message));
        lseek(fd,0,0);
        close(fd);
    }
    return 0;
}

