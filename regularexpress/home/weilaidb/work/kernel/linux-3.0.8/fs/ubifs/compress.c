static struct ubifs_compressor none_compr = ;
static DEFINE_MUTEX(lzo_mutex);
static struct ubifs_compressor lzo_compr = ;
static struct ubifs_compressor lzo_compr = ;
static DEFINE_MUTEX(deflate_mutex);
static DEFINE_MUTEX(inflate_mutex);
static struct ubifs_compressor zlib_compr = ;
static struct ubifs_compressor zlib_compr = ;
struct ubifs_compressor *ubifs_compressors[UBIFS_COMPR_TYPES_CNT];
void ubifs_compress(const void *in_buf, int in_len, void *out_buf, int *out_len,
int *compr_type)
int ubifs_decompress(const void *in_buf, int in_len, void *out_buf,
int *out_len, int compr_type)
static int __init compr_init(struct ubifs_compressor *compr)
static void compr_exit(struct ubifs_compressor *compr)
int __init ubifs_compressors_init(void)
void ubifs_compressors_exit(void)
