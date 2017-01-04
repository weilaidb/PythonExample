#define __XEN_BLKIF__BACKEND__COMMON_H__
#define DRV_PFX "xen-blkback:"
#define DPRINTK(fmt, args...)				\
pr_debug(DRV_PFX "(%s:%d) " fmt ".\n",	\
__func__, __LINE__, ##args)
struct blkif_common_request ;
struct blkif_common_response ;
struct blkif_x86_32_request ;
struct blkif_x86_32_response ;
struct blkif_x86_64_request ;
struct blkif_x86_64_response ;
DEFINE_RING_TYPES(blkif_common, struct blkif_common_request,
struct blkif_common_response);
DEFINE_RING_TYPES(blkif_x86_32, struct blkif_x86_32_request,
struct blkif_x86_32_response);
DEFINE_RING_TYPES(blkif_x86_64, struct blkif_x86_64_request,
struct blkif_x86_64_response);
union blkif_back_rings ;
enum blkif_protocol ;
struct xen_vbd ;
struct backend_info;
struct xen_blkif ;
#define vbd_sz(_v)	((_v)->bdev->bd_part ? \
(_v)->bdev->bd_part->nr_sects : \
get_capacity((_v)->bdev->bd_disk))
#define xen_blkif_get(_b) (atomic_inc(&(_b)->refcnt))
#define xen_blkif_put(_b)				\
do  while (0)
struct phys_req ;
int xen_blkif_interface_init(void);
int xen_blkif_xenbus_init(void);
irqreturn_t xen_blkif_be_int(int irq, void *dev_id);
int xen_blkif_schedule(void *arg);
int xen_blkbk_flush_diskcache(struct xenbus_transaction xbt,
struct backend_info *be, int state);
struct xenbus_device *xen_blkbk_xenbus(struct backend_info *be);
static inline void blkif_get_x86_32_req(struct blkif_request *dst,
struct blkif_x86_32_request *src)
static inline void blkif_get_x86_64_req(struct blkif_request *dst,
struct blkif_x86_64_request *src)
