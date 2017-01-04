#define o2info_from_user(a, b)	\
copy_from_user(&(a), (b), sizeof(a))
#define o2info_to_user(a, b)	\
copy_to_user((typeof(a) __user *)b, &(a), sizeof(a))
static inline void o2info_set_request_error(struct ocfs2_info_request *kreq,
struct ocfs2_info_request __user *req)
static inline void o2info_set_request_filled(struct ocfs2_info_request *req)
static inline void o2info_clear_request_filled(struct ocfs2_info_request *req)
static inline int o2info_coherent(struct ocfs2_info_request *req)
static int ocfs2_get_inode_attr(struct inode *inode, unsigned *flags)
static int ocfs2_set_inode_attr(struct inode *inode, unsigned flags,
unsigned mask)
int ocfs2_info_handle_blocksize(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_clustersize(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_maxslots(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_label(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_uuid(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_fs_features(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_journal_size(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_scan_inode_alloc(struct ocfs2_super *osb,
struct inode *inode_alloc, u64 blkno,
struct ocfs2_info_freeinode *fi, u32 slot)
int ocfs2_info_handle_freeinode(struct inode *inode,
struct ocfs2_info_request __user *req)
static void o2ffg_update_histogram(struct ocfs2_info_free_chunk_list *hist,
unsigned int chunksize)
static void o2ffg_update_stats(struct ocfs2_info_freefrag_stats *stats,
unsigned int chunksize)
void ocfs2_info_update_ffg(struct ocfs2_info_freefrag *ffg,
unsigned int chunksize)
int ocfs2_info_freefrag_scan_chain(struct ocfs2_super *osb,
struct inode *gb_inode,
struct ocfs2_dinode *gb_dinode,
struct ocfs2_chain_rec *rec,
struct ocfs2_info_freefrag *ffg,
u32 chunks_in_group)
int ocfs2_info_freefrag_scan_bitmap(struct ocfs2_super *osb,
struct inode *gb_inode, u64 blkno,
struct ocfs2_info_freefrag *ffg)
int ocfs2_info_handle_freefrag(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_unknown(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_info_handle_request(struct inode *inode,
struct ocfs2_info_request __user *req)
int ocfs2_get_request_ptr(struct ocfs2_info *info, int idx,
u64 *req_addr, int compat_flag)
int ocfs2_info_handle(struct inode *inode, struct ocfs2_info *info,
int compat_flag)
long ocfs2_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
long ocfs2_compat_ioctl(struct file *file, unsigned cmd, unsigned long arg)
