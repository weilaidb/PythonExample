struct ftl_zone ;
struct sm_ftl ;
struct chs_entry ;
#define SM_FTL_PARTN_BITS	3
#define sm_printk(format, ...) \
printk(KERN_WARNING "sm_ftl" ": " format "\n", ## __VA_ARGS__)
#define dbg(format, ...) \
if (debug) \
printk(KERN_DEBUG "sm_ftl" ": " format "\n", ## __VA_ARGS__)
#define dbg_verbose(format, ...) \
if (debug > 1) \
printk(KERN_DEBUG "sm_ftl" ": " format "\n", ## __VA_ARGS__)
static void sm_erase_callback(struct erase_info *self);
static int sm_erase_block(struct sm_ftl *ftl, int zone_num, uint16_t block,
int put_free);
static void sm_mark_block_bad(struct sm_ftl *ftl, int zone_num, int block);
static int sm_recheck_media(struct sm_ftl *ftl);
