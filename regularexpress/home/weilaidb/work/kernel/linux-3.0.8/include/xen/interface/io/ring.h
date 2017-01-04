#define __XEN_PUBLIC_IO_RING_H__
typedef unsigned int RING_IDX;
#define __RD2(_x)  (((_x) & 0x00000002) ? 0x2		       : ((_x) & 0x1))
#define __RD4(_x)  (((_x) & 0x0000000c) ? __RD2((_x)>>2)<<2    : __RD2(_x))
#define __RD8(_x)  (((_x) & 0x000000f0) ? __RD4((_x)>>4)<<4    : __RD4(_x))
#define __RD16(_x) (((_x) & 0x0000ff00) ? __RD8((_x)>>8)<<8    : __RD8(_x))
#define __RD32(_x) (((_x) & 0xffff0000) ? __RD16((_x)>>16)<<16 : __RD16(_x))
#define __CONST_RING_SIZE(_s, _sz)				\
(__RD32(((_sz) - offsetof(struct _s##_sring, ring)) /	\
sizeof(((struct _s##_sring *)0)->ring[0])))
#define __RING_SIZE(_s, _sz)						\
(__RD32(((_sz) - (long)&(_s)->ring + (long)(_s)) / sizeof((_s)->ring[0])))
#define DEFINE_RING_TYPES(__name, __req_t, __rsp_t)			\
\							\
union __name##_sring_entry ;									\
\							\
struct __name##_sring ;									\
\					\
struct __name##_front_ring ;									\
\					\
struct __name##_back_ring ;
#define SHARED_RING_INIT(_s) do  while(0)
#define FRONT_RING_INIT(_r, _s, __size) do  while (0)
#define BACK_RING_INIT(_r, _s, __size) do  while (0)
#define FRONT_RING_ATTACH(_r, _s, __size) do  while (0)
#define BACK_RING_ATTACH(_r, _s, __size) do  while (0)
#define RING_SIZE(_r)							\
((_r)->nr_ents)
#define RING_FREE_REQUESTS(_r)						\
(RING_SIZE(_r) - ((_r)->req_prod_pvt - (_r)->rsp_cons))
#define RING_FULL(_r)							\
(RING_FREE_REQUESTS(_r) == 0)
#define RING_HAS_UNCONSUMED_RESPONSES(_r)				\
((_r)->sring->rsp_prod - (_r)->rsp_cons)
#define RING_HAS_UNCONSUMED_REQUESTS(_r)				\
()
#define RING_GET_REQUEST(_r, _idx)					\
(&((_r)->sring->ring[((_idx) & (RING_SIZE(_r) - 1))].req))
#define RING_GET_RESPONSE(_r, _idx)					\
(&((_r)->sring->ring[((_idx) & (RING_SIZE(_r) - 1))].rsp))
#define RING_REQUEST_CONS_OVERFLOW(_r, _cons)				\
(((_cons) - (_r)->rsp_prod_pvt) >= RING_SIZE(_r))
#define RING_PUSH_REQUESTS(_r) do  while (0)
#define RING_PUSH_RESPONSES(_r) do  while (0)
#define RING_PUSH_REQUESTS_AND_CHECK_NOTIFY(_r, _notify) do  while (0)
#define RING_PUSH_RESPONSES_AND_CHECK_NOTIFY(_r, _notify) do  while (0)
#define RING_FINAL_CHECK_FOR_REQUESTS(_r, _work_to_do) do  while (0)
#define RING_FINAL_CHECK_FOR_RESPONSES(_r, _work_to_do) do  while (0)
