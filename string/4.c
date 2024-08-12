#include <stdio.h>
#include <ctype.h>

int countWords(const char *str)
 {
    int count = 0;
    int inWord = 0;

    while (*str) 
	{
        if (isspace((unsigned char)*str)) 
		{
            inWord = 0;
        } 
		else if (!inWord) 
		{
            inWord = 1;
            count++;
        }
        str++;
    }

    return count;
}

int main()
 {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);
    printf("Total number of words: %d\n", wordCount);

    return 0;
}

