//
//
//
//
//  Created by davila40 on 1/27/20.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*
#define IN 1 // inside a word
#define OUT 0 // outside a word
*/
void characterarray(char letters[]);
int main(int argc, const char * argv[]) {
    //int state = OUT;
    char c;
    char letters[26];
    characterarray(letters);
    int charactercount[26];
    int i = 0;
    for(i = 0; i < 26; ++i)
    {
        charactercount[i] = 0;
    }
    //char word[50];
    int value;
    while ((c = getchar()) != EOF) {
        if(islower(c))
        {
            value = c - 97;
            charactercount[value] = charactercount[value] + 1;
        }
        if(isupper(c))
        {
            value = c - 65;
            charactercount[value] = charactercount[value] + 1;
        }
    }
    for(int k = 0; k < 26; ++k)
    {
        putchar(letters[k]);
        printf(":");
        for(int j = 0; j < charactercount[k]; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
void characterarray(char letters[])
{
  letters[0] = 'a';
  letters[1] = 'b';
  letters[2] = 'c';
  letters[3] = 'd';
  letters[4] = 'e';
  letters[5] = 'f';
  letters[6] = 'g';
  letters[7] = 'h';
  letters[8] = 'i';
  letters[9] = 'j';
  letters[10] = 'k';
  letters[11] = 'l';
  letters[12] = 'm';
  letters[13] = 'n';
  letters[14] = 'o';
  letters[15] = 'p';
  letters[16] = 'q';
  letters[17] = 'r';
  letters[18] = 's';
  letters[19] = 't';
  letters[20] = 'u';
  letters[21] = 'v';
  letters[22] = 'w';
  letters[23] = 'x';
  letters[24] = 'y';
  letters[25] = 'z';
}
