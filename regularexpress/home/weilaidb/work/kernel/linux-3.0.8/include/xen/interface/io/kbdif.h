#define __XEN_PUBLIC_IO_KBDIF_H__
#define XENKBD_TYPE_MOTION  1
#define XENKBD_TYPE_KEY     3
#define XENKBD_TYPE_POS     4
struct xenkbd_motion ;
struct xenkbd_key ;
struct xenkbd_position ;
#define XENKBD_IN_EVENT_SIZE 40
union xenkbd_in_event ;
#define XENKBD_OUT_EVENT_SIZE 40
union xenkbd_out_event ;
#define XENKBD_IN_RING_SIZE 2048
#define XENKBD_IN_RING_LEN (XENKBD_IN_RING_SIZE / XENKBD_IN_EVENT_SIZE)
#define XENKBD_IN_RING_OFFS 1024
#define XENKBD_IN_RING(page) \
((union xenkbd_in_event *)((char *)(page) + XENKBD_IN_RING_OFFS))
#define XENKBD_IN_RING_REF(page, idx) \
(XENKBD_IN_RING((page))[(idx) % XENKBD_IN_RING_LEN])
#define XENKBD_OUT_RING_SIZE 1024
#define XENKBD_OUT_RING_LEN (XENKBD_OUT_RING_SIZE / XENKBD_OUT_EVENT_SIZE)
#define XENKBD_OUT_RING_OFFS (XENKBD_IN_RING_OFFS + XENKBD_IN_RING_SIZE)
#define XENKBD_OUT_RING(page) \
((union xenkbd_out_event *)((char *)(page) + XENKBD_OUT_RING_OFFS))
#define XENKBD_OUT_RING_REF(page, idx) \
(XENKBD_OUT_RING((page))[(idx) % XENKBD_OUT_RING_LEN])
struct xenkbd_page ;
