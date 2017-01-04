#define KMSG_COMPONENT "hypfs"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define LPAR_NAME_LEN 8
#define CPU_NAME_LEN 16
#define TMP_SIZE 64
#define DBFS_D204_HDR_VERSION	0
enum diag204_sc ;
enum diag204_format ;
#define LPAR_PHYS_FLG  0x80
static char *diag224_cpu_names;
static enum diag204_sc diag204_store_sc;
static enum diag204_format diag204_info_type;
static void *diag204_buf;
static void *diag204_buf_vmalloc;
static int diag204_buf_pages;
static struct dentry *dbfs_d204_file;
struct info_blk_hdr  __attribute__ ((packed));
struct x_info_blk_hdr  __attribute__ ((packed));
static inline int info_blk_hdr__size(enum diag204_format type)
static inline __u8 info_blk_hdr__npar(enum diag204_format type, void *hdr)
static inline __u8 info_blk_hdr__flags(enum diag204_format type, void *hdr)
static inline __u16 info_blk_hdr__pcpus(enum diag204_format type, void *hdr)
struct part_hdr  __attribute__ ((packed));
struct x_part_hdr  __attribute__ ((packed));
static inline int part_hdr__size(enum diag204_format type)
static inline __u8 part_hdr__rcpus(enum diag204_format type, void *hdr)
static inline void part_hdr__part_name(enum diag204_format type, void *hdr,
char *name)
struct cpu_info  __attribute__ ((packed));
struct x_cpu_info  __attribute__ ((packed));
static inline int cpu_info__size(enum diag204_format type)
static inline __u8 cpu_info__ctidx(enum diag204_format type, void *hdr)
static inline __u16 cpu_info__cpu_addr(enum diag204_format type, void *hdr)
static inline __u64 cpu_info__acc_time(enum diag204_format type, void *hdr)
static inline __u64 cpu_info__lp_time(enum diag204_format type, void *hdr)
static inline __u64 cpu_info__online_time(enum diag204_format type, void *hdr)
struct phys_hdr  __attribute__ ((packed));
struct x_phys_hdr  __attribute__ ((packed));
static inline int phys_hdr__size(enum diag204_format type)
static inline __u8 phys_hdr__cpus(enum diag204_format type, void *hdr)
struct phys_cpu  __attribute__ ((packed));
struct x_phys_cpu  __attribute__ ((packed));
static inline int phys_cpu__size(enum diag204_format type)
static inline __u16 phys_cpu__cpu_addr(enum diag204_format type, void *hdr)
static inline __u64 phys_cpu__mgm_time(enum diag204_format type, void *hdr)
static inline __u64 phys_cpu__ctidx(enum diag204_format type, void *hdr)
static int diag204(unsigned long subcode, unsigned long size, void *addr)
static void diag204_free_buffer(void)
static void *page_align_ptr(void *ptr)
static void *diag204_alloc_vbuf(int pages)
static void *diag204_alloc_rbuf(void)
static void *diag204_get_buffer(enum diag204_format fmt, int *pages)
static int diag204_probe(void)
static int diag204_do_store(void *buf, int pages)
static void *diag204_store(void)
static int diag224(void *ptr)
static int diag224_get_name_table(void)
static void diag224_delete_name_table(void)
static int diag224_idx2name(int index, char *name)
struct dbfs_d204_hdr  __attribute__ ((packed));
struct dbfs_d204  __attribute__ ((packed));
static int dbfs_d204_create(void **data, void **data_free_ptr, size_t *size)
static struct hypfs_dbfs_file dbfs_file_d204 = ;
__init int hypfs_diag_init(void)
void hypfs_diag_exit(void)
static int hypfs_create_cpu_files(struct super_block *sb,
struct dentry *cpus_dir, void *cpu_info)
static void *hypfs_create_lpar_files(struct super_block *sb,
struct dentry *systems_dir, void *part_hdr)
static int hypfs_create_phys_cpu_files(struct super_block *sb,
struct dentry *cpus_dir, void *cpu_info)
static void *hypfs_create_phys_files(struct super_block *sb,
struct dentry *parent_dir, void *phys_hdr)
int hypfs_diag_create_files(struct super_block *sb, struct dentry *root)
