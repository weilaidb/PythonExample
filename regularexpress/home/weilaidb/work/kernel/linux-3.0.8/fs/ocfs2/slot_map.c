struct ocfs2_slot ;
struct ocfs2_slot_info ;
static int __ocfs2_node_num_to_slot(struct ocfs2_slot_info *si,
unsigned int node_num);
static void ocfs2_invalidate_slot(struct ocfs2_slot_info *si,
int slot_num)
static void ocfs2_set_slot(struct ocfs2_slot_info *si,
int slot_num, unsigned int node_num)
static void ocfs2_update_slot_info_extended(struct ocfs2_slot_info *si)
static void ocfs2_update_slot_info_old(struct ocfs2_slot_info *si)
static void ocfs2_update_slot_info(struct ocfs2_slot_info *si)
int ocfs2_refresh_slot_info(struct ocfs2_super *osb)
static void ocfs2_update_disk_slot_extended(struct ocfs2_slot_info *si,
int slot_num,
struct buffer_head **bh)
static void ocfs2_update_disk_slot_old(struct ocfs2_slot_info *si,
int slot_num,
struct buffer_head **bh)
static int ocfs2_update_disk_slot(struct ocfs2_super *osb,
struct ocfs2_slot_info *si,
int slot_num)
static int ocfs2_slot_map_physical_size(struct ocfs2_super *osb,
struct inode *inode,
unsigned long long *bytes)
static int __ocfs2_node_num_to_slot(struct ocfs2_slot_info *si,
unsigned int node_num)
static int __ocfs2_find_empty_slot(struct ocfs2_slot_info *si,
int preferred)
int ocfs2_node_num_to_slot(struct ocfs2_super *osb, unsigned int node_num)
int ocfs2_slot_to_node_num_locked(struct ocfs2_super *osb, int slot_num,
unsigned int *node_num)
static void __ocfs2_free_slot_info(struct ocfs2_slot_info *si)
int ocfs2_clear_slot(struct ocfs2_super *osb, int slot_num)
static int ocfs2_map_slot_buffers(struct ocfs2_super *osb,
struct ocfs2_slot_info *si)
int ocfs2_init_slot_info(struct ocfs2_super *osb)
void ocfs2_free_slot_info(struct ocfs2_super *osb)
int ocfs2_find_slot(struct ocfs2_super *osb)
void ocfs2_put_slot(struct ocfs2_super *osb)
