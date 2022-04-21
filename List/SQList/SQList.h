//
// Created by L on 2022/4/19.
//

#ifndef SQLIST_SQLIST_H
#define SQLIST_SQLIST_H
#include "stdio.h"
#include "malloc.h"
#define INIT_SIZE 100
#define SIZE_INCREASE 10

#define OK 1
#define ERROR -1
#define OVERFLOW -2

#define ELemType int
#define Status int
typedef struct {
    ELemType *elem;
    int length;
    int listsize;
}SQList;

extern Status InitList(SQList *L);
extern Status GetElem(SQList L,int i,ELemType *e);
extern Status LocateElem(SQList L,ELemType e);
extern Status ListInsert(SQList *L,int i,ELemType e);
extern Status PrintList(SQList L);
extern Status Destoty(SQList *L);
extern Status PutElem(SQList *L);
#endif //SQLIST_SQLIST_H
