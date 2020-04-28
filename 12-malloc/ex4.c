#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "macros_correcoes.h"

char *mystrcpy(char *stroriginal)
{
    int i;
    int n = 0;
    while (stroriginal[n])
    {
        if (stroriginal[n] == 0)
        {
            break;
        }
        n++;
    }

    char *strcopia = malloc((n + 1) * sizeof(char));
    for (i = 0; stroriginal[i] != '\0'; i++)
    {
        strcopia[i] = stroriginal[i];
    }

    strcopia[i] = '\0';

    return strcopia;
}

int main(int argc, char *argv[])
{
    char *strcopia;

    char *s1 = "AAAAA";
    char *t1 = mystrcpy(s1);
    assertEquals("Teste 1", strcmp(s1, t1), 0);
    free(t1);

    s1 = "";
    t1 = mystrcpy(s1);
    assertEquals("Teste 2", strcmp(s1, t1), 0);
    free(t1);

    s1 = "AaAa123384739jlkfjdsl";
    t1 = mystrcpy(s1);
    assertEquals("Teste 3", strcmp(s1, t1), 0);
    free(t1);

    s1 = "Aa00asdsada";
    t1 = mystrcpy(s1);
    assertEquals("Teste 4", strcmp(s1, t1), 0);
    free(t1);

    s1 = "0asgfd";
    t1 = mystrcpy(s1);
    assertEquals("Teste 5", strcmp(s1, t1), 0);
    free(t1);

    printSummary

        return 0;
}
