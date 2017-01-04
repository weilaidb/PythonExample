#define IS_LEAF     1
#define IS_DINODE   2
#define gfs2_disk_hash2offset(h) (((u64)(h)) >> 1)
#define gfs2_dir_offset2hash(p) ((u32)(((u64)(p)) << 1))
struct qstr gfs2_qdot __read_mostly;
struct qstr gfs2_qdotdot __read_mostly;
typedef int (*gfs2_dscan_t)(const struct gfs2_dirent *dent,
const struct qstr *name, void *opaque);
int gfs2_dir_get_new_buffer(struct gfs2_inode *ip, u64 block,
struct buffer_head **bhp)
static int gfs2_dir_get_existing_buffer(struct gfs2_inode *ip, u64 block,
struct buffer_head **bhp)
static int gfs2_dir_write_stuffed(struct gfs2_inode *ip, const char *buf,
unsigned int offset, unsigned int size)
static int gfs2_dir_write_data(struct gfs2_inode *ip, const char *buf,
u64 offset, unsigned int size)
static int gfs2_dir_read_stuffed(struct gfs2_inode *ip, char *buf,
u64 offset, unsigned int size)
static int gfs2_dir_read_data(struct gfs2_inode *ip, char *buf, u64 offset,
unsigned int size, unsigned ra)
static inline int gfs2_dirent_sentinel(const struct gfs2_dirent *dent)
static inline int __gfs2_dirent_find(const struct gfs2_dirent *dent,
const struct qstr *name, int ret)
static int gfs2_dirent_find(const struct gfs2_dirent *dent,
const struct qstr *name,
void *opaque)
static int gfs2_dirent_prev(const struct gfs2_dirent *dent,
const struct qstr *name,
void *opaque)
static int gfs2_dirent_last(const struct gfs2_dirent *dent,
const struct qstr *name,
void *opaque)
static int gfs2_dirent_find_space(const struct gfs2_dirent *dent,
const struct qstr *name,
void *opaque)
struct dirent_gather ;
static int gfs2_dirent_gather(const struct gfs2_dirent *dent,
const struct qstr *name,
void *opaque)
static int gfs2_check_dirent(struct gfs2_dirent *dent, unsigned int offset,
unsigned int size, unsigned int len, int first)
static int gfs2_dirent_offset(const void *buf)
static struct gfs2_dirent *gfs2_dirent_scan(struct inode *inode, void *buf,
unsigned int len, gfs2_dscan_t scan,
const struct qstr *name,
void *opaque)
static int dirent_check_reclen(struct gfs2_inode *dip,
const struct gfs2_dirent *d, const void *end_p)
static int dirent_next(struct gfs2_inode *dip, struct buffer_head *bh,
struct gfs2_dirent **dent)
static void dirent_del(struct gfs2_inode *dip, struct buffer_head *bh,
struct gfs2_dirent *prev, struct gfs2_dirent *cur)
static struct gfs2_dirent *gfs2_init_dirent(struct inode *inode,
struct gfs2_dirent *dent,
const struct qstr *name,
struct buffer_head *bh)
static struct gfs2_dirent *gfs2_dirent_alloc(struct inode *inode,
struct buffer_head *bh,
const struct qstr *name)
static int get_leaf(struct gfs2_inode *dip, u64 leaf_no,
struct buffer_head **bhp)
static int get_leaf_nr(struct gfs2_inode *dip, u32 index,
u64 *leaf_out)
static int get_first_leaf(struct gfs2_inode *dip, u32 index,
struct buffer_head **bh_out)
static struct gfs2_dirent *gfs2_dirent_search(struct inode *inode,
const struct qstr *name,
gfs2_dscan_t scan,
struct buffer_head **pbh)
static struct gfs2_leaf *new_leaf(struct inode *inode, struct buffer_head **pbh, u16 depth)
static int dir_make_exhash(struct inode *inode)
static int dir_split_leaf(struct inode *inode, const struct qstr *name)
static int dir_double_exhash(struct gfs2_inode *dip)
static int compare_dents(const void *a, const void *b)
static int do_filldir_main(struct gfs2_inode *dip, u64 *offset,
void *opaque, filldir_t filldir,
const struct gfs2_dirent **darr, u32 entries,
int *copied)
static void *gfs2_alloc_sort_buffer(unsigned size)
static void gfs2_free_sort_buffer(void *ptr)
static int gfs2_dir_read_leaf(struct inode *inode, u64 *offset, void *opaque,
filldir_t filldir, int *copied, unsigned *depth,
u64 leaf_no)
static int dir_e_read(struct inode *inode, u64 *offset, void *opaque,
filldir_t filldir)
int gfs2_dir_read(struct inode *inode, u64 *offset, void *opaque,
filldir_t filldir)
struct inode *gfs2_dir_search(struct inode *dir, const struct qstr *name)
int gfs2_dir_check(struct inode *dir, const struct qstr *name,
const struct gfs2_inode *ip)
static int dir_new_leaf(struct inode *inode, const struct qstr *name)
int gfs2_dir_add(struct inode *inode, const struct qstr *name,
const struct gfs2_inode *nip)
int gfs2_dir_del(struct gfs2_inode *dip, const struct dentry *dentry)
int gfs2_dir_mvino(struct gfs2_inode *dip, const struct qstr *filename,
const struct gfs2_inode *nip, unsigned int new_type)
static int leaf_dealloc(struct gfs2_inode *dip, u32 index, u32 len,
u64 leaf_no, struct buffer_head *leaf_bh,
int last_dealloc)
int gfs2_dir_exhash_dealloc(struct gfs2_inode *dip)
int gfs2_diradd_alloc_required(struct inode *inode, const struct qstr *name)
