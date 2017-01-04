#define BUFFER_COUNT 32
#define BUFFER_SIZE PAGE_ALIGN(0x4000)
struct pvr2_ioread ;
static int pvr2_ioread_init(struct pvr2_ioread *cp)
static void pvr2_ioread_done(struct pvr2_ioread *cp)
struct pvr2_ioread *pvr2_ioread_create(void)
void pvr2_ioread_destroy(struct pvr2_ioread *cp)
void pvr2_ioread_set_sync_key(struct pvr2_ioread *cp,
const char *sync_key_ptr,
unsigned int sync_key_len)
static void pvr2_ioread_stop(struct pvr2_ioread *cp)
static int pvr2_ioread_start(struct pvr2_ioread *cp)
struct pvr2_stream *pvr2_ioread_get_stream(struct pvr2_ioread *cp)
int pvr2_ioread_setup(struct pvr2_ioread *cp,struct pvr2_stream *sp)
int pvr2_ioread_set_enabled(struct pvr2_ioread *cp,int fl)
static int pvr2_ioread_get_buffer(struct pvr2_ioread *cp)
static void pvr2_ioread_filter(struct pvr2_ioread *cp)
int pvr2_ioread_avail(struct pvr2_ioread *cp)
int pvr2_ioread_read(struct pvr2_ioread *cp,void __user *buf,unsigned int cnt)
