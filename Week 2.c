#include <stdio.h>
int main() {
    int num;
    char ch;
    float decimal;
    
    printf("Enter integer: ");
    scanf("%d", &num);
    printf("Enter character: ");
    scanf(" %c", &ch);  
    printf("Enter float: ");
    scanf("%f", &decimal);
    
    num += 10; 
    
    printf("New Num: %d\n", num);
    printf("Char: %c\n", ch);
    printf("Decimal: %.2f\n", decimal);
    return 0;
}
