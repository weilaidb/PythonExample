# define gunzip NULL
# define bunzip2 NULL
# define unlzma NULL
# define unxz NULL
# define unlzo NULL
static const struct compress_format  compressed_formats[] = ;
decompress_fn decompress_method(const unsigned char *inbuf, int len,
const char **name)
