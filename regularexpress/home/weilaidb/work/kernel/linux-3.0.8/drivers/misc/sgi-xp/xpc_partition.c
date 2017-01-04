int xpc_exiting;
struct xpc_rsvd_page *xpc_rsvd_page;
static unsigned long *xpc_part_nasids;
unsigned long *xpc_mach_nasids;
static int xpc_nasid_mask_nbytes;
int xpc_nasid_mask_nlongs;
struct xpc_partition *xpc_partitions;
void *
xpc_kmalloc_cacheline_aligned(size_t size, gfp_t flags, void **base)
static unsigned long
xpc_get_rsvd_page_pa(int nasid)
int
xpc_setup_rsvd_page(void)
void
xpc_teardown_rsvd_page(void)
enum xp_retval
xpc_get_remote_rp(int nasid, unsigned long *discovered_nasids,
struct xpc_rsvd_page *remote_rp, unsigned long *remote_rp_pa)
int
xpc_partition_disengaged(struct xpc_partition *part)
enum xp_retval
xpc_mark_partition_active(struct xpc_partition *part)
void
xpc_deactivate_partition(const int line, struct xpc_partition *part,
enum xp_retval reason)
void
xpc_mark_partition_inactive(struct xpc_partition *part)
void
xpc_discovery(void)
enum xp_retval
xpc_initiate_partid_to_nasids(short partid, void *nasid_mask)
