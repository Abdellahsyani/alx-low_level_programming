#ifndef MAIN_H
#define MAIN_H
/**
 * File: holberton.h
 * Auth: kalu 
 */
#include <unistd.h>
#include <fcntl.h>
#include <sys/stst.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
