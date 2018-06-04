#include <stdio.h>

const char *week[7] = {"Pn","Wt","Sr","Cz","Pt","So","Nd"};

char *returnday(int x, char *week[])
{
    return week[x-1];
}

int main()
{
    int i;
    
    scanf("%d",&i);
    printf("%s",returnday(i, week));
    return 0;
}