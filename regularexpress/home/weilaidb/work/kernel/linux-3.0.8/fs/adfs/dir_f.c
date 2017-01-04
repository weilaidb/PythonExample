static void adfs_f_free(struct adfs_dir *dir);
static inline unsigned int adfs_readval(unsigned char *p, int len)
static inline void adfs_writeval(unsigned char *p, int len, unsigned int val)
static inline int adfs_readname(char *buf, char *ptr, int maxlen)
#define ror13(v) ((v >> 13) | (v << 19))
#define dir_u8(idx)				\
()
#define dir_u32(idx)				\
()
#define bufoff(_bh,_idx)			\
()
static u8
adfs_dir_checkbyte(const struct adfs_dir *dir)
static int
adfs_dir_read(struct super_block *sb, unsigned long object_id,
unsigned int size, struct adfs_dir *dir)
static inline void
adfs_dir2obj(struct adfs_dir *dir, struct object_info *obj,
struct adfs_direntry *de)
static inline void
adfs_obj2dir(struct adfs_direntry *de, struct object_info *obj)
static int
__adfs_dir_get(struct adfs_dir *dir, int pos, struct object_info *obj)
static int
__adfs_dir_put(struct adfs_dir *dir, int pos, struct object_info *obj)
static int
adfs_dir_find_entry(struct adfs_dir *dir, unsigned long object_id)
static int
adfs_f_read(struct super_block *sb, unsigned int id, unsigned int sz, struct adfs_dir *dir)
static int
adfs_f_setpos(struct adfs_dir *dir, unsigned int fpos)
static int
adfs_f_getnext(struct adfs_dir *dir, struct object_info *obj)
static int
adfs_f_update(struct adfs_dir *dir, struct object_info *obj)
static int
adfs_f_sync(struct adfs_dir *dir)
static void
adfs_f_free(struct adfs_dir *dir)
struct adfs_dir_ops adfs_f_dir_ops = ;
