#define __CVMX_SPINLOCK_H__
typedef struct  cvmx_spinlock_t;
#define  CVMX_SPINLOCK_UNLOCKED_VAL  0
#define  CVMX_SPINLOCK_LOCKED_VAL    1
#define CVMX_SPINLOCK_UNLOCKED_INITIALIZER
static inline void cvmx_spinlock_init(cvmx_spinlock_t *lock)
static inline int cvmx_spinlock_locked(cvmx_spinlock_t *lock)
static inline void cvmx_spinlock_unlock(cvmx_spinlock_t *lock)
static inline unsigned int cvmx_spinlock_trylock(cvmx_spinlock_t *lock)
static inline void cvmx_spinlock_lock(cvmx_spinlock_t *lock)
static inline void cvmx_spinlock_bit_lock(uint32_t *word)
static inline unsigned int cvmx_spinlock_bit_trylock(uint32_t *word)
static inline void cvmx_spinlock_bit_unlock(uint32_t *word)
