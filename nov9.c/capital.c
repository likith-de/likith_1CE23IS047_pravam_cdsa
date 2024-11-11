#include<stdio>

int main()
{

void capit(char *str) {
    int i = 0;
    int capit = 1; 
    while (str[i] != '\0') {
        if (capit && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capit = 0;
        } else if (str[i] == ' ') {
            capit = 1;
        }
        i++;
    }
}

int main() {
    char str[1000];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    capit(str);

    printf("Modified sentence: %s", str);

    return 0;
}
}