/*
 * Assignment: Greet the user.
 *
 * This program will ask the user for the hour of the day and will greet them
 * accordingly to such hour.  The hour must be provided as an integer between
 * 0 and 23 (inclusive).  The program should give the following messages:
 *
 * "Good morning!" if the hour is between 3 and 11 (inclusive).
 * "Good afternoon!" if the hour is between 12 and 18 (inclusive).
 * "Good evening!" if the hour is between 19 and 21 (inclusive).
 * "Good night!" if the hour is greater than or equals to 22, or if it is less than or equals to 2.
 *
 * The program should send an error message if the user inputs an hour less than
 * 0 or greater than 23.
 *
 * Author: León Felipe Guevara Chávez.
 * Date: August 26th, 2018.
 * e-mail: leon.guevara@itesm.mx
 */

#include <stdio.h>

int main() {
    // The variable that will hold the hour that the user will give us
    unsigned int hour;

    // I ask the user for the time in my must beloved London accent
    printf("Hullo, Mate! Would you gimme the hour? ");
    scanf("%u", &hour);

    // I greet the user accordingly to their input
    if((hour < 0) || (hour > 23)) {
        // If the user gives me an invalid input, I let them know
        printf("Bloody hell, mate! That's not a valid hour. Cheeri-o");
    } else {
        // If the input is valid, I greet them depending on the hour
        // of the day.
        if ((hour >= 3) && (hour < 12)) {
            printf("Good morning!");
        } else {
            if ((hour >= 12) && (hour < 19)) {
                printf("Good afternoon!");
            } else {
                if ((hour >= 19) && (hour < 22)) {
                    printf("Good evening!");
                } else {
                    printf("Good night!");
                }
            }
        }
    }

    // The program terminates itself with nothing to report
    return 0;
}