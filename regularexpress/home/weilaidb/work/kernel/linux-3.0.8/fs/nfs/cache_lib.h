struct nfs_cache_defer_req ;
extern int nfs_cache_upcall(struct cache_detail *cd, char *entry_name);
extern struct nfs_cache_defer_req *nfs_cache_defer_req_alloc(void);
extern void nfs_cache_defer_req_put(struct nfs_cache_defer_req *dreq);
extern int nfs_cache_wait_for_upcall(struct nfs_cache_defer_req *dreq);
extern int nfs_cache_register(struct cache_detail *cd);
extern void nfs_cache_unregister(struct cache_detail *cd);
