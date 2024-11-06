int main() {
    int num1, num2, product;

    // Read two integers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the product of the two numbers
    product = num1 * num2;

    // Print the product
    printf("The product of %d and %d is %d.\n", num1, num2, product);

    return 0;
}