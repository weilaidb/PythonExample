#define RECORDSIZE	(512)
#define BLOCKSIZE	(RECORDSIZE * 20)
static char block[BLOCKSIZE];
static unsigned long offset;
static int tar_umask = 002;
static int write_tar_filter_archive(const struct archiver *ar,
struct archiver_args *args);
static void write_if_needed(void)
static void do_write_blocked(const void *data, unsigned long size)
static void finish_record(void)
static void write_blocked(const void *data, unsigned long size)
static void write_trailer(void)
static int stream_blocked(const unsigned char *sha1)
static void strbuf_append_ext_header(struct strbuf *sb, const char *keyword,
const char *value, unsigned int valuelen)
static unsigned int ustar_header_chksum(const struct ustar_header *header)
static size_t get_path_prefix(const char *path, size_t pathlen, size_t maxlen)
static void prepare_header(struct archiver_args *args,
struct ustar_header *header,
unsigned int mode, unsigned long size)
static int write_extended_header(struct archiver_args *args,
const unsigned char *sha1,
const void *buffer, unsigned long size)
static int write_tar_entry(struct archiver_args *args,
const unsigned char *sha1,
const char *path, size_t pathlen,
unsigned int mode)
static int write_global_extended_header(struct archiver_args *args)
static struct archiver **tar_filters;
static int nr_tar_filters;
static int alloc_tar_filters;
static struct archiver *find_tar_filter(const char *name, int len)
static int tar_filter_config(const char *var, const char *value, void *data)
static int git_tar_config(const char *var, const char *value, void *cb)
static int write_tar_archive(const struct archiver *ar,
struct archiver_args *args)
static int write_tar_filter_archive(const struct archiver *ar,
struct archiver_args *args)
static struct archiver tar_archiver = ;
void init_tar_archiver(void)
