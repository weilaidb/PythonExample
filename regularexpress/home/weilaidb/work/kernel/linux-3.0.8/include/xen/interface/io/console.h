#define __XEN_PUBLIC_IO_CONSOLE_H__
typedef uint32_t XENCONS_RING_IDX;
#define MASK_XENCONS_IDX(idx, ring) ((idx) & (sizeof(ring)-1))
struct xencons_interface ;
