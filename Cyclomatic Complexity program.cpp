#include <stdio.h>

int main() {
    int E, N, P, complexity;

    // Input values
    printf("Enter the number of edges (E): ");
    scanf("%d", &E);

    printf("Enter the number of nodes (N): ");
    scanf("%d", &N);

    printf("Enter the number of predicate nodes (P): ");
    scanf("%d", &P);

    // Calculate Cyclomatic Complexity
    complexity = E - N + P + 2;

    // Display the result
    printf("Cyclomatic Complexity (V(G)) = %d\n", complexity);

    return 0;
}
