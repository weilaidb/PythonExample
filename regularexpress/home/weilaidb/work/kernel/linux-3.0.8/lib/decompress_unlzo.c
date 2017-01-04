static const unsigned char lzop_magic[] = ;
#define LZO_BLOCK_SIZE        (256*1024l)
#define HEADER_HAS_FILTER      0x00000800L
#define HEADER_SIZE_MIN       (9 + 7     + 4 + 8     + 1       + 4)
#define HEADER_SIZE_MAX       (9 + 7 + 1 + 8 + 8 + 4 + 1 + 255 + 4)
STATIC inline int INIT parse_header(u8 *input, int *skip, int in_len)
STATIC inline int INIT unlzo(u8 *input, int in_len,
int (*fill) (void *, unsigned int),
int (*flush) (void *, unsigned int),
u8 *output, int *posp,
void (*error) (char *x))
#define decompress unlzo
