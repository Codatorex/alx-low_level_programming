#include <stdio.h>
#include <main.h>

int main() {
    // Write C code here
    int i;
    char function[] = "i";
    for (i=0; i < 8; i++)
    {
        if (function[i]==0)
        {
            break;
        }
        else
         {
             putchar(function[i]);
         }
    }

    return 0;
}    
