size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t  i;

    i = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    while (src[i] != '\0' && ((dst_len + i + 1) < size))
    {
        dst[dst_len + i] = src[i];
        ++i;
    }
    if (size >= dst_len)
    {
        dst[dst_len + 1] = '\0';
        return(dst_len + src_len);
    }
    return(size + src_len);    
}
