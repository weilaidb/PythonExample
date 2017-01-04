#define NFS_IDMAP_H
#define IDMAP_NAMESZ  128
#define IDMAP_TYPE_USER  0
#define IDMAP_TYPE_GROUP 1
#define IDMAP_CONV_IDTONAME 0
#define IDMAP_CONV_NAMETOID 1
#define IDMAP_STATUS_INVALIDMSG 0x01
#define IDMAP_STATUS_AGAIN      0x02
#define IDMAP_STATUS_LOOKUPFAIL 0x04
#define IDMAP_STATUS_SUCCESS    0x08
struct idmap_msg ;
struct nfs_client;
struct nfs_server;
int nfs_idmap_init(void);
void nfs_idmap_quit(void);
static inline int nfs_idmap_new(struct nfs_client *clp)
static inline void nfs_idmap_delete(struct nfs_client *clp)
static inline int nfs_idmap_init(void)
static inline void nfs_idmap_quit(void)
int nfs_idmap_new(struct nfs_client *);
void nfs_idmap_delete(struct nfs_client *);
int nfs_map_name_to_uid(const struct nfs_server *, const char *, size_t, __u32 *);
int nfs_map_group_to_gid(const struct nfs_server *, const char *, size_t, __u32 *);
int nfs_map_uid_to_name(const struct nfs_server *, __u32, char *, size_t);
int nfs_map_gid_to_group(const struct nfs_server *, __u32, char *, size_t);
extern unsigned int nfs_idmap_cache_timeout;
