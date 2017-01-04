static void logfs_calc_free(struct super_block *sb)
static void reserve_sb_and_journal(struct super_block *sb)
static void read_dynsb(struct super_block *sb,
struct logfs_je_dynsb *dynsb)
static void read_anchor(struct super_block *sb,
struct logfs_je_anchor *da)
static void read_erasecount(struct super_block *sb,
struct logfs_je_journal_ec *ec)
static int read_area(struct super_block *sb, struct logfs_je_area *a)
static void *unpack(void *from, void *to)
static int __read_je_header(struct super_block *sb, u64 ofs,
struct logfs_journal_header *jh)
static int __read_je_payload(struct super_block *sb, u64 ofs,
struct logfs_journal_header *jh)
static int __read_je(struct super_block *sb, u64 ofs,
struct logfs_journal_header *jh)
static int read_je(struct super_block *sb, u64 ofs)
static int logfs_read_segment(struct super_block *sb, u32 segno)
static u64 read_gec(struct super_block *sb, u32 segno)
static int logfs_read_journal(struct super_block *sb)
static void journal_get_free_segment(struct logfs_area *area)
static void journal_get_erase_count(struct logfs_area *area)
static int journal_erase_segment(struct logfs_area *area)
static size_t __logfs_write_header(struct logfs_super *super,
struct logfs_journal_header *jh, size_t len, size_t datalen,
u16 type, u8 compr)
static size_t logfs_write_header(struct logfs_super *super,
struct logfs_journal_header *jh, size_t datalen, u16 type)
static inline size_t logfs_journal_erasecount_size(struct logfs_super *super)
static void *logfs_write_erasecount(struct super_block *sb, void *_ec,
u16 *type, size_t *len)
static void account_shadow(void *_shadow, unsigned long _sb, u64 ignore,
size_t ignore2)
static void account_shadows(struct super_block *sb)
static void *__logfs_write_anchor(struct super_block *sb, void *_da,
u16 *type, size_t *len)
static void *logfs_write_dynsb(struct super_block *sb, void *_dynsb,
u16 *type, size_t *len)
static void write_wbuf(struct super_block *sb, struct logfs_area *area,
void *wbuf)
static void *logfs_write_area(struct super_block *sb, void *_a,
u16 *type, size_t *len)
static void *logfs_write_commit(struct super_block *sb, void *h,
u16 *type, size_t *len)
static size_t __logfs_write_je(struct super_block *sb, void *buf, u16 type,
size_t len)
static s64 logfs_get_free_bytes(struct logfs_area *area, size_t *bytes,
int must_pad)
static int logfs_write_je_buf(struct super_block *sb, void *buf, u16 type,
size_t buf_len)
static int logfs_write_je(struct super_block *sb,
void* (*write)(struct super_block *sb, void *scratch,
u16 *type, size_t *len))
int write_alias_journal(struct super_block *sb, u64 ino, u64 bix,
level_t level, int child_no, __be64 val)
static int logfs_write_obj_aliases(struct super_block *sb)
void logfs_write_anchor(struct super_block *sb)
void do_logfs_journal_wl_pass(struct super_block *sb)
static const struct logfs_area_ops journal_area_ops = ;
int logfs_init_journal(struct super_block *sb)
void logfs_cleanup_journal(struct super_block *sb)
