#define MAX_SCCB_ROOM (PAGE_SIZE - sizeof(struct sclp_buffer))
static void sclp_rw_pm_event(struct sclp_register *reg,
enum sclp_pm_event sclp_pm_event)
static struct sclp_register sclp_rw_event = ;
struct sclp_buffer *
sclp_make_buffer(void *page, unsigned short columns, unsigned short htab)
void *
sclp_unmake_buffer(struct sclp_buffer *buffer)
static int
sclp_initialize_mto(struct sclp_buffer *buffer, int max_len)
static void
sclp_finalize_mto(struct sclp_buffer *buffer)
int
sclp_write(struct sclp_buffer *buffer, const unsigned char *msg, int count)
int
sclp_buffer_space(struct sclp_buffer *buffer)
int
sclp_chars_in_buffer(struct sclp_buffer *buffer)
void
sclp_set_columns(struct sclp_buffer *buffer, unsigned short columns)
void
sclp_set_htab(struct sclp_buffer *buffer, unsigned short htab)
int
sclp_rw_init(void)
#define SCLP_BUFFER_MAX_RETRY		1
static void
sclp_writedata_callback(struct sclp_req *request, void *data)
int
sclp_emit_buffer(struct sclp_buffer *buffer,
void (*callback)(struct sclp_buffer *, int))
