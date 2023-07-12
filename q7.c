// 7. Write a program to calculate the difference between two time periods.

#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;

    // Convert both time periods to seconds
    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;

    // Calculate the absolute difference in seconds
    int secondsDiff = abs(endSeconds - startSeconds);

    // Convert the difference back to hours, minutes, and seconds
    difference.hours = secondsDiff / 3600;
    secondsDiff %= 3600;
    difference.minutes = secondsDiff / 60;
    difference.seconds = secondsDiff % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    struct Time difference = calculateTimeDifference(startTime, endTime);

    printf("Time difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}
