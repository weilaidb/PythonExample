#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("VMware, Inc.");
MODULE_DESCRIPTION("VMware Memory Control (Balloon) Driver");
MODULE_VERSION("1.2.1.2-k");
MODULE_ALIAS("dmi:*:svnVMware*:*");
MODULE_ALIAS("vmware_vmmemctl");
MODULE_LICENSE("GPL");
#define VMW_BALLOON_NOSLEEP_ALLOC_MAX	16384U
#define VMW_BALLOON_RATE_ALLOC_MIN	512U
#define VMW_BALLOON_RATE_ALLOC_MAX	2048U
#define VMW_BALLOON_RATE_ALLOC_INC	16U
#define VMW_BALLOON_RATE_FREE_MIN	512U
#define VMW_BALLOON_RATE_FREE_MAX	16384U
#define VMW_BALLOON_RATE_FREE_INC	16U
#define VMW_BALLOON_SLOW_CYCLES		4
#define VMW_PAGE_ALLOC_NOSLEEP		(__GFP_HIGHMEM|__GFP_NOWARN)
#define VMW_PAGE_ALLOC_CANSLEEP		(GFP_HIGHUSER)
#define VMW_BALLOON_YIELD_THRESHOLD	1024
#define VMW_BALLOON_MAX_REFUSED		16
#define VMW_BALLOON_HV_PORT		0x5670
#define VMW_BALLOON_HV_MAGIC		0x456c6d6f
#define VMW_BALLOON_PROTOCOL_VERSION	2
#define VMW_BALLOON_GUEST_ID		1
#define VMW_BALLOON_CMD_START		0
#define VMW_BALLOON_CMD_GET_TARGET	1
#define VMW_BALLOON_CMD_LOCK		2
#define VMW_BALLOON_CMD_UNLOCK		3
#define VMW_BALLOON_CMD_GUEST_ID	4
#define VMW_BALLOON_SUCCESS		0
#define VMW_BALLOON_FAILURE		-1
#define VMW_BALLOON_ERROR_CMD_INVALID	1
#define VMW_BALLOON_ERROR_PPN_INVALID	2
#define VMW_BALLOON_ERROR_PPN_LOCKED	3
#define VMW_BALLOON_ERROR_PPN_UNLOCKED	4
#define VMW_BALLOON_ERROR_PPN_PINNED	5
#define VMW_BALLOON_ERROR_PPN_NOTNEEDED	6
#define VMW_BALLOON_ERROR_RESET		7
#define VMW_BALLOON_ERROR_BUSY		8
#define VMWARE_BALLOON_CMD(cmd, data, result)		\
()
struct vmballoon_stats ;
#define STATS_INC(stat) (stat)++
#define STATS_INC(stat)
struct vmballoon ;
static struct vmballoon balloon;
static struct workqueue_struct *vmballoon_wq;
static bool vmballoon_send_start(struct vmballoon *b)
static bool vmballoon_check_status(struct vmballoon *b, unsigned long status)
static bool vmballoon_send_guest_id(struct vmballoon *b)
static bool vmballoon_send_get_target(struct vmballoon *b, u32 *new_target)
static bool vmballoon_send_lock_page(struct vmballoon *b, unsigned long pfn,
unsigned int *hv_status)
static bool vmballoon_send_unlock_page(struct vmballoon *b, unsigned long pfn)
static void vmballoon_pop(struct vmballoon *b)
static void vmballoon_reset(struct vmballoon *b)
static int vmballoon_reserve_page(struct vmballoon *b, bool can_sleep)
static int vmballoon_release_page(struct vmballoon *b, struct page *page)
static void vmballoon_release_refused_pages(struct vmballoon *b)
static void vmballoon_inflate(struct vmballoon *b)
static void vmballoon_deflate(struct vmballoon *b)
static void vmballoon_work(struct work_struct *work)
static int vmballoon_debug_show(struct seq_file *f, void *offset)
static int vmballoon_debug_open(struct inode *inode, struct file *file)
static const struct file_operations vmballoon_debug_fops = ;
static int __init vmballoon_debugfs_init(struct vmballoon *b)
static void __exit vmballoon_debugfs_exit(struct vmballoon *b)
static inline int vmballoon_debugfs_init(struct vmballoon *b)
static inline void vmballoon_debugfs_exit(struct vmballoon *b)
static int __init vmballoon_init(void)
module_init(vmballoon_init);
static void __exit vmballoon_exit(void)
module_exit(vmballoon_exit);
