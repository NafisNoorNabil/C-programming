#include <stdio.h>
#define max 30

int main(){
    int i,ct[max],tat[max],wt[max],rt[max],currenttime,selected;
    int n=5;
    int at[]={0,14,3,9,7};
    int bt[]={15,5,10,22,16};
    int priority[]={2,4,0,3,1};

    for (i=0;i<n;i++){
        rt[i]=bt[i];
    }

    int completed=0;
    currenttime=0;
    while(completed!=n)
        {
        selected=-1;
        for (i=0;i<n;i++)
        {
            if (at[i]<=currenttime&&(selected==-1||priority[i]<priority[selected])&&rt[i]>0)
            {
                selected=i;
            }
        }
        if (selected==-1)
        {
            currenttime++;
            continue;

            }

        rt[selected]--;

        if (rt[selected]==0){
            completed++;
            ct[selected]=currenttime+1;
            tat[selected]=ct[selected]-at[selected];
            wt[selected]=tat[selected]-bt[selected];
        }

        currenttime++;
    }


    printf("Process\tCompletion Time\tTurnaround Time\tWaiting Time\n");


    for (i=0;i<n;i++){
        printf("P%d\t%d\t\t%d\t\t%d\n",i+1,ct[i],tat[i],wt[i]);
    }

    return 0;
}

