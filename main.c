/*  Bruno DiGennaro
    CPSC 1111 001
    September 19, 2022

    This program takes the user inputs and randomly generates coordinates to be
    determined if they are inside, outside, or on the radius of a circle
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void) {

    int input, xmin, xmax, ymin, ymax;

    // store user input values to respective variables
    printf("\nEnter a 3 digit number: ");
    scanf("%d", &input);

    printf("\nEnter a minimum x value: ");
    scanf("%d", &xmin);

    printf("\nEnter a maximum x value: ");
    scanf("%d", &xmax);

    printf("\nEnter a minimum y value: ");
    scanf("%d", &ymin);

    printf("\nEnter a maximum y value: ");
    scanf("%d", &ymax);

    // printf("\nSquare Root = %d", sqrt); 

    // srand statement necessary for RND using time from time.h
    srand( (int)time(0) );

    // for loop to show 10 lines of corrdinates
    for (int i=0; i<10; i++) {
        // RNG for value x of point (x,y)
        int x = (rand() % (xmax-xmin)) + xmin;
        // RNG for value y of point (x,y)
        int y = (rand() % (ymax-ymin)) + ymin;

        input = sqrt(input);

        // determines if x coordinate is in, on, or outside the radius
        if ( x < input) 
        
            printf("( %d, %d) is inside the circle with radius %d\n", x, y, input);
        
        else if ( x == input)
        
            printf("( %d, %d) is on the circumference of the circle with radius %d\n", x, y, input);        
        
        else if ( x > input)
        
            printf("( %d, %d) is outside the circle with radius %d\n", x, y, input);        
        
    }   

    return 0;
}