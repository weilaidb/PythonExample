static DEFINE_SPINLOCK(jffs2_compressor_list_lock);
static LIST_HEAD(jffs2_compressor_list);
static int jffs2_compression_mode = JFFS2_COMPR_MODE_PRIORITY;
static uint32_t none_stat_compr_blocks=0,none_stat_decompr_blocks=0,none_stat_compr_size=0;
static int jffs2_is_best_compression(struct jffs2_compressor *this,
struct jffs2_compressor *best, uint32_t size, uint32_t bestsize)
uint16_t jffs2_compress(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
unsigned char *data_in, unsigned char **cpage_out,
uint32_t *datalen, uint32_t *cdatalen)
int jffs2_decompress(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
uint16_t comprtype, unsigned char *cdata_in,
unsigned char *data_out, uint32_t cdatalen, uint32_t datalen)
int jffs2_register_compressor(struct jffs2_compressor *comp)
int jffs2_unregister_compressor(struct jffs2_compressor *comp)
void jffs2_free_comprbuf(unsigned char *comprbuf, unsigned char *orig)
int __init jffs2_compressors_init(void)
int jffs2_compressors_exit(void)
