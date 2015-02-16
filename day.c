#include <stdio.h>
#include <time.h>

int main() {
    char daybuf[20];
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    strftime(daybuf, sizeof(daybuf), "%A", &tm);
    printf("%s\n", daybuf);

    return 0;
}    
