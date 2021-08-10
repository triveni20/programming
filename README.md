#include <stdio.h>
int main()
{
    int i,n;
    int a[]={-1,-1,-1,1,1};
    int highest=a[0];
    int lowest=a[0];
    n=sizeof(a)/sizeof(a[0]);
    for(i=1;i<n;i++)
    {
        if(a[i]>highest)
        highest=a[i];
        if(a[i]<lowest)
        lowest=a[i];
    }
    printf("highest number=%d lowest number=%d\n",highest,lowest);
    return 0;
}
