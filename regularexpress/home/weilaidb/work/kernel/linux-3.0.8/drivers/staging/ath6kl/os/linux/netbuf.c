#define AR6000_DATA_OFFSET    64
void a_netbuf_enqueue(A_NETBUF_QUEUE_T *q, void *pkt)
void a_netbuf_prequeue(A_NETBUF_QUEUE_T *q, void *pkt)
void *a_netbuf_dequeue(A_NETBUF_QUEUE_T *q)
int a_netbuf_queue_size(A_NETBUF_QUEUE_T *q)
int a_netbuf_queue_empty(A_NETBUF_QUEUE_T *q)
void a_netbuf_queue_init(A_NETBUF_QUEUE_T *q)
void *
a_netbuf_alloc(int size)
void *
a_netbuf_alloc_raw(int size)
void
a_netbuf_free(void *bufPtr)
u32 a_netbuf_to_len(void *bufPtr)
void *
a_netbuf_to_data(void *bufPtr)
int
a_netbuf_push(void *bufPtr, s32 len)
int
a_netbuf_push_data(void *bufPtr, char *srcPtr, s32 len)
int
a_netbuf_put(void *bufPtr, s32 len)
int
a_netbuf_put_data(void *bufPtr, char *srcPtr, s32 len)
int
a_netbuf_setlen(void *bufPtr, s32 len)
int
a_netbuf_trim(void *bufPtr, s32 len)
int
a_netbuf_trim_data(void *bufPtr, char *dstPtr, s32 len)
s32 a_netbuf_headroom(void *bufPtr)
int
a_netbuf_pull(void *bufPtr, s32 len)
int
a_netbuf_pull_data(void *bufPtr, char *dstPtr, s32 len)
EXPORT_SYMBOL(a_netbuf_to_data);
EXPORT_SYMBOL(a_netbuf_put);
EXPORT_SYMBOL(a_netbuf_pull);
EXPORT_SYMBOL(a_netbuf_alloc);
EXPORT_SYMBOL(a_netbuf_free);
