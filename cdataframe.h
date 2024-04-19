//
// Created by ayuna on 19/04/2024.
//

#ifndef PROJETCEFREI_CDATAFRAME_H
#define PROJETCEFREI_CDATAFRAME_H
#define REALOC_SIZE 256

typedef struct
{
    int* col[REALOC_SIZE];
}CDataframe;

CDataframe *create_empty();
void enter_value(CDataframe* Cdf);
void initialize(CDataframe * Cdf);

void print_cdf(CDataframe* Cdf);
void print_limited_line(CDataframe* Cdf, int lim);
void print_limited_col(CDataframe* Cdf, int lim);

void add_line(CDataframe* Cdf);
void del_line(CDataframe* Cdf);
void add_col(CDataframe* Cdf);
void del_col(CDataframe* Cdf);

void rename_title(CDataframe*Cdf, char title);
int search_val(CDataframe* Cdf, int val);
void exist(CDataframe* Cdf, int val);
void change_val(CDataframe* Cdf, int line, int col);
void print_title(CDataframe* Cdf);

int pint_nb_line(CDataframe* Cdf);
int pint_nb_col(CDataframe* Cdf);
int print_equ(CDataframe* Cdf, int x);
int print_sup(CDataframe* Cdf, int x);
int print_inf(CDataframe* Cdf, int x);

#endif //PROJETCEFREI_CDATAFRAME_H
