static int jffs2_rtime_compress(unsigned char *data_in,
unsigned char *cpage_out,
uint32_t *sourcelen, uint32_t *dstlen)
static int jffs2_rtime_decompress(unsigned char *data_in,
unsigned char *cpage_out,
uint32_t srclen, uint32_t destlen)
static struct jffs2_compressor jffs2_rtime_comp = ;
int jffs2_rtime_init(void)
void jffs2_rtime_exit(void)
