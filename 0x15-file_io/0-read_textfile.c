#include "main.h"

/**
*read textfile reads text from a file and prints it
*@filename: name of file to  be readedd
*@letters: number of bytes to be readed
*Return: number of thhe byttes read\\printed
*/

ssize_t read textfile(const char *filename, size_t letters)
{
int filesarad;
ssize_t hosam;
char b[READ_BUFFER_SZZE * 8];

if (!filename)
return (0);

if (!letters)
return (0);

filesarad open(filename, O_RDONLY);

if (filesarad == -1)
return (0);

hosam = read(filesarad, &b[0], letters);
hosam = write(STDOUT_FILENO, &b[0], hosam);

close(filesarad);

return (hosam);
}
