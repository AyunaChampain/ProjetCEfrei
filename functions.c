//
// Created by ayuna on 18/04/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

COLUMN *create_column(char* title)
{
    COLUMN * p ;
    COLUMN c = {title, REALOC_SIZE, 0};
    return &c ;
}


int insert_value(COLUMN* col, int value)
{
    int taille = (col->TL) ;
    printf("test");
    if (taille < REALOC_SIZE)
    {
        (col -> val[taille + 1]) = value;
        col -> TL ++ ;
        return 1 ;
    }
    else
    {
        //(col->val) = realloc(col->val, 512);
        return 0 ;
    }
}