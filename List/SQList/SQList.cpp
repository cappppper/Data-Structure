//
// Created by L on 2022/4/19.
//

#include "SQList.h"
Status InitList(SQList *L)
{
    (*L).elem = (ELemType*)malloc(INIT_SIZE * sizeof (ELemType));
    if(!L->elem)exit(OVERFLOW);
    L->length = 0;
    L->listsize = INIT_SIZE;
    return OK;
}
Status Destoty(SQList *L)
{
    if(L->elem)free(L->elem);
    return OK;
}
