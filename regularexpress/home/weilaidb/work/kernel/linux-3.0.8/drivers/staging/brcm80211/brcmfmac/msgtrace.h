#define	_MSGTRACE_H
#define MSGTRACE_VERSION 1
typedef struct msgtrace_hdr  __attribute__((packed)) msgtrace_hdr_t;
#define MSGTRACE_HDRLEN		sizeof(msgtrace_hdr_t)
extern bool msgtrace_hbus_trace;
typedef void (*msgtrace_func_send_t) (void *hdl1, void *hdl2, u8 *hdr,
u16 hdrlen, u8 *buf,
u16 buflen);
extern void msgtrace_sent(void);
extern void msgtrace_put(char *buf, int count);
extern void msgtrace_init(void *hdl1, void *hdl2,
msgtrace_func_send_t func_send);
