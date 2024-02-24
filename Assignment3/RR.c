#include <stdio.h>
#define max 5

int main(){
    int i,j,quantum=20,rt[max],wt[max],tat[max],ct[max];
    char *process[]={"p1","p2","p3","p4"};
    int bt[]={53,17,68,24};
    int n=sizeof(process)/sizeof(process[0]);

    for (i=0;i<n;i++){
        rt[i]=bt[i];
    }

    int time=0;
    int flag=0;

    while(1){
        flag=0;

        for (i=0;i<n;i++){
            if (rt[i]>0){
                flag=1;

                if(rt[i]>quantum)
                    {
                    time+=quantum;
                    rt[i]-=quantum;
                }
                else
                {
                    time+=rt[i];
                    wt[i]=time-bt[i];
                    rt[i]=0;
                    ct[i]=time;
                    tat[i]=ct[i]-bt[i];
                }
            }
        }
        if(flag==0){
            break;
        }
    }

    printf("Process\t  Waiting Time\t Turnaround Time\t Completion Time\n");

    for(i=0;i<n;i++){
        printf("%s\t %d\t\t %d\t\t\t %d\n", process[i],wt[i],tat[i],ct[i]);
    }

    return 0;
}
