#include <stdio.h>
#include <stdint.h>
#include <string.h> 
#define SIZE 30

typedef struct sensor
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
    int8_t t;
} sensor;

void AddRecord (sensor* info, int number, uint8_t day, uint8_t month, uint16_t year, uint8_t t)
{

}

int main(int argc, char const *argv[])
{
    sensor info[SIZE];
    return 0;
}
