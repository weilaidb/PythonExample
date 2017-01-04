#define MLX4_DOORBELL_H
#define MLX4_SEND_DOORBELL    0x14
#define MLX4_CQ_DOORBELL      0x20
#if BITS_PER_LONG == 64
#define MLX4_DECLARE_DOORBELL_LOCK(name)
#define MLX4_INIT_DOORBELL_LOCK(ptr)    do  while (0)
#define MLX4_GET_DOORBELL_LOCK(ptr)      (NULL)
static inline void mlx4_write64(__be32 val[2], void __iomem *dest,
spinlock_t *doorbell_lock)
#define MLX4_DECLARE_DOORBELL_LOCK(name) spinlock_t name;
#define MLX4_INIT_DOORBELL_LOCK(ptr)     spin_lock_init(ptr)
#define MLX4_GET_DOORBELL_LOCK(ptr)      (ptr)
static inline void mlx4_write64(__be32 val[2], void __iomem *dest,
spinlock_t *doorbell_lock)
