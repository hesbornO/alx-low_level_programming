#include "main.h"
#include <stdio.h>

/**
 * main - check the code  *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    int *int_pointer;
    int_pointer=&n;
    reset_to_98(*int_pointer);
    return (0);
}
void reset_to_98(int_pointer){
  int_pointer=98;
}
