#include <stdio.h>
#include <limits.h>

#define max 30

int main(){
    int i,j,temp,wt[max],tat[max],remaining[max],endtime[max];
    char *process[]={"p1","p2","p3","p4","p5"};
    int at[]={0,2,3,4,5};
    int bt[]={5,2,7,4,5};
    int processnumber=5;

    for (i=0;i<processnumber;i++){
        remaining[i]=bt[i];
    }

    int complete=0;
    int currenttime=0;

    while(complete!=processnumber)
        {
        int min_bt=INT_MAX;
        int shortest=-1;
        for (i=0;i<processnumber;i++)
        {
            if (remaining[i]>0&&remaining[i]<min_bt&&at[i]<=currenttime){
                min_bt=remaining[i];
                shortest=i;
            }
        }
        if (shortest==-1){
            currenttime++;
            continue;
        }

        remaining[shortest]--;

        if (remaining[shortest]==0)
            {
            complete++;
            endtime[shortest]=currenttime+1;
            tat[shortest]=endtime[shortest]-at[shortest];
            wt[shortest]=tat[shortest]-bt[shortest];
        }
        currenttime++;
    }

    printf("Process\tWaiting Time\tTurnaround Time\tCompletion Time\n");

    for (i=0;i<processnumber;i++){
        printf("%s\t%d\t\t%d\t\t%d\n",process[i],wt[i],tat[i],endtime[i]);

    }


    return 0;
}
