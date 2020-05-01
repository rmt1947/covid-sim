#ifndef COVIDSIM_BINIO_H_INCLUDED_
#define COVIDSIM_BINIO_H_INCLUDED_
#include <stddef.h>
#include <stdio.h>

size_t fwrite_big(void *,size_t ,size_t , FILE *);
size_t fread_big(void *,size_t ,size_t , FILE *);

size_t zfwrite_big(void *,size_t ,size_t , FILE *);
size_t zfread_big(void *,size_t ,size_t , FILE *);

#endif // COVIDSIM_BINIO_H_INCLUDED_
