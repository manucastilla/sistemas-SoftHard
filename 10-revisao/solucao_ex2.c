//TODO: implementar função solucao_ex2 aqui

// void solucao_ex2(long *a, long b, long *c)
// {
//     if (*a <= *c)
//     {
//         (*c)++;
//     }
//     else
//     {
//         b = 3 * b;
//     }

//     b += *c;
//     *a = b;
// }

void solucao_ex2(long *a, long b, long *c)
{
    if (*a > *c)
    {
        b = b * 3;
    }
    else
    {
        (*c)++;
    }
    b += *c;
    *a = b;
}