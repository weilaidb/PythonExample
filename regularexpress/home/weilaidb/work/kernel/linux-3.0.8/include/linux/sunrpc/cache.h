#define _LINUX_SUNRPC_CACHE_H_
struct cache_head ;
#define	CACHE_VALID	0
#define	CACHE_NEGATIVE	1
#define	CACHE_PENDING	2
#define	CACHE_NEW_EXPIRY 120
struct cache_detail_procfs ;
struct cache_detail_pipefs ;
struct cache_detail ;
struct cache_req ;
struct cache_deferred_req ;
extern const struct file_operations cache_file_operations_pipefs;
extern const struct file_operations content_file_operations_pipefs;
extern const struct file_operations cache_flush_operations_pipefs;
extern struct cache_head *
sunrpc_cache_lookup(struct cache_detail *detail,
struct cache_head *key, int hash);
extern struct cache_head *
sunrpc_cache_update(struct cache_detail *detail,
struct cache_head *new, struct cache_head *old, int hash);
extern int
sunrpc_cache_pipe_upcall(struct cache_detail *detail, struct cache_head *h,
void (*cache_request)(struct cache_detail *,
struct cache_head *,
char **,
int *));
extern void cache_clean_deferred(void *owner);
static inline struct cache_head  *cache_get(struct cache_head *h)
static inline void cache_put(struct cache_head *h, struct cache_detail *cd)
static inline int cache_valid(struct cache_head *h)
extern int cache_check(struct cache_detail *detail,
struct cache_head *h, struct cache_req *rqstp);
extern void cache_flush(void);
extern void cache_purge(struct cache_detail *detail);
#define NEVER (0x7FFFFFFF)
extern void __init cache_initialize(void);
extern int cache_register(struct cache_detail *cd);
extern int cache_register_net(struct cache_detail *cd, struct net *net);
extern void cache_unregister(struct cache_detail *cd);
extern void cache_unregister_net(struct cache_detail *cd, struct net *net);
extern int sunrpc_cache_register_pipefs(struct dentry *parent, const char *,
mode_t, struct cache_detail *);
extern void sunrpc_cache_unregister_pipefs(struct cache_detail *);
extern void qword_add(char **bpp, int *lp, char *str);
extern void qword_addhex(char **bpp, int *lp, char *buf, int blen);
extern int qword_get(char **bpp, char *dest, int bufsize);
static inline int get_int(char **bpp, int *anint)
static inline time_t seconds_since_boot(void)
static inline time_t convert_to_wallclock(time_t sinceboot)
static inline time_t get_expiry(char **bpp)
static inline void sunrpc_invalidate(struct cache_head *h,
struct cache_detail *detail)
