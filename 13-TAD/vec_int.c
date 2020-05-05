#include <stdlib.h>

#include "vec_int.h"

typedef struct _vec_int
{
    int *data;
    int size;
    int capacity;
} vec_int;

vec_int *vec_int_create()
{
    vec_int *vec = malloc(sizeof(vec_int));
    vec->capacity = 2;
    vec->data = malloc((vec->capacity) * sizeof(int));
    vec->size = 0;
    return vec;
}

void vec_int_destroy(vec_int **_v)
{
    vec_int *v = *_v;
    free(v->data);
    free(v);
    *_v = NULL;
}

int vec_int_size(vec_int *v)
{
    return v->size;
}

int vec_int_at(vec_int *v, int pos, int *val)
{
    if (pos < v->size)
    {
        *val = v->data[pos];
        return 1;
    }
    return 0;
}

int vec_int_insert(vec_int *v, int pos, int val)
{
    if (pos < 0 || pos > v->size)
    {
        return 0;
    }

    if (v->size == v->capacity)
    {
        v->capacity *= 2;
        v->data = realloc(v->data, v->capacity * sizeof(int));
    }

    for (int i = v->size; i > pos; i--)
    {
        v->data[i] = v->data[i - 1];
    }

    v->data[pos] = val;
    v->size++;
    return 1;
}

int vec_int_remove(vec_int *v, int pos)
{
    if (pos < 0 || pos >= v->size)
    {
        return 0;
    }

    if (v->size <= v->capacity / 4)
    {
        v->capacity /= 2;
        v->data = realloc(v->data, v->capacity * sizeof(int));
    }

    for (int i = pos; i < v->size - 1; i++)
    {
        v->data[i] = v->data[i + 1];
    }

    v->size--;

    return 1;
}
