#include <stdio.h>
#include <locale.h>

int main(){
    float dollars;
    /*Prompt a user to enter the Dollar value*/
    printf("Enter the dollar(s) value: ");
    /*Reads the input and formarts it to a string value*/
    scanf("%f", &dollars);
    /*The Coversion process from dollars to KSH*/
    float Ksh = dollars * 120.80;
    /*To output the calculated value of a dollar in Ksh*/
    /*The 0.2f prints the floating point value to 2 decimal places*/
    printf("%0.2f Ksh", Ksh);
}
