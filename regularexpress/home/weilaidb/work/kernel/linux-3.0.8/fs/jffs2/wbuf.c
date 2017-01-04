#undef BREAKME
#undef BREAKMEHEADER
static unsigned char *brokenbuf;
#define PAGE_DIV(x) ( ((unsigned long)(x) / (unsigned long)(c->wbuf_pagesize)) * (unsigned long)(c->wbuf_pagesize) )
#define PAGE_MOD(x) ( (unsigned long)(x) % (unsigned long)(c->wbuf_pagesize) )
#define MAX_ERASE_FAILURES 	2
struct jffs2_inodirty ;
static struct jffs2_inodirty inodirty_nomem;
static int jffs2_wbuf_pending_for_ino(struct jffs2_sb_info *c, uint32_t ino)
static void jffs2_clear_wbuf_ino_list(struct jffs2_sb_info *c)
static void jffs2_wbuf_dirties_inode(struct jffs2_sb_info *c, uint32_t ino)
static inline void jffs2_refile_wbuf_blocks(struct jffs2_sb_info *c)
#define REFILE_NOTEMPTY 0
#define REFILE_ANYWAY   1
static void jffs2_block_refile(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb, int allow_empty)
static struct jffs2_raw_node_ref **jffs2_incore_replace_raw(struct jffs2_sb_info *c,
struct jffs2_inode_info *f,
struct jffs2_raw_node_ref *raw,
union jffs2_node_union *node)
static int jffs2_verify_write(struct jffs2_sb_info *c, unsigned char *buf,
uint32_t ofs)
#define jffs2_verify_write(c,b,o) (0)
static void jffs2_wbuf_recover(struct jffs2_sb_info *c)
#define NOPAD		0
#define PAD_NOACCOUNT	1
#define PAD_ACCOUNTING	2
static int __jffs2_flush_wbuf(struct jffs2_sb_info *c, int pad)
int jffs2_flush_wbuf_gc(struct jffs2_sb_info *c, uint32_t ino)
int jffs2_flush_wbuf_pad(struct jffs2_sb_info *c)
static size_t jffs2_fill_wbuf(struct jffs2_sb_info *c, const uint8_t *buf,
size_t len)
int jffs2_flash_writev(struct jffs2_sb_info *c, const struct kvec *invecs,
unsigned long count, loff_t to, size_t *retlen,
uint32_t ino)
int jffs2_flash_write(struct jffs2_sb_info *c, loff_t ofs, size_t len,
size_t *retlen, const u_char *buf)
int jffs2_flash_read(struct jffs2_sb_info *c, loff_t ofs, size_t len, size_t *retlen, u_char *buf)
#define NR_OOB_SCAN_PAGES 4
#define OOB_CM_SIZE 8
static const struct jffs2_unknown_node oob_cleanmarker =
;
int jffs2_check_oob_empty(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb, int mode)
int jffs2_check_nand_cleanmarker(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
int jffs2_write_nand_cleanmarker(struct jffs2_sb_info *c,
struct jffs2_eraseblock *jeb)
int jffs2_write_nand_badblock(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb, uint32_t bad_offset)
int jffs2_nand_flash_setup(struct jffs2_sb_info *c)
void jffs2_nand_flash_cleanup(struct jffs2_sb_info *c)
int jffs2_dataflash_setup(struct jffs2_sb_info *c)
void jffs2_dataflash_cleanup(struct jffs2_sb_info *c)
int jffs2_nor_wbuf_flash_setup(struct jffs2_sb_info *c)
void jffs2_nor_wbuf_flash_cleanup(struct jffs2_sb_info *c)
int jffs2_ubivol_setup(struct jffs2_sb_info *c)
void jffs2_ubivol_cleanup(struct jffs2_sb_info *c)
