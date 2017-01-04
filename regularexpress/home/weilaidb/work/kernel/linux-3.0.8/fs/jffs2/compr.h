#define __JFFS2_COMPR_H__
#define JFFS2_RUBINMIPS_PRIORITY 10
#define JFFS2_DYNRUBIN_PRIORITY  20
#define JFFS2_LZARI_PRIORITY     30
#define JFFS2_RTIME_PRIORITY     50
#define JFFS2_ZLIB_PRIORITY      60
#define JFFS2_LZO_PRIORITY       80
#define JFFS2_RUBINMIPS_DISABLED
#define JFFS2_DYNRUBIN_DISABLED
#define JFFS2_COMPR_MODE_NONE       0
#define JFFS2_COMPR_MODE_PRIORITY   1
#define JFFS2_COMPR_MODE_SIZE       2
#define JFFS2_COMPR_MODE_FAVOURLZO  3
#define FAVOUR_LZO_PERCENT 80
struct jffs2_compressor ;
int jffs2_register_compressor(struct jffs2_compressor *comp);
int jffs2_unregister_compressor(struct jffs2_compressor *comp);
int jffs2_compressors_init(void);
int jffs2_compressors_exit(void);
uint16_t jffs2_compress(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
unsigned char *data_in, unsigned char **cpage_out,
uint32_t *datalen, uint32_t *cdatalen);
int jffs2_decompress(struct jffs2_sb_info *c, struct jffs2_inode_info *f,
uint16_t comprtype, unsigned char *cdata_in,
unsigned char *data_out, uint32_t cdatalen, uint32_t datalen);
void jffs2_free_comprbuf(unsigned char *comprbuf, unsigned char *orig);
int jffs2_rubinmips_init(void);
void jffs2_rubinmips_exit(void);
int jffs2_dynrubin_init(void);
void jffs2_dynrubin_exit(void);
int jffs2_rtime_init(void);
void jffs2_rtime_exit(void);
int jffs2_zlib_init(void);
void jffs2_zlib_exit(void);
int jffs2_lzo_init(void);
void jffs2_lzo_exit(void);
