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
    
    int key_length = strlen(argv[1]);
        
    for (int i = 0; i < key_length ; i++)
        {
            if (isalpha(argv[1][i]))
            {
               
            }
            else
            {
                 printf("Enter a valid keyword.\n");
                 return 1;
            }            
        }
       
    // gets plaintext that needs to be ciphered from user and declares cipher array
    string pt = GetString(); 
    int pt_length = strlen(pt);
    int keyword[key_length];
    int cipher[pt_length];
    
    // renames keyphrase "argv" to "keyword"
    for (int i = 0; i < key_length; i++)
        {
            keyword[i] = argv[1][i];
        };
        
    int j = 0;
    for (int i = 0; i < pt_length ; i++)
        {   if (isalpha(pt[i]))
            {
                if (isupper(pt[i]))
                {
                    if(isupper(keyword[j % key_length]))
                    {
                        cipher[i] = ((pt[i] - 'A' + keyword[j % key_length] - 'A') % 26) + 'A';                        
                    }
                    else 
                    {
                        cipher[i] = ((pt[i] - 'A' + keyword[j % key_length] - 'a') % 26) + 'A';    
                    }
                }
                else
                {
                    if(isupper(keyword[j % key_length]))
                    {
                        cipher[i] = ((pt[i] - 'a' + keyword[j % key_length] - 'A') % 26) + 'a';                        
                    }
                    else
                    {
                        cipher[i] = ((pt[i] - 'a' + keyword[j % key_length] - 'a') % 26) + 'a'; 
                    }
                }
                j++;
            }
            else
            {
                cipher[i] = pt[i];
            }
        }
        
        // prints cipher
        for (int i = 0; i < pt_length ; i++)
            {
                printf("%c", cipher[i]); 
            }
         printf("\n");
}   
   

