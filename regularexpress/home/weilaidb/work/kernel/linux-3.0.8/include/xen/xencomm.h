#define _LINUX_XENCOMM_H_
#define XENCOMM_MINI_ADDRS 3
struct xencomm_mini ;
struct xencomm_handle;
extern void xencomm_free(struct xencomm_handle *desc);
extern struct xencomm_handle *xencomm_map(void *ptr, unsigned long bytes);
extern struct xencomm_handle *__xencomm_map_no_alloc(void *ptr,
unsigned long bytes,  struct xencomm_mini *xc_area);
#define xencomm_map_no_alloc(ptr, bytes)			\
()
extern unsigned long xencomm_vtop(unsigned long vaddr);
static inline void *xencomm_pa(void *ptr)
#define xen_guest_handle(hnd)  ((hnd).p)
