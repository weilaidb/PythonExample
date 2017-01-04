typedef struct SubfileContext  SubfileContext;
#define OFFSET(field) offsetof(SubfileContext, field)
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption subfile_options[] = ;
#undef OFFSET
#undef D
static const AVClass subfile_class = ;
static int slave_seek(URLContext *h)
static int subfile_open(URLContext *h, const char *filename, int flags,
AVDictionary **options)
static int subfile_close(URLContext *h)
static int subfile_read(URLContext *h, unsigned char *buf, int size)
static int64_t subfile_seek(URLContext *h, int64_t pos, int whence)
URLProtocol ff_subfile_protocol = ;
