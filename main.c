#include <stdio.h>

int get_length(char array[])
{
    int length = 0;
    while (array[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char text[100];

    printf("Enter a text to reverse it: \n");
    scanf("%99s", text);

    int length = get_length(text);
    printf("The length of the text is: %d characters.\n", length);

    char flipped_text[length + 1];

    for (int i = 0; i < length; i++)
    {
        flipped_text[length - 1 - i] = text[i];
    }
    flipped_text[length] = '\0';

    printf("The reversed text is: %s\n", flipped_text);

    return 0;
}