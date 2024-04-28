#include "temp_functions.h"
#include <stdio.h>
#include <string.h> 

void AddRecord (struct sensor* info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t t)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].t = t;
}

int AddInfo (struct sensor* info)
{
    int counter = 0;
    AddRecord(info, counter++, 2023, 9, 16, 9);
    AddRecord(info, counter++, 2024, 1, 16, -4);
    AddRecord(info, counter++, 2024, 2, 16, -8);
    AddRecord(info, counter++, 2024, 3, 16, 0);
    AddRecord(info, counter++, 2024, 4, 16, 3);
    return counter;
}

void print(struct sensor* info, int number)
{
    printf("====================================\n");
    for(int i = 0; i < number; i++)
    printf("%04d-%02d-%02d t-%3d\n", info[i].year, info[i].month, info[i].day, info[i].t );

}

void changeIJ(struct sensor* info, int i, int j)
{
    struct sensor temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}
// Сортировка по возрастанию темпиратуры
void sortByT(struct sensor* info, int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (info[i].t >= info[j].t)
            {
                changeIJ(info, i, j);
            }
            
        }
        
    }
    
}

uint32_t DanteToInt(struct sensor* info)
{
    return info -> year << 16 | info -> month << 8 | info -> day;
}

// Сортировка по дате
void SortByDate(struct sensor* info, int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (DanteToInt(info + i) >= DanteToInt(info + j))
            {
                changeIJ(info, i, j);
            }
            
        }
        
    }
    
}

