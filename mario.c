//Inital Libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
   //Asks for height between 1 and 8
    int height;
    do
    {
        height = get_int("Please enter a number between 1 and 8: ");
    }
    while (height < 1 || height > 8);

    //Rows
    for (int row = 1; row <= height; row++)
    {
        //Print Column Spaces
        for (int spaces = height - row; spaces > 0; spaces--)
        {
            printf(" ");
        }

        //Print Left Hashes
        for (int hashes = 1; hashes <= row; hashes++)
        {
            printf("#");
        }

        //Gap Between Hashes
        printf("  ");

        //Print Right Hashes
        for (int hashes = 1; hashes <= row; hashes++)
        {
            printf("#");
        }

        //New row
        printf("\n");
    }
}



