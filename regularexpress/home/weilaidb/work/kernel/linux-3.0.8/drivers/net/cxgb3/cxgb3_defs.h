#define _CHELSIO_DEFS_H
#define VALIDATE_TID 1
void *cxgb_alloc_mem(unsigned long size);
void cxgb_free_mem(void *addr);
static inline union active_open_entry *atid2entry(const struct tid_info *t,
unsigned int atid)
static inline union listen_entry *stid2entry(const struct tid_info *t,
unsigned int stid)
static inline struct t3c_tid_entry *lookup_tid(const struct tid_info *t,
unsigned int tid)
static inline struct t3c_tid_entry *lookup_stid(const struct tid_info *t,
unsigned int tid)
static inline struct t3c_tid_entry *lookup_atid(const struct tid_info *t,
unsigned int tid)
int attach_t3cdev(struct t3cdev *dev);
void detach_t3cdev(struct t3cdev *dev);
