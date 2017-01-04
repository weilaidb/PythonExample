static int
p9pdu_writef(struct p9_fcall *pdu, int proto_version, const char *fmt, ...);
void
p9pdu_dump(int way, struct p9_fcall *pdu)
void
p9pdu_dump(int way, struct p9_fcall *pdu)
EXPORT_SYMBOL(p9pdu_dump);
void p9stat_free(struct p9_wstat *stbuf)
EXPORT_SYMBOL(p9stat_free);
static size_t pdu_read(struct p9_fcall *pdu, void *data, size_t size)
static size_t pdu_write(struct p9_fcall *pdu, const void *data, size_t size)
static size_t
pdu_write_u(struct p9_fcall *pdu, const char __user *udata, size_t size)
static size_t
pdu_write_urw(struct p9_fcall *pdu, const char *kdata, const char __user *udata,
size_t size)
static size_t
pdu_write_readdir(struct p9_fcall *pdu, const char *kdata, size_t size)
static int
p9pdu_vreadf(struct p9_fcall *pdu, int proto_version, const char *fmt,
va_list ap)
int
p9pdu_vwritef(struct p9_fcall *pdu, int proto_version, const char *fmt,
va_list ap)
int p9pdu_readf(struct p9_fcall *pdu, int proto_version, const char *fmt, ...)
static int
p9pdu_writef(struct p9_fcall *pdu, int proto_version, const char *fmt, ...)
int p9stat_read(char *buf, int len, struct p9_wstat *st, int proto_version)
EXPORT_SYMBOL(p9stat_read);
int p9pdu_prepare(struct p9_fcall *pdu, int16_t tag, int8_t type)
int p9pdu_finalize(struct p9_fcall *pdu)
void p9pdu_reset(struct p9_fcall *pdu)
int p9dirent_read(char *buf, int len, struct p9_dirent *dirent,
int proto_version)
EXPORT_SYMBOL(p9dirent_read);
