#define __XFS_SUPPORT_MRLOCK_H__
typedef struct  mrlock_t;
#define mrinit(mrp, name)	\
do  while (0)
#define mrinit(mrp, name)	\
do  while (0)
#define mrlock_init(mrp, t,n,s)	mrinit(mrp, n)
#define mrfree(mrp)		do  while (0)
static inline void mraccess_nested(mrlock_t *mrp, int subclass)
static inline void mrupdate_nested(mrlock_t *mrp, int subclass)
static inline int mrtryaccess(mrlock_t *mrp)
static inline int mrtryupdate(mrlock_t *mrp)
static inline void mrunlock_excl(mrlock_t *mrp)
static inline void mrunlock_shared(mrlock_t *mrp)
static inline void mrdemote(mrlock_t *mrp)
