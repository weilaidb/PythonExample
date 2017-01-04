static void *lzo_mem;
static void *lzo_compress_buf;
static DEFINE_MUTEX(deflate_mutex);
static void free_workspace(void)
static int __init alloc_workspace(void)
static int jffs2_lzo_compress(unsigned char *data_in, unsigned char *cpage_out,
uint32_t *sourcelen, uint32_t *dstlen)
static int jffs2_lzo_decompress(unsigned char *data_in, unsigned char *cpage_out,
uint32_t srclen, uint32_t destlen)
static struct jffs2_compressor jffs2_lzo_comp = ;
int __init jffs2_lzo_init(void)
void jffs2_lzo_exit(void)
