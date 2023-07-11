#include "main.h"
#include <stdlib.h>
/**
 * create_array - fgh
 * @size: sdfgh
 * @c: dfghjk
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
        unsigned int i;
        char *s;
        
        if (size == 0)
        return (0);
        s = malloc(size * sizeof(char));
        if (s == 0)
        return (0);
        for (i = 0; i < size; i++)
        {       
        s[i] = c;
        }
        return (s);
}
