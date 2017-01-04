#define _FS_CEPH_LIBCEPH_H
#define CEPH_FEATURE_SUPPORTED_DEFAULT CEPH_FEATURE_NOSRCADDR
#define CEPH_FEATURE_REQUIRED_DEFAULT  CEPH_FEATURE_NOSRCADDR
#define CEPH_OPT_FSID             (1<<0)
#define CEPH_OPT_NOSHARE          (1<<1)
#define CEPH_OPT_MYIP             (1<<2)
#define CEPH_OPT_NOCRC            (1<<3)
#define CEPH_OPT_DEFAULT   (0);
#define ceph_set_opt(client, opt) \
(client)->options->flags |= CEPH_OPT_##opt;
#define ceph_test_opt(client, opt) \
(!!((client)->options->flags & CEPH_OPT_##opt))
struct ceph_options ;
#define CEPH_MOUNT_TIMEOUT_DEFAULT  60
#define CEPH_OSD_TIMEOUT_DEFAULT    60
#define CEPH_OSD_KEEPALIVE_DEFAULT  5
#define CEPH_OSD_IDLE_TTL_DEFAULT    60
#define CEPH_MSG_MAX_FRONT_LEN	(16*1024*1024)
#define CEPH_MSG_MAX_DATA_LEN	(16*1024*1024)
#define CEPH_AUTH_NAME_DEFAULT   "guest"
#define CEPH_CAPS_WANTED_DELAY_MIN_DEFAULT      5
#define CEPH_CAPS_WANTED_DELAY_MAX_DEFAULT     60
#define CEPH_CAP_RELEASE_SAFETY_DEFAULT        (CEPH_CAPS_PER_RELEASE * 4)
enum ;
static inline unsigned long time_sub(unsigned long a, unsigned long b)
struct ceph_mds_client;
struct ceph_client ;
struct ceph_snap_context ;
static inline struct ceph_snap_context *
ceph_get_snap_context(struct ceph_snap_context *sc)
static inline void ceph_put_snap_context(struct ceph_snap_context *sc)
static inline int calc_pages_for(u64 off, u64 len)
extern const char *ceph_msg_type_name(int type);
extern int ceph_check_fsid(struct ceph_client *client, struct ceph_fsid *fsid);
extern struct kmem_cache *ceph_inode_cachep;
extern struct kmem_cache *ceph_cap_cachep;
extern struct kmem_cache *ceph_dentry_cachep;
extern struct kmem_cache *ceph_file_cachep;
extern int ceph_parse_options(struct ceph_options **popt, char *options,
const char *dev_name, const char *dev_name_end,
int (*parse_extra_token)(char *c, void *private),
void *private);
extern void ceph_destroy_options(struct ceph_options *opt);
extern int ceph_compare_options(struct ceph_options *new_opt,
struct ceph_client *client);
extern struct ceph_client *ceph_create_client(struct ceph_options *opt,
void *private);
extern u64 ceph_client_id(struct ceph_client *client);
extern void ceph_destroy_client(struct ceph_client *client);
extern int __ceph_open_session(struct ceph_client *client,
unsigned long started);
extern int ceph_open_session(struct ceph_client *client);
extern void ceph_release_page_vector(struct page **pages, int num_pages);
extern struct page **ceph_get_direct_page_vector(const char __user *data,
int num_pages,
bool write_page);
extern void ceph_put_page_vector(struct page **pages, int num_pages,
bool dirty);
extern void ceph_release_page_vector(struct page **pages, int num_pages);
extern struct page **ceph_alloc_page_vector(int num_pages, gfp_t flags);
extern int ceph_copy_user_to_page_vector(struct page **pages,
const char __user *data,
loff_t off, size_t len);
extern int ceph_copy_to_page_vector(struct page **pages,
const char *data,
loff_t off, size_t len);
extern int ceph_copy_from_page_vector(struct page **pages,
char *data,
loff_t off, size_t len);
extern int ceph_copy_page_vector_to_user(struct page **pages, char __user *data,
loff_t off, size_t len);
extern void ceph_zero_page_vector_range(int off, int len, struct page **pages);
