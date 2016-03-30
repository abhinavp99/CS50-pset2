#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])

// making sure command line user input is valid
{   
    if (argc != 2)
    {   
        printf("No keyword given. Please give a keyword at the command line.\n");   
        return 1;
    }
    
    int k = atoi(argv[1]);
    int key = k % 26;    
    
     // gets plaintext that needs to be ciphered from user and declares cipher array
    string pt = GetString(); 
    int length = strlen(pt);
    int cipher[length];
    
     for (int i = 0; i < length ; i++)
        {
            if (isalpha(pt[i]))
            {   
                if (isupper(pt[i]))
                {
                   cipher[i] = ((pt[i] - 'A') + key) % 26 + 'A';
                } 
                else
                {
                    cipher[i] = ((pt[i] - 'a') + key) % 26 + 'a';
                }
            }
            else
            {
                cipher[i] = pt[i];
            }
        }
        
        // prints cipher
        for (int i = 0; i < length ; i++)
            {
                printf("%c", cipher[i]);    
            }
         printf("\n");
}
