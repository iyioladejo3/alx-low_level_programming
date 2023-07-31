/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b: value to set
 * @n: number of bytes to fill
 * Return: pointer to the memory block 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    /* Using a FOR loop to fill the memory block */
    for (i = 0; i < n; i++)
    {
        *(s + i) = b; /* Fill one position at a time */
    }

    return (s);
}
