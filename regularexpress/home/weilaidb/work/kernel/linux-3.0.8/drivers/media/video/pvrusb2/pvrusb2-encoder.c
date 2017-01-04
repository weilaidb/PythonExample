#define IVTV_MBOX_FIRMWARE_DONE 0x00000004
#define IVTV_MBOX_DRIVER_DONE 0x00000002
#define IVTV_MBOX_DRIVER_BUSY 0x00000001
#define MBOX_BASE 0x44
static int pvr2_encoder_write_words(struct pvr2_hdw *hdw,
unsigned int offs,
const u32 *data, unsigned int dlen)
static int pvr2_encoder_read_words(struct pvr2_hdw *hdw,
unsigned int offs,
u32 *data, unsigned int dlen)
static int pvr2_encoder_cmd(void *ctxt,
u32 cmd,
int arg_cnt_send,
int arg_cnt_recv,
u32 *argp)
static int pvr2_encoder_vcmd(struct pvr2_hdw *hdw, int cmd,
int args, ...)
static int pvr2_encoder_prep_config(struct pvr2_hdw *hdw)
int pvr2_encoder_adjust(struct pvr2_hdw *hdw)
int pvr2_encoder_configure(struct pvr2_hdw *hdw)
int pvr2_encoder_start(struct pvr2_hdw *hdw)
int pvr2_encoder_stop(struct pvr2_hdw *hdw)
