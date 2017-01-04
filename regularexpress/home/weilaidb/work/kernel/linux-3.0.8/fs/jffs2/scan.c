#define DEFAULT_EMPTY_SCAN_SIZE 256
#define noisy_printk(noise, args...) do  while(0)
static uint32_t pseudo_random;
static int jffs2_scan_eraseblock (struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
unsigned char *buf, uint32_t buf_size, struct jffs2_summary *s);
static int jffs2_scan_inode_node(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_inode *ri, uint32_t ofs, struct jffs2_summary *s);
static int jffs2_scan_dirent_node(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_dirent *rd, uint32_t ofs, struct jffs2_summary *s);
static inline int min_free(struct jffs2_sb_info *c)
static inline uint32_t EMPTY_SCAN_SIZE(uint32_t sector_size)
static int file_dirty(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb)
int jffs2_scan_medium(struct jffs2_sb_info *c)
static int jffs2_fill_scan_buf(struct jffs2_sb_info *c, void *buf,
uint32_t ofs, uint32_t len)
int jffs2_scan_classify_jeb(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb)
static int jffs2_scan_xattr_node(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_xattr *rx, uint32_t ofs,
struct jffs2_summary *s)
static int jffs2_scan_xref_node(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_xref *rr, uint32_t ofs,
struct jffs2_summary *s)
static int jffs2_scan_eraseblock (struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
unsigned char *buf, uint32_t buf_size, struct jffs2_summary *s) {
struct jffs2_unknown_node *node;
struct jffs2_unknown_node crcnode;
uint32_t ofs, prevofs, max_ofs;
uint32_t hdr_crc, buf_ofs, buf_len;
int err;
int noise = 0;
int cleanmarkerfound = 0;
ofs = jeb->offset;
prevofs = jeb->offset - 1;
D1(printk(KERN_DEBUG "jffs2_scan_eraseblock(): Scanning block at 0x%x\n", ofs));
if (jffs2_cleanmarker_oob(c))
if (jffs2_sum_active())
buf_ofs = jeb->offset;
if (!buf_size)  else
ofs = 0;
max_ofs = EMPTY_SCAN_SIZE(c->sector_size);
while(ofs < max_ofs && *(uint32_t *)(&buf[ofs]) == 0xFFFFFFFF)
ofs += 4;
if (ofs == max_ofs)
if (ofs)
ofs += jeb->offset;
noise = 10;
dbg_summary("no summary found in jeb 0x%08x. Apply original scan.\n",jeb->offset);
scan_more:
while(ofs < jeb->offset + c->sector_size)
struct jffs2_inode_cache *jffs2_scan_make_ino_cache(struct jffs2_sb_info *c, uint32_t ino)
static int jffs2_scan_inode_node(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_inode *ri, uint32_t ofs, struct jffs2_summary *s)
static int jffs2_scan_dirent_node(struct jffs2_sb_info *c, struct jffs2_eraseblock *jeb,
struct jffs2_raw_dirent *rd, uint32_t ofs, struct jffs2_summary *s)
static int count_list(struct list_head *l)
static void rotate_list(struct list_head *head, uint32_t count)
void jffs2_rotate_lists(struct jffs2_sb_info *c)
