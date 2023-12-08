/* 103-keygen.c */
#include <stdio.h>
#include <stdlib.h>  /* Include the <stdlib.h> header for the free function */
#include <string.h>

/**
 * generate_key - generates a key based on the username
 * @username: the username for which to generate the key
 * Return: the generated key
 */
char *generate_key(const char *username)
{
    char *key;
    int i;

    key = strdup(username);
    for (i = 0; i < (int)strlen(username); i++) {
        key[i] = username[i] ^ (i + 1);
    }

    return key;
}

int main(int argc, char *argv[])
{
    char *key;  /* Move the variable declaration to the beginning*/

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <username>\n", argv[0]);
        return 1;
    }

    key = generate_key(argv[1]);
    printf("%s\n", key);
    free(key);

    return 0;
}
