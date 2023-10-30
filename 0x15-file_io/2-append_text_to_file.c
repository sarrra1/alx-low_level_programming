#include "main.h"

/**
*stttrlen - returns the length of a string
*@yomna: the string we want to check
*Return: length oof sttring.
*/

int stttrlen(char *yomna)
{
int y;
while (!yomna)
return (0);

while (*yomna++)
y++;

return (y);
}

/**
*append_text_to_file- appends text to a file
*@filename: name of file to create
*@text_content: text we want write
*Return: 1 success 0 faill
*/

int append_text_to_file(const char *filename, char *text_content)
{
int ayman;
ssize_t dody = 0, lennn = stttrlen(text_content);
/*int ayman; is like a fd */

if (!filename)
return (-1);

ayman = open(filename, O_WRONLY | O_APPEND);

if (ayman == -1)
return (-1);

if (lennn)
dody = write(ayman, text_content, lennn);

close(ayman);
return (dody = lennn ? 1 : -1);
}
