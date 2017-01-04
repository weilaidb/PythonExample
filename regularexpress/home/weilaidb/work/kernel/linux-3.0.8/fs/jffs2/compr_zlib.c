#if !defined(__KERNEL__) && !defined(__ECOS)
#error "The userspace support got too messy and was removed. Update your mkfs.jffs2"
#define STREAM_END_SPACE 12
static DEFINE_MUTEX(deflate_mutex);
static DEFINE_MUTEX(inflate_mutex);
static z_stream inf_strm, def_strm;
static int __init alloc_workspaces(void)
static void free_workspaces(void)
#define alloc_workspaces() (0)
#define free_workspaces() do  while(0)
static int jffs2_zlib_compress(unsigned char *data_in,
unsigned char *cpage_out,
uint32_t *sourcelen, uint32_t *dstlen)
static int jffs2_zlib_decompress(unsigned char *data_in,
unsigned char *cpage_out,
uint32_t srclen, uint32_t destlen)
static struct jffs2_compressor jffs2_zlib_comp = ;
int __init jffs2_zlib_init(void)
void jffs2_zlib_exit(void)
