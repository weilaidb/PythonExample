#define ZFCP_REQLIST_H
#define ZFCP_REQ_LIST_BUCKETS 128
struct zfcp_reqlist ;
static inline int zfcp_reqlist_hash(unsigned long req_id)
static inline struct zfcp_reqlist *zfcp_reqlist_alloc(void)
static inline int zfcp_reqlist_isempty(struct zfcp_reqlist *rl)
static inline void zfcp_reqlist_free(struct zfcp_reqlist *rl)
static inline struct zfcp_fsf_req *
_zfcp_reqlist_find(struct zfcp_reqlist *rl, unsigned long req_id)
static inline struct zfcp_fsf_req *
zfcp_reqlist_find(struct zfcp_reqlist *rl, unsigned long req_id)
static inline struct zfcp_fsf_req *
zfcp_reqlist_find_rm(struct zfcp_reqlist *rl, unsigned long req_id)
static inline void zfcp_reqlist_add(struct zfcp_reqlist *rl,
struct zfcp_fsf_req *req)
static inline void zfcp_reqlist_move(struct zfcp_reqlist *rl,
struct list_head *list)
