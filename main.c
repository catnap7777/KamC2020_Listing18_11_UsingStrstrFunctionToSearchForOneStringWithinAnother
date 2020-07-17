//Listing 18.11 Using strstr() function to seach for one string within another; page 473

//Probably the most useful of all the string search functions

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *loc, buf1[80], buf2[80];


    //input the strings

    printf("Enter the string to be searched...");
    gets(buf1);
    printf("Enter the target string...");
    gets(buf2);

    //perform the search
    //loc is a pointer to the offset in str1 where first occurrence of str2 happens
    // ... it returns NULL if not found
    loc = strstr(buf1, buf2);

    if(loc == NULL)
    {
        printf("\nNo match was found...\n");
    }
    else
    {
        //all the characters match up until you hit position ?
        //loc-buf1 gives the offset location from beginning of the string..
        printf("\n\"%s\" was found at position %ld.\n", buf2, loc-buf1);
    }

    return 0;

}
