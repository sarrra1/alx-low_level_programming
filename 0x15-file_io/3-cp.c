#include "main.h"

#define USAAAGE "Usage: cp file from file to\n"
#define ERROR_NO_READ "Error: Can't read from file %s\n"
#define ERROR_NO_WRITE "Error: Can't write to %s\n"
#define ERROR_NO_CLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - the main program
 * @aac: argument count
 * @aav: vector
 * Return: 1 if success, 0 if failure
 */
int main(int aac, char **aav)
{
int frommfd = 0;/* File descriptor for the source file*/
int toofd = 0;/* File descriptor for the destination file*/

ssize_t bbo;/* Number of bytes read or written*/

char buuff[READ_BUFFER_SZZE];/* Buffer for reading from the source file*/

if (aac != 3)
{
/* Check if the correct number of arguments is provided*/
dprintf(STDERR_FILENO, USAAAGE);
exit(97);
}

frommfd = open(aav[1], O_RDONLY);
if (frommfd == -1)
{
/* Check if there was an error opening the source file*/
dprintf(STDERR_FILENO, ERROR_NO_READ, aav[1]);
exit(98);
}

toofd = open(aav[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (toofd == -1)
{
/*Check if there was an error opening or creating the destination file*/
dprintf(STDERR_FILENO, ERROR_NO_WRITE, aav[2]);
exit(99);
}

while ((bbo = read(frommfd, buuff, READ_BUFFER_SZZE)) > 0)
{
/*Read data from the source file and write it to the destination file*/
if (write(toofd, buuff, bbo) != bbo)
{
dprintf(STDERR_FILENO, ERROR_NO_WRITE, aav[2]);
exit(99);
}
}

if (bbo == -1)
{
/* Check if there was an error reading from the source file*/
dprintf(STDERR_FILENO, ERROR_NO_READ, aav[1]);
exit(98);
}

frommfd = close(frommfd);
toofd = close(toofd);

if (frommfd) 
{
/* Check if there was an error closing the source file*/
dprintf(STDERR_FILENO, ERROR_NO_CLOSE, frommfd);
exit(100);
}

if (toofd)
{
/* Check if there was an error closing the destination file*/
dprintf(STDERR_FILENO, ERROR_NO_CLOSE, toofd);
exit(100);
}

return (EXIT_SUCCESS);
}
