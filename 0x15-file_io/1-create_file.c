#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write into file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
        int f_loc, rd, wr = 0;

        if (!filename)
                return (-1);
        f_loc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        if (f_loc < 0)
        {
                return (-1);
        }
        if (text_content)
        {
                while (text_content[rd])
                {
                        rd++;
                }
                wr = write(f_loc, text_content, rd);
                if (wr != rd)
                        return (-1);
        }
        close(f_loc);
        return (1);
}

