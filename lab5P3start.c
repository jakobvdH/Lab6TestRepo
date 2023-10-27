/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        for(int i=0;i<strlen(input);i++){
            if(input[i]=='a'||input[i]=='A') letterCount[0]++;
            else if(input[i]=='b'||input[i]=='B') letterCount[1]++;
            else if(input[i]=='c'||input[i]=='C') letterCount[2]++;
            else if(input[i]=='d'||input[i]=='D') letterCount[3]++;
            else if(input[i]=='e'||input[i]=='E') letterCount[4]++;
            else if(input[i]=='f'||input[i]=='F') letterCount[5]++;
            else if(input[i]=='g'||input[i]=='G') letterCount[6]++;
            else if(input[i]=='h'||input[i]=='H') letterCount[7]++;
            else if(input[i]=='i'||input[i]=='I') letterCount[8]++;
            else if(input[i]=='j'||input[i]=='J') letterCount[9]++;
            else if(input[i]=='k'||input[i]=='K') letterCount[10]++;
            else if(input[i]=='l'||input[i]=='L') letterCount[11]++;
            else if(input[i]=='m'||input[i]=='M') letterCount[12]++;
            else if(input[i]=='n'||input[i]=='N') letterCount[13]++;
            else if(input[i]=='o'||input[i]=='O') letterCount[14]++;
            else if(input[i]=='p'||input[i]=='P') letterCount[15]++;
            else if(input[i]=='q'||input[i]=='Q') letterCount[16]++;
            else if(input[i]=='r'||input[i]=='R') letterCount[17]++;
            else if(input[i]=='s'||input[i]=='S') letterCount[18]++;
            else if(input[i]=='t'||input[i]=='T') letterCount[19]++;
            else if(input[i]=='u'||input[i]=='U') letterCount[20]++;
            else if(input[i]=='v'||input[i]=='V') letterCount[21]++;
            else if(input[i]=='w'||input[i]=='W') letterCount[22]++;
            else if(input[i]=='x'||input[i]=='X') letterCount[23]++;
            else if(input[i]=='y'||input[i]=='Y') letterCount[24]++;
            else if(input[i]=='z'||input[i]=='Z') letterCount[25]++;
        }
        // Iterate through the characters in the input
        // Check if the character is a letter (A-Z or a-z)
        // Increment the corresponding count in the array
    }
    // More of your code here to
    // Display the letter counts
    printf("Distribution of letters in the input:\n");
    printf("A: %d B: %d C: %d D: %d E: %d F: %d G: %d H: %d I: %d J: %d K: %d L: %d M: %d N: %d O: %d P: %d Q: %d R: %d S: %d T: %d U: %d V: %d W: %d X: %d Y: %d Z: %d",letterCount[0],letterCount[1],letterCount[2],letterCount[3],letterCount[4],letterCount[5],letterCount[6],letterCount[7],letterCount[8],letterCount[9],letterCount[10],letterCount[11],letterCount[12],letterCount[13],letterCount[14],letterCount[15],letterCount[16],letterCount[17],letterCount[18],letterCount[19],letterCount[20],letterCount[21],letterCount[22],letterCount[23],letterCount[24],letterCount[25]);

    return 0;
}