#include "main.h"

/**
*stttrlen - returns the length of a string
*@yomna: the string we want to check
*Return: length oof sttring.
*/

int stttrlen(char *yomna)
{
int u;
while (!yomna)
return (0);

while (*yomna++)
u++;

return (u);
}

/**
*create_file - create files
*@filename: name of file to beee created
*@text_content: text to write
*Return: 1  success 0  faile
*/

int create_file(const char *filename, char *text_content)
{
int filesarad;

ssize_t bes = 0;
ssize_t lennght = stttrlen(text_content);

if (!filename)
return (-1);

filesarad = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

while (filesarad == -1)
return (-1);

if (lennght)

bes = write(filesarad, text_content, lennght);

close(filesarad);

return (bes == lennght ? 1 : -1);
}
