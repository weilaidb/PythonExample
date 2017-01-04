const char *ceph_file_part(const char *s, int len)
EXPORT_SYMBOL(ceph_file_part);
const char *ceph_msg_type_name(int type)
EXPORT_SYMBOL(ceph_msg_type_name);
int ceph_check_fsid(struct ceph_client *client, struct ceph_fsid *fsid)
EXPORT_SYMBOL(ceph_check_fsid);
static int strcmp_null(const char *s1, const char *s2)
int ceph_compare_options(struct ceph_options *new_opt,
struct ceph_client *client)
EXPORT_SYMBOL(ceph_compare_options);
static int parse_fsid(const char *str, struct ceph_fsid *fsid)
enum ;
static match_table_t opt_tokens = ;
void ceph_destroy_options(struct ceph_options *opt)
EXPORT_SYMBOL(ceph_destroy_options);
static int get_secret(struct ceph_crypto_key *dst, const char *name)
int ceph_parse_options(struct ceph_options **popt, char *options,
const char *dev_name, const char *dev_name_end,
int (*parse_extra_token)(char *c, void *private),
void *private)
EXPORT_SYMBOL(ceph_parse_options);
u64 ceph_client_id(struct ceph_client *client)
EXPORT_SYMBOL(ceph_client_id);
struct ceph_client *ceph_create_client(struct ceph_options *opt, void *private)
EXPORT_SYMBOL(ceph_create_client);
void ceph_destroy_client(struct ceph_client *client)
EXPORT_SYMBOL(ceph_destroy_client);
static int have_mon_and_osd_map(struct ceph_client *client)
int __ceph_open_session(struct ceph_client *client, unsigned long started)
EXPORT_SYMBOL(__ceph_open_session);
int ceph_open_session(struct ceph_client *client)
EXPORT_SYMBOL(ceph_open_session);
static int __init init_ceph_lib(void)
static void __exit exit_ceph_lib(void)
module_init(init_ceph_lib);
module_exit(exit_ceph_lib);
MODULE_AUTHOR("Sage Weil <sage@newdream.net>");
MODULE_AUTHOR("Yehuda Sadeh <yehuda@hq.newdream.net>");
MODULE_AUTHOR("Patience Warnick <patience@newdream.net>");
MODULE_DESCRIPTION("Ceph filesystem for Linux");
MODULE_LICENSE("GPL");
