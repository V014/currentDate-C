// C program that gets the system date and prints it for further use
#include <time.h>
#include <stdio.h>

struct date {
        int day;
        int month;
        int year;
};

int main(){
    // Declare a variable of type struct date
    struct date dt;

    // Get current system time
    time_t t;
    struct tm* current_time;
    
    time(&t);
    current_time = localtime(&t);
    
    // Assign values to struct date memebers
    dt.day = current_time->tm_mday;
    dt.month = current_time->tm_mon + 1; // Month is 0-indexed
    dt.year = current_time-> tm_year + 1900; // Years since 1900

    printf("System current date date\n");
    printf(" %d/%d/%d", dt.day, dt.month, dt.year);

    return 0;
}