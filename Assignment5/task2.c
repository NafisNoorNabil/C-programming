#include <stdio.h>
#include <stdbool.h>


int n = 6; // Number of processes
int m = 4; // Number of resources
int alloc[6][4] = { { 0, 1, 0, 3 }, // P0	// Allocation Matrix
                    { 2, 0, 0, 3 }, // P1
                    { 3, 0, 2, 0 }, // P2
                    { 2, 1, 1, 5 }, // P3
                    { 0, 0, 2, 2 }, // P4
                    {1, 2 , 3, 1 } }; //P5

int max[6][4] = { { 6, 4, 3, 4 }, // P0	// MAX Matrix
                  { 3, 2, 2, 4 }, // P1
                  { 9, 1, 2, 6 }, // P2
                  { 2, 2, 2, 8 }, // P3
                  { 4, 3, 3, 7 }, // P4
                  { 6, 2 , 6, 5 } }; //P5

int avail[4] = { 2, 2, 2, 1 }; // Available resources

int need[6][4];
bool finish[6]={false,false,false,false,false,false};


int safe(){
    int work[4];
    int sequence[6];
    int count=0;

    for (int i=0;i<m;i++){
        work[i]=avail[i];
    }

    bool can_allocate=true;

    while (can_allocate){
        can_allocate=false;

        for (int i=0;i<n;i++){
            if (finish[i]==false)
                {
                int can_allocate_process=1;
                for (int j=0;j<m;j++){
                    if (need[i][j]>work[j]){
                        can_allocate_process=0;
                        break;
                    }
                }
                if (can_allocate_process==1)
                {
                    for (int j=0;j<m;j++){
                        work[j]=work[j]+alloc[i][j];
                    }
                    finish[i]=true;
                    sequence[count]=i;
                    count++;
                    can_allocate=true;
                }
            }
        }
    }

    for (int i=0;i<n;i++)
        {
        if (finish[i]==false){
            return 0;
        }
    }


    printf("Safe sequence: ");
    for (int i=0;i<n;i++)
        {
        printf("P%d ",sequence[i]);
    }
    printf("\n");
    return 1;
}



int main(){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            need[i][j]=max[i][j]-alloc[i][j];
            }
        }
    if (safe()==true){
        printf("Safe here\n");
    }
    else{
        printf("Deadlock Ahead\n");
    }
    return 0;
}
