#define _LINUX_NFS_PAGE_H
#define NFS_PAGE_TAG_LOCKED	0
#define NFS_PAGE_TAG_COMMIT	1
enum ;
struct nfs_inode;
struct nfs_page ;
struct nfs_pageio_descriptor ;
#define NFS_WBACK_BUSY(req)	(test_bit(PG_BUSY,&(req)->wb_flags))
extern	struct nfs_page *nfs_create_request(struct nfs_open_context *ctx,
struct inode *inode,
struct page *page,
unsigned int offset,
unsigned int count);
extern	void nfs_release_request(struct nfs_page *req);
extern	int nfs_scan_list(struct nfs_inode *nfsi, struct list_head *dst,
pgoff_t idx_start, unsigned int npages, int tag);
extern	void nfs_pageio_init(struct nfs_pageio_descriptor *desc,
struct inode *inode,
int (*doio)(struct nfs_pageio_descriptor *desc),
size_t bsize,
int how);
extern	int nfs_pageio_add_request(struct nfs_pageio_descriptor *,
struct nfs_page *);
extern	void nfs_pageio_complete(struct nfs_pageio_descriptor *desc);
extern	void nfs_pageio_cond_complete(struct nfs_pageio_descriptor *, pgoff_t);
extern bool nfs_generic_pg_test(struct nfs_pageio_descriptor *desc,
struct nfs_page *prev,
struct nfs_page *req);
extern  int nfs_wait_on_request(struct nfs_page *);
extern	void nfs_unlock_request(struct nfs_page *req);
extern	int nfs_set_page_tag_locked(struct nfs_page *req);
extern  void nfs_clear_page_tag_locked(struct nfs_page *req);
static inline int
nfs_lock_request_dontget(struct nfs_page *req)
static inline void
nfs_list_add_request(struct nfs_page *req, struct list_head *head)
static inline void
nfs_list_remove_request(struct nfs_page *req)
static inline struct nfs_page *
nfs_list_entry(struct list_head *head)
static inline
loff_t req_offset(struct nfs_page *req)
