/* beecrowd | 1001
Extremely Basic
Adapted by Neilor Tonin, URI  Brazil
Timelimit: 1
Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.

Input

The input file will contain 2 integer numbers.

Output

Print the letter X (uppercase) with a blank space before and after the equal signal followed by the value of X, according to the following example.
Obs.: don't forget the endline after all.

Samples Input, Samples Output
10      9      X = 19


15     -7     X = 8 */
//CODE:
#include<stdio.h>
int main ()
{
    int A, B, X;
    scanf("%d", &A);
    scanf("%d", &B);

    X = A + B;

    printf(" X = %d\n", X);
    return 0;
}