#define IVTV_MBOX_FIRMWARE_DONE 0x00000004
#define IVTV_MBOX_DRIVER_DONE   0x00000002
#define IVTV_MBOX_DRIVER_BUSY   0x00000001
#define IVTV_MBOX_FREE 		0x00000000
#define IVTV_API_STD_TIMEOUT 	0x02000000
#define API_CACHE 	 (1 << 0)
#define API_RESULT	 (1 << 1)
#define API_FAST_RESULT	 (3 << 1)
#define API_DMA 	 (1 << 3)
#define API_HIGH_VOL 	 (1 << 5)
#define API_NO_WAIT_MB 	 (1 << 4)
#define API_NO_WAIT_RES	 (1 << 5)
#define API_NO_POLL	 (1 << 6)
struct ivtv_api_info ;
#define API_ENTRY(x, f) [x] =
static const struct ivtv_api_info api_info[256] = ;
static int try_mailbox(struct ivtv *itv, struct ivtv_mailbox_data *mbdata, int mb)
static int get_mailbox(struct ivtv *itv, struct ivtv_mailbox_data *mbdata, int flags)
static void write_mailbox(volatile struct ivtv_mailbox __iomem *mbox, int cmd, int args, u32 data[])
static void clear_all_mailboxes(struct ivtv *itv, struct ivtv_mailbox_data *mbdata)
static int ivtv_api_call(struct ivtv *itv, int cmd, int args, u32 data[])
int ivtv_api(struct ivtv *itv, int cmd, int args, u32 data[])
int ivtv_api_func(void *priv, u32 cmd, int in, int out, u32 data[CX2341X_MBOX_MAX_DATA])
int ivtv_vapi_result(struct ivtv *itv, u32 data[CX2341X_MBOX_MAX_DATA], int cmd, int args, ...)
int ivtv_vapi(struct ivtv *itv, int cmd, int args, ...)
void ivtv_api_get_data(struct ivtv_mailbox_data *mbdata, int mb,
int argc, u32 data[])
void ivtv_mailbox_cache_invalidate(struct ivtv *itv)
