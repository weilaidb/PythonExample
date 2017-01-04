#define __XFS_AOPS_H__
extern struct workqueue_struct *xfsdatad_workqueue;
extern struct workqueue_struct *xfsconvertd_workqueue;
extern mempool_t *xfs_ioend_pool;
enum ;
#define XFS_IO_TYPES \
, \
, \
, \
typedef struct xfs_ioend  xfs_ioend_t;
extern const struct address_space_operations xfs_address_space_operations;
extern int xfs_get_blocks(struct inode *, sector_t, struct buffer_head *, int);
extern void xfs_ioend_init(void);
extern void xfs_ioend_wait(struct xfs_inode *);
extern void xfs_count_page_state(struct page *, int *, int *);
