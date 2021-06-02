// main1.c
#include <stdio.h>

int main(void)
{
    printf("hello, this main1\n");
#ifdef SECTION1
    printf("section1 on\n");
#endif    

#ifdef SECTION2     
    printf("section2 on\n");
#endif
    
    return 0;
}
