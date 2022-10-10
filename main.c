#include <stdio.h>
#include <string.h>

// constant to store the length of the string
#define LENGTH strlen(testString)

/* count lines, words, and characters in input */
main() {
    //declare a string
    char testString[] = "Test string";
    //declare an array with the same size as the string
    char testStringReversed[strlen(testString)];

    // loop over elements of the string as long as i isn't equal to it's length
    for (int i = 0; i != LENGTH; i++){
        // sets the value of index 0 to the value at the end of the original string, stepping backwards through it as i increases
        testStringReversed[i] = testString[LENGTH - i - 1];
        // print the value of the original string at the index that has just been copied
        printf("%6d", testString[i]);
        // when i == LENGTH - 1 this means we have finished copying the final value, prints newline to separate this text from the next output
        if (i == LENGTH - 1) printf("\n");

    }

    // loop through elements of the reversed string and print them
    for (int i = 0; i != LENGTH; i++){
        printf("%6d", testStringReversed[i]);
    }
}