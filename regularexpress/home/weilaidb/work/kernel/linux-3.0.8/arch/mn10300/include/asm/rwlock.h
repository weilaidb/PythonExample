#define _ASM_RWLOCK_H
#define RW_LOCK_BIAS		 0x01000000
typedef struct  __dummy_lock_t;
#define __dummy_lock(lock) (*(__dummy_lock_t *)(lock))
#define RW_LOCK_BIAS_STR	"0x01000000"
#define __build_read_lock_ptr(rw, helper)				\
do  while (0)
#define __build_read_lock_const(rw, helper)				\
do  while (0)
#define __build_read_lock(rw, helper) \
do  while (0)
#define __build_write_lock_ptr(rw, helper)				\
do  while (0)
#define __build_write_lock_const(rw, helper)				\
do  while (0)
#define __build_write_lock(rw, helper)					\
do  while (0)
