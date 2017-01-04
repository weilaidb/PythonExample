#define FS_NFS_PNFS_H
enum ;
struct pnfs_layout_segment ;
enum pnfs_try_status ;
#define LAYOUT_NFSV4_1_MODULE_PREFIX "nfs-layouttype4"
enum ;
enum layoutdriver_policy_flags ;
struct nfs4_deviceid_node;
struct pnfs_layoutdriver_type ;
struct pnfs_layout_hdr ;
struct pnfs_device ;
extern int pnfs_register_layoutdriver(struct pnfs_layoutdriver_type *);
extern void pnfs_unregister_layoutdriver(struct pnfs_layoutdriver_type *);
extern int nfs4_proc_getdeviceinfo(struct nfs_server *server,
struct pnfs_device *dev);
extern int nfs4_proc_layoutget(struct nfs4_layoutget *lgp);
extern int nfs4_proc_layoutreturn(struct nfs4_layoutreturn *lrp);
void get_layout_hdr(struct pnfs_layout_hdr *lo);
void put_lseg(struct pnfs_layout_segment *lseg);
struct pnfs_layout_segment *
pnfs_update_layout(struct inode *ino, struct nfs_open_context *ctx,
loff_t pos, u64 count, enum pnfs_iomode access_type,
gfp_t gfp_flags);
void set_pnfs_layoutdriver(struct nfs_server *, u32 id);
void unset_pnfs_layoutdriver(struct nfs_server *);
enum pnfs_try_status pnfs_try_to_write_data(struct nfs_write_data *,
const struct rpc_call_ops *, int);
enum pnfs_try_status pnfs_try_to_read_data(struct nfs_read_data *,
const struct rpc_call_ops *);
bool pnfs_generic_pg_test(struct nfs_pageio_descriptor *pgio, struct nfs_page *prev, struct nfs_page *req);
int pnfs_layout_process(struct nfs4_layoutget *lgp);
void pnfs_free_lseg_list(struct list_head *tmp_list);
void pnfs_destroy_layout(struct nfs_inode *);
void pnfs_destroy_all_layouts(struct nfs_client *);
void put_layout_hdr(struct pnfs_layout_hdr *lo);
void pnfs_set_layout_stateid(struct pnfs_layout_hdr *lo,
const nfs4_stateid *new,
bool update_barrier);
int pnfs_choose_layoutget_stateid(nfs4_stateid *dst,
struct pnfs_layout_hdr *lo,
struct nfs4_state *open_state);
int mark_matching_lsegs_invalid(struct pnfs_layout_hdr *lo,
struct list_head *tmp_list,
struct pnfs_layout_range *recall_range);
bool pnfs_roc(struct inode *ino);
void pnfs_roc_release(struct inode *ino);
void pnfs_roc_set_barrier(struct inode *ino, u32 barrier);
bool pnfs_roc_drain(struct inode *ino, u32 *barrier);
void pnfs_set_layoutcommit(struct nfs_write_data *wdata);
int pnfs_layoutcommit_inode(struct inode *inode, bool sync);
int _pnfs_return_layout(struct inode *);
int pnfs_ld_write_done(struct nfs_write_data *);
int pnfs_ld_read_done(struct nfs_read_data *);
struct nfs4_deviceid_node ;
void nfs4_print_deviceid(const struct nfs4_deviceid *dev_id);
struct nfs4_deviceid_node *nfs4_find_get_deviceid(const struct pnfs_layoutdriver_type *, const struct nfs_client *, const struct nfs4_deviceid *);
struct nfs4_deviceid_node *nfs4_unhash_put_deviceid(const struct pnfs_layoutdriver_type *, const struct nfs_client *, const struct nfs4_deviceid *);
void nfs4_delete_deviceid(const struct pnfs_layoutdriver_type *, const struct nfs_client *, const struct nfs4_deviceid *);
void nfs4_init_deviceid_node(struct nfs4_deviceid_node *,
const struct pnfs_layoutdriver_type *,
const struct nfs_client *,
const struct nfs4_deviceid *);
struct nfs4_deviceid_node *nfs4_insert_deviceid_node(struct nfs4_deviceid_node *);
bool nfs4_put_deviceid_node(struct nfs4_deviceid_node *);
void nfs4_deviceid_purge_client(const struct nfs_client *);
static inline int lo_fail_bit(u32 iomode)
static inline struct pnfs_layout_segment *
get_lseg(struct pnfs_layout_segment *lseg)
static inline int pnfs_enabled_sb(struct nfs_server *nfss)
static inline void
pnfs_mark_request_commit(struct nfs_page *req, struct pnfs_layout_segment *lseg)
static inline int
pnfs_commit_list(struct inode *inode, struct list_head *mds_pages, int how)
static inline struct list_head *
pnfs_choose_commit_list(struct nfs_page *req, struct list_head *mds)
static inline void pnfs_clear_request_commit(struct nfs_page *req)
static inline bool
pnfs_ld_layoutret_on_setattr(struct inode *inode)
static inline int pnfs_return_layout(struct inode *ino)
static inline void pnfs_pageio_init(struct nfs_pageio_descriptor *pgio,
struct inode *inode)
static inline void pnfs_destroy_all_layouts(struct nfs_client *clp)
static inline void pnfs_destroy_layout(struct nfs_inode *nfsi)
static inline struct pnfs_layout_segment *
get_lseg(struct pnfs_layout_segment *lseg)
static inline void put_lseg(struct pnfs_layout_segment *lseg)
static inline struct pnfs_layout_segment *
pnfs_update_layout(struct inode *ino, struct nfs_open_context *ctx,
loff_t pos, u64 count, enum pnfs_iomode access_type,
gfp_t gfp_flags)
static inline enum pnfs_try_status
pnfs_try_to_read_data(struct nfs_read_data *data,
const struct rpc_call_ops *call_ops)
static inline enum pnfs_try_status
pnfs_try_to_write_data(struct nfs_write_data *data,
const struct rpc_call_ops *call_ops, int how)
static inline int pnfs_return_layout(struct inode *ino)
static inline bool
pnfs_ld_layoutret_on_setattr(struct inode *inode)
static inline bool
pnfs_roc(struct inode *ino)
static inline void
pnfs_roc_release(struct inode *ino)
static inline void
pnfs_roc_set_barrier(struct inode *ino, u32 barrier)
static inline bool
pnfs_roc_drain(struct inode *ino, u32 *barrier)
static inline void set_pnfs_layoutdriver(struct nfs_server *s, u32 id)
static inline void unset_pnfs_layoutdriver(struct nfs_server *s)
static inline void pnfs_pageio_init(struct nfs_pageio_descriptor *pgio,
struct inode *inode)
static inline void
pnfs_mark_request_commit(struct nfs_page *req, struct pnfs_layout_segment *lseg)
static inline int
pnfs_commit_list(struct inode *inode, struct list_head *mds_pages, int how)
static inline struct list_head *
pnfs_choose_commit_list(struct nfs_page *req, struct list_head *mds)
static inline void pnfs_clear_request_commit(struct nfs_page *req)
static inline int pnfs_layoutcommit_inode(struct inode *inode, bool sync)
static inline void nfs4_deviceid_purge_client(struct nfs_client *ncl)
