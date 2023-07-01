#include <stddef.h> 
/*for size_t*/
#include "lists.h" 
/*Include your linked list header file here*/

size_t list_len(const list_t *h) {
    size_t count = 0;
    const list_t *current = h;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}
