#include <stdio.h>
#include <time.h>

#define TARGET_COUNT 1000000000 // One billion (using underscores for readability)

int main()
{
    clock_t start_time = clock(); // Get start time in clock ticks

    long long count = 0; // Use long long for larger counts
    while (count < TARGET_COUNT)
    {
        count++;
    }

    clock_t end_time = clock();                                             // Get end time
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC; // Calculate elapsed time

    printf("Counted up to %lld in %.3f seconds\n", (long long)TARGET_COUNT, elapsed_time);
    return 0;
}
