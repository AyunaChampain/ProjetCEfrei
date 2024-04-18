#include <stdio.h>
#include "functions.h"

int main() {
    printf("Test Github");
    COLUMN *mycol = create_column("My column");
    int val = 5;
    int test = insert_value(mycol, val) ;
    if (test == 0)
        printf("Value added successfully to my column\n");
    else
        printf("Error adding value to my column\n");

    return 0;
}
