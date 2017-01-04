#define __XEN_PUBLIC_IO_FBIF_H__
#define XENFB_TYPE_UPDATE 2
struct xenfb_update ;
#define XENFB_TYPE_RESIZE 3
struct xenfb_resize ;
#define XENFB_OUT_EVENT_SIZE 40
union xenfb_out_event ;
#define XENFB_IN_EVENT_SIZE 40
union xenfb_in_event ;
#define XENFB_IN_RING_SIZE 1024
#define XENFB_IN_RING_LEN (XENFB_IN_RING_SIZE / XENFB_IN_EVENT_SIZE)
#define XENFB_IN_RING_OFFS 1024
#define XENFB_IN_RING(page) \
((union xenfb_in_event *)((char *)(page) + XENFB_IN_RING_OFFS))
#define XENFB_IN_RING_REF(page, idx) \
(XENFB_IN_RING((page))[(idx) % XENFB_IN_RING_LEN])
#define XENFB_OUT_RING_SIZE 2048
#define XENFB_OUT_RING_LEN (XENFB_OUT_RING_SIZE / XENFB_OUT_EVENT_SIZE)
#define XENFB_OUT_RING_OFFS (XENFB_IN_RING_OFFS + XENFB_IN_RING_SIZE)
#define XENFB_OUT_RING(page) \
((union xenfb_out_event *)((char *)(page) + XENFB_OUT_RING_OFFS))
#define XENFB_OUT_RING_REF(page, idx) \
(XENFB_OUT_RING((page))[(idx) % XENFB_OUT_RING_LEN])
struct xenfb_page ;
#define XENFB_WIDTH 800
#define XENFB_HEIGHT 600
#define XENFB_DEPTH 32
