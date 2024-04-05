#include <stdio.h>
#include <math.h>

int main() {
    int N1 = 13; 
    int N2 = 7;  
    int n1 = 10; 
    int n2 = 4;  
    double Length = N1 + N2;          
    double vocabulary = n1 + n2;       
    double Difficulty = (n1 / 2) * (N2 / n2); 
    double Volume = Length * log2(vocabulary); 

    printf("Program Length: %.2f\n", Length);
    printf("Vocabulary Size: %.2f\n", vocabulary);
    printf("Difficulty: %.2f\n", Difficulty);
    printf("Volume: %.2f\n", Volume);

    return 0;
}
