#include <stdio.h>

int main()
{
    char arr[100];
    scanf("%[^\n]s", arr);
    int j = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ')
        {
            arr[j++] = arr[++i] - ('a' - 'A');
        }
        else if (arr[i] != ' ')
        {
            arr[j++] = arr[i];
        }
    }

    arr[j] = '\0';
    printf("%s", arr);

    return 0;
}
