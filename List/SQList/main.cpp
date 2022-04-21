#include "stdio.h"
#include "SQList.h"
SQList L;
int main()
{
    InitList(&L);
    PutElem(&L);
    PrintList(L);
    Destoty(&L);
    return OK;
}
