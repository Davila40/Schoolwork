//
//  echo.c
//  
//
//  Created by davila40 on 1/27/20.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main(int argc, const char * argv[]) {
    int state = OUT;
    char c;
    int words[25];
    int i = 0;
    for(i = 0; i < 25; ++i)
    {
        words[i] = 0;
    }
    char word[50];
    
    i = 0;
    int max = 0;
    while ((c = getchar()) != EOF) {
        if(isalpha(c) || c == '-')
        {
            word[i] = c;
            ++i;
        }
        else if(i != 0)
        {
            words[i - 1] = words[i-1] + 1;
            if(max < (i-1))
            {
                max = i-1;
            }
            i = 0;
        }
    }
    for(int k = 0; k <= max; ++k)
    {
        printf("%d:", (k+1));
        for(int j = 0; j < words[k]; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
