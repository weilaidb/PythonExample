#define NILFS_CNO_MIN	((__u64)1)
#define NILFS_CNO_MAX	(~(__u64)0)
struct nilfs_dat_info ;
static inline struct nilfs_dat_info *NILFS_DAT_I(struct inode *dat)
static int nilfs_dat_prepare_entry(struct inode *dat,
struct nilfs_palloc_req *req, int create)
static void nilfs_dat_commit_entry(struct inode *dat,
struct nilfs_palloc_req *req)
static void nilfs_dat_abort_entry(struct inode *dat,
struct nilfs_palloc_req *req)
int nilfs_dat_prepare_alloc(struct inode *dat, struct nilfs_palloc_req *req)
void nilfs_dat_commit_alloc(struct inode *dat, struct nilfs_palloc_req *req)
void nilfs_dat_abort_alloc(struct inode *dat, struct nilfs_palloc_req *req)
static void nilfs_dat_commit_free(struct inode *dat,
struct nilfs_palloc_req *req)
int nilfs_dat_prepare_start(struct inode *dat, struct nilfs_palloc_req *req)
void nilfs_dat_commit_start(struct inode *dat, struct nilfs_palloc_req *req,
sector_t blocknr)
int nilfs_dat_prepare_end(struct inode *dat, struct nilfs_palloc_req *req)
void nilfs_dat_commit_end(struct inode *dat, struct nilfs_palloc_req *req,
int dead)
void nilfs_dat_abort_end(struct inode *dat, struct nilfs_palloc_req *req)
int nilfs_dat_prepare_update(struct inode *dat,
struct nilfs_palloc_req *oldreq,
struct nilfs_palloc_req *newreq)
void nilfs_dat_commit_update(struct inode *dat,
struct nilfs_palloc_req *oldreq,
struct nilfs_palloc_req *newreq, int dead)
void nilfs_dat_abort_update(struct inode *dat,
struct nilfs_palloc_req *oldreq,
struct nilfs_palloc_req *newreq)
int nilfs_dat_mark_dirty(struct inode *dat, __u64 vblocknr)
int nilfs_dat_freev(struct inode *dat, __u64 *vblocknrs, size_t nitems)
int nilfs_dat_move(struct inode *dat, __u64 vblocknr, sector_t blocknr)
int nilfs_dat_translate(struct inode *dat, __u64 vblocknr, sector_t *blocknrp)
ssize_t nilfs_dat_get_vinfo(struct inode *dat, void *buf, unsigned visz,
size_t nvi)
int nilfs_dat_read(struct super_block *sb, size_t entry_size,
struct nilfs_inode *raw_inode, struct inode **inodep)
