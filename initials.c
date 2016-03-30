#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
// gets name from user and defines its length
{   
    string name = GetString();
    int length = strlen(name);
    
    // prints out the first letter in the name in uppercase
    printf("%c", toupper(name[0]));
    
    // the loop checks for spaces and capitalizes the letter that follows it 
    for (int i = 0; i < length; i++)
    {   
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}
