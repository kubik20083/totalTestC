#include <stdio.h>
#include <string.h> 
#include "temp_functions.h"

#define SIZE 30


int main(int argc, char const *argv[])
{
    struct sensor info[SIZE];
    int number = AddInfo(info);
    print(info, number);
    sortByT(info, number);
    print(info, number);
    SortByDate(info, number);
    print(info, number);

    return 0;
}
