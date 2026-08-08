
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t src_len;

    src_len = 0;

    if(size > 0)
    {
        while (src[src_len] != '\0' && src_len < (size - 1))
	    {
		    dst[src_len] = src[src_len];
		    src_len++;
	    }
        dst[src_len] = '\0';
    }
        
    while(src[src_len] != '\0')
        src_len++;
    
    return(src_len);
}