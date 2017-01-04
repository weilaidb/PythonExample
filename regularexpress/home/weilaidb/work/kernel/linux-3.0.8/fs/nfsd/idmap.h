#define LINUX_NFSD_IDMAP_H
#define IDMAP_NAMESZ 128
int nfsd_idmap_init(void);
void nfsd_idmap_shutdown(void);
static inline int nfsd_idmap_init(void)
static inline void nfsd_idmap_shutdown(void)
__be32 nfsd_map_name_to_uid(struct svc_rqst *, const char *, size_t, __u32 *);
__be32 nfsd_map_name_to_gid(struct svc_rqst *, const char *, size_t, __u32 *);
int nfsd_map_uid_to_name(struct svc_rqst *, __u32, char *);
int nfsd_map_gid_to_name(struct svc_rqst *, __u32, char *);
