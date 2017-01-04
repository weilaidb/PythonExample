enum input_source ;
typedef int (*open_istream_fn)(struct git_istream *,
struct object_info *,
const unsigned char *,
enum object_type *);
typedef int (*close_istream_fn)(struct git_istream *);
typedef ssize_t (*read_istream_fn)(struct git_istream *, char *, size_t);
struct stream_vtbl ;
#define open_method_decl(name) \
int open_istream_ ##name \
(struct git_istream *st, struct object_info *oi, \
const unsigned char *sha1, \
enum object_type *type)
#define close_method_decl(name) \
int close_istream_ ##name \
(struct git_istream *st)
#define read_method_decl(name) \
ssize_t read_istream_ ##name \
(struct git_istream *st, char *buf, size_t sz)
static open_method_decl(incore);
static open_method_decl(loose);
static open_method_decl(pack_non_delta);
static struct git_istream *attach_stream_filter(struct git_istream *st,
struct stream_filter *filter);
static open_istream_fn open_istream_tbl[] = ;
#define FILTER_BUFFER (1024*16)
struct filtered_istream ;
struct git_istream ;
int close_istream(struct git_istream *st)
ssize_t read_istream(struct git_istream *st, void *buf, size_t sz)
static enum input_source istream_source(const unsigned char *sha1,
enum object_type *type,
struct object_info *oi)
struct git_istream *open_istream(const unsigned char *sha1,
enum object_type *type,
unsigned long *size,
struct stream_filter *filter)
static void close_deflated_stream(struct git_istream *st)
static close_method_decl(filtered)
static read_method_decl(filtered)
static struct stream_vtbl filtered_vtbl = ;
static struct git_istream *attach_stream_filter(struct git_istream *st,
struct stream_filter *filter)
static read_method_decl(loose)
static close_method_decl(loose)
static struct stream_vtbl loose_vtbl = ;
static open_method_decl(loose)
static read_method_decl(pack_non_delta)
static close_method_decl(pack_non_delta)
static struct stream_vtbl pack_non_delta_vtbl = ;
static open_method_decl(pack_non_delta)
static close_method_decl(incore)
static read_method_decl(incore)
static struct stream_vtbl incore_vtbl = ;
static open_method_decl(incore)
int stream_blob_to_fd(int fd, unsigned const char *sha1, struct stream_filter *filter,
int can_seek)
