#include <stdio.h>

char *_memcpy(char *dest, char *src, unsigned int n) {
    // Pointer to the destination and source memory areas
    char *dest_ptr = dest;
    char *src_ptr = src;

    // Copy 'n' bytes from source to destination
    while (n > 0) {
        *dest_ptr++ = *src_ptr++;
        n--;
    }

    return dest;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    _memcpy(dest, src, 13);

    printf("Copied String: %s\n", dest);
    return 0;
}
