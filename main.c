#include <stdio.h>
#include <stdlib.h>

int main()
{

    int c;
    FILE *file;
    file = fopen("codigo.txt", "r");

    if(file)
    {
        while ((c = fgetc(file)) != EOF)
            {
                char ca = c;
                if( c == 47 && (c = fgetc(file) == 47))
                    while((c = fgetc(file)) != 10);
                printf("%c",c);
            }
        fclose(file);
    }
    return 0;
}
