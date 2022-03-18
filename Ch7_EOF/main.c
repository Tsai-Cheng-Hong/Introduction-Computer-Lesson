#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    int count=0;
    //int status;

    fptr = fopen("welcome.txt", "r");

    //status = fscanf(fptr, "%c", &ch);
    printf("%c", ch);

  
    while(fscanf(fptr, "%c", &ch) != EOF){

        printf("%c", ch);
        count++;
    }
    fclose(fptr);
    printf("\n\nsum = %d", count);

    return 0;
}
