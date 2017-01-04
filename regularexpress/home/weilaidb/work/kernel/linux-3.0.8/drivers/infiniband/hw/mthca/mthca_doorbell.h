#define MTHCA_RD_DOORBELL      0x00
#define MTHCA_SEND_DOORBELL    0x10
#define MTHCA_RECEIVE_DOORBELL 0x18
#define MTHCA_CQ_DOORBELL      0x20
#define MTHCA_EQ_DOORBELL      0x28
#if BITS_PER_LONG == 64
#define MTHCA_DECLARE_DOORBELL_LOCK(name)
#define MTHCA_INIT_DOORBELL_LOCK(ptr)    do  while (0)
#define MTHCA_GET_DOORBELL_LOCK(ptr)      (NULL)
static inline void mthca_write64_raw(__be64 val, void __iomem *dest)
static inline void mthca_write64(u32 hi, u32 lo, void __iomem *dest,
spinlock_t *doorbell_lock)
static inline void mthca_write_db_rec(__be32 val[2], __be32 *db)
#define MTHCA_DECLARE_DOORBELL_LOCK(name) spinlock_t name;
#define MTHCA_INIT_DOORBELL_LOCK(ptr)     spin_lock_init(ptr)
#define MTHCA_GET_DOORBELL_LOCK(ptr)      (ptr)
static inline void mthca_write64_raw(__be64 val, void __iomem *dest)
static inline void mthca_write64(u32 hi, u32 lo, void __iomem *dest,
spinlock_t *doorbell_lock)
static inline void mthca_write_db_rec(__be32 val[2], __be32 *db)
