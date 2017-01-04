const uint8_t ff_log2_run[41]=;
void avpriv_align_put_bits(PutBitContext *s)
void avpriv_put_string(PutBitContext *pb, const char *string,
int terminate_string)
void avpriv_copy_bits(PutBitContext *pb, const uint8_t *src, int length)
#define GET_DATA(v, table, i, wrap, size)                   \
static int alloc_table(VLC *vlc, int size, int use_static)
static av_always_inline uint32_t bitswap_32(uint32_t x)
typedef struct VLCcode  VLCcode;
static int compare_vlcspec(const void *a, const void *b)
static int build_table(VLC *vlc, int table_nb_bits, int nb_codes,
VLCcode *codes, int flags)
int ff_init_vlc_sparse(VLC *vlc_arg, int nb_bits, int nb_codes,
const void *bits, int bits_wrap, int bits_size,
const void *codes, int codes_wrap, int codes_size,
const void *symbols, int symbols_wrap, int symbols_size,
int flags)
void ff_free_vlc(VLC *vlc)
