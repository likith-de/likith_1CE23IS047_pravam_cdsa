int main() {
    int year;

    // Prompt user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}