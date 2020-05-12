#include <stdio.h>
#include <time.h>

int main() {

    unsigned long x;
//    returns current time since the Epoch (00:00:00 UTC, January 1, 1970), measured in seconds
    time_t a = time(NULL);

// 4.2 billion times
    for (x = 0; x < 4200000000; x++);

    time_t b = time(NULL);
    printf("Processing time = %d sec", (int) (b - a));

    return 0;
}
