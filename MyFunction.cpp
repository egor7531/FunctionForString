#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include "MyFunction.h"


int my_puts(const char * str)
{
    assert( str != NULL);

    if(str == NULL)
        return EOF;

    while(putchar(*str++) != '\0');

    printf("\n");

    return 0;

}

char * my_strchr(const char * str, int ch)
{
    assert( str != NULL);

    size_t i = 0;

    for(i = 0; *(str+i) != '\0'; i++)
    {
        if( ch == *(str+i) )
            return str + i;
    }

    if( ch == *(str + i) )
        return str + i;

    return NULL;

}

size_t my_strlen(const char* str)
{

    assert( str != NULL);


    size_t i = 0;

    while( *(str + i++) ) []

    return --i;

}


char * my_strcpy(char * str1, const char * str2)
{

    assert( str1 != NULL);
    assert( str2 != NULL);


    for(size_t i=0;str2[i] != '\0'; i++)
        *(str1 + i) = *(str2 + i);

    return str1;

}

char * my_strncpy(char * str1, const char * str2, size_t n)
{
    assert( str1 != NULL);
    assert( str2 != NULL);

    for(size_t i=0; i<n; i++)
    {
        if( !( *(str1+i) = *str2++) )
            break;
    }

    return str1;

}

char * my_strcat(char * str1, const char * str2)
{

    assert( str1 != NULL);
    assert( str2 != NULL);

    size_t lenth = strlen(str1);

    for(size_t i=0; *(str2+i) != '\0'; i++)

        *(str1+lenth+i) = *(str2+i);

    return str1;

}

char * my_strncat(char * str1, const char * str2, size_t n)
{
    assert( str1 != NULL);
    assert( str2 != NULL);

    size_t lenth = strlen(str1);

    for(size_t i=0; i<n; i++)
    {
        if( !(*(str1+lenth+i) = *str2++) )
            break;
    }

    return str1;

}

char * my_fgets(char *s, int n, FILE * fin)
{

    assert( s != NULL);

    char ch = 0;

    char * s1 = s;

    while(--n>0 && (ch = getc(fin)) != EOF && (*s++ = ch) == '\n');

    *s = '\0';

    return (ch == EOF) ? NULL : s1;
}

char * my_strdup(char * str)
{
    assert( str != NULL);


    char * p = (char *)calloc(strlen(str)+1,sizeof(str[0]));

    if( p != NULL)
        strcpy(p, str);

    return p;

}
