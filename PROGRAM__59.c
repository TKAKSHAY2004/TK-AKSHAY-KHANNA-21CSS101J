int main()
{
    float celsius, fahrenheit;
    printf("RA2211042010057\n");
    printf("Enter Temperature Value (in Celsius): ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("\nEquivalent Temperature Value (in Fahrenheit) = %0.2f", fahrenheit);
    getch();
    return 0;
}
