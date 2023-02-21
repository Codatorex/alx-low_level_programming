#include "main.h"

int main(void) {
    
    int i;
    char function[] = "_putchar";
    for (i = 0; i < 8; i++)
    {
        if (function[i] == 0)
        {
            break;
        }
        else
        {
            _putchar(function[i]);
        }
    }

    return 0;
}    
