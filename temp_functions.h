#include <stdint.h>

struct sensor
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t t;
};

// Сортировка по возрастанию темпиратуры
void sortByT(struct sensor* info, int number);

// Сортировка по дате
void SortByDate(struct sensor* info, int number);

void AddRecord (struct sensor* info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t t);

void print(struct sensor* info, int number);

int AddInfo (struct sensor* info);