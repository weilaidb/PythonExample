void  change_floppy(char *fmt, ...);
void  mount_block_root(char *name, int flags);
void  mount_root(void);
extern int root_mountflags;
static inline int create_dev(char *name, dev_t dev)
#if BITS_PER_LONG == 32
static inline u32 bstat(char *name)
static inline u32 bstat(char *name)
int __init rd_load_disk(int n);
int __init rd_load_image(char *from);
static inline int rd_load_disk(int n)
static inline int rd_load_image(char *from)
int __init initrd_load(void);
static inline int initrd_load(void)
void md_run_setup(void);
static inline void md_run_setup(void)
