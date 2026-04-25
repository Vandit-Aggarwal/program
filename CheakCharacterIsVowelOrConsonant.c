#include <stdio.h>
int main(int argc, char const *argv[])
{
    char alphabet;

    printf("enter a elphabet\n");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
        printf("your character is vowel");
        break;

    case 'e':
        printf("your character is vowel");
        break;

    case 'i':
        printf("your character is vowel");
        break;

    case 'o':
        printf("your character is vowel");
        break;

    case 'u':
        printf("your character is vowel");
        break;

    default:
        printf("your character is consonant");
        break;
    }
    return 0;
}
