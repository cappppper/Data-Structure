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
Status PutElem(SQList *L,int m)
{
    for (int i = 0; i < m; ++i) {
        scanf("%d",(*L).elem[i]);
        (*L).length++;
    }
    return OK;
}
Status GetElem(SQList L,int i,ELemType *e)
{
    if(i<1||i>L.length)return ERROR;
    *e = L.elem[i-1];
    return OK;
}
Status LocateElem(SQList L,ELemType e)
{
    for (int i = 0; i < L.length; ++i) {
        if(L.elem[i] == e)return i+1;
    }
    return 0;
}
Status ListInsert(SQList *L,int i,ELemType e)
{
    ELemType *newbase;
    if((i<1)||(i>L->length+1))return ERROR;
    if(L->listsize >= INIT_SIZE){
        newbase = (ELemType*)realloc(L->elem,(L->listsize+SIZE_INCREASE)*sizeof (ELemType));
        if(!newbase)return OVERFLOW;
        (*L).elem = newbase;
        L->listsize  += SIZE_INCREASE;
    }
    for (int j = L->length-1; j >=i-1; j--) {
        (*L).elem[j+1] = (*L).elem[j];
    }
    (*L).elem[i-1] = e;
    ++L->length;
    return OK;
}
Status PrintList(SQList L)
{
    ELemType i = 0;
    while (L.length)
    {

        printf("L.elem: ");
        printf("%d  ",L.elem[i]);
        ++i;
        --L.length;
    }
    return OK;
}
Status Destoty(SQList *L)
{
    if(L->elem)free(L->elem);
    return OK;
}
