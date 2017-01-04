#define __PAT_INTERNAL_H_
extern int pat_debug_enable;
#define dprintk(fmt, arg...) \
do  while (0)
struct memtype ;
static inline char *cattr_name(unsigned long flags)
extern int rbt_memtype_check_insert(struct memtype *new,
unsigned long *new_type);
extern struct memtype *rbt_memtype_erase(u64 start, u64 end);
extern struct memtype *rbt_memtype_lookup(u64 addr);
extern int rbt_memtype_copy_nth_element(struct memtype *out, loff_t pos);
static inline int rbt_memtype_check_insert(struct memtype *new,
unsigned long *new_type)
static inline struct memtype *rbt_memtype_erase(u64 start, u64 end)
static inline struct memtype *rbt_memtype_lookup(u64 addr)
static inline int rbt_memtype_copy_nth_element(struct memtype *out, loff_t pos)
