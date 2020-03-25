
/* Implemente aqui sua versão em C da função soma_n
 * presente no arquivo ex4.o
 * 
 * Chame sua função de soma_n_solucao */

long soma_n_solucao(int a)
{
    int c = 0;
    long x = 0;

    while (c < a)
    {
        int d = c;
        x += d;
        c++;
    }

    return x;
}