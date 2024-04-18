//
// Created by ayuna on 18/04/2024.
//

#ifndef PROJETCEFREI_FUNCTIONS_H
#define PROJETCEFREI_FUNCTIONS_H
#define REALOC_SIZE 256


typedef struct
{
    char * titre ;
    int TP ;
    int TL ;
    int val[256] ;
}COLUMN;

COLUMN *create_column(char* title);
int insert_value(COLUMN* col, int value);




#endif //PROJETCEFREI_FUNCTIONS_H
