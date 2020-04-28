// TODO: substituir tipo pelo tipo das globais
extern int var1, var2;

// TODO: implementar solucao_ex3 abaixo
void solucao_ex3(int *a)
{
    int eax = 5 * var1;
    int ecx = 5 * var2;
    var2 = 2 * ecx;
    eax += var2;
    *a = eax;
}
