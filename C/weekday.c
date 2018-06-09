#include <stdio.h>

const char* week[7] = {"Pn","Wt","Sr","Cz","Pt","So","Nd"};

char* returnday(int x, char* week[])
{
    return week[x-1];
}

int main()
{
    int i;
    
    scanf("%d",&i);
    if (i > 0 && i < 8) 
    {
        printf("%s",returnday(i, week));
    }
    else printf ("Wrong data input");
    
    return 0;
}
