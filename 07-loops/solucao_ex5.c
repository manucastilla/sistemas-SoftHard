
/* Implemente aqui sua versão em C da função ex5
 * presente no arquivo ex5.o
 * 
 * Chame sua função de ex5_solucao */

long ex5_solucao(long a, long b)
{
    long d = 0;
    long x = 0;
    while (d < a)
    {
        long y = d;
        if (y % b == 0)
        {
            x += d;
        }
        d++;
    }
    return x;
};