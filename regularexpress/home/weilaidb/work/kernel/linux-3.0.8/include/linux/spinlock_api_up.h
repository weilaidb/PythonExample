#define __LINUX_SPINLOCK_API_UP_H
# error "please don't include this file directly"
#define in_lock_functions(ADDR)		0
#define assert_raw_spin_locked(lock)	do  while (0)
#define __LOCK(lock) \
do  while (0)
#define __LOCK_BH(lock) \
do  while (0)
#define __LOCK_IRQ(lock) \
do  while (0)
#define __LOCK_IRQSAVE(lock, flags) \
do  while (0)
#define __UNLOCK(lock) \
do  while (0)
#define __UNLOCK_BH(lock) \
do  while (0)
#define __UNLOCK_IRQ(lock) \
do  while (0)
#define __UNLOCK_IRQRESTORE(lock, flags) \
do  while (0)
#define _raw_spin_lock(lock)			__LOCK(lock)
#define _raw_spin_lock_nested(lock, subclass)	__LOCK(lock)
#define _raw_read_lock(lock)			__LOCK(lock)
#define _raw_write_lock(lock)			__LOCK(lock)
#define _raw_spin_lock_bh(lock)			__LOCK_BH(lock)
#define _raw_read_lock_bh(lock)			__LOCK_BH(lock)
#define _raw_write_lock_bh(lock)		__LOCK_BH(lock)
#define _raw_spin_lock_irq(lock)		__LOCK_IRQ(lock)
#define _raw_read_lock_irq(lock)		__LOCK_IRQ(lock)
#define _raw_write_lock_irq(lock)		__LOCK_IRQ(lock)
#define _raw_spin_lock_irqsave(lock, flags)	__LOCK_IRQSAVE(lock, flags)
#define _raw_read_lock_irqsave(lock, flags)	__LOCK_IRQSAVE(lock, flags)
#define _raw_write_lock_irqsave(lock, flags)	__LOCK_IRQSAVE(lock, flags)
#define _raw_spin_trylock(lock)			()
#define _raw_read_trylock(lock)			()
#define _raw_write_trylock(lock)			()
#define _raw_spin_trylock_bh(lock)		()
#define _raw_spin_unlock(lock)			__UNLOCK(lock)
#define _raw_read_unlock(lock)			__UNLOCK(lock)
#define _raw_write_unlock(lock)			__UNLOCK(lock)
#define _raw_spin_unlock_bh(lock)		__UNLOCK_BH(lock)
#define _raw_write_unlock_bh(lock)		__UNLOCK_BH(lock)
#define _raw_read_unlock_bh(lock)		__UNLOCK_BH(lock)
#define _raw_spin_unlock_irq(lock)		__UNLOCK_IRQ(lock)
#define _raw_read_unlock_irq(lock)		__UNLOCK_IRQ(lock)
#define _raw_write_unlock_irq(lock)		__UNLOCK_IRQ(lock)
#define _raw_spin_unlock_irqrestore(lock, flags) \
__UNLOCK_IRQRESTORE(lock, flags)
#define _raw_read_unlock_irqrestore(lock, flags) \
__UNLOCK_IRQRESTORE(lock, flags)
#define _raw_write_unlock_irqrestore(lock, flags) \
__UNLOCK_IRQRESTORE(lock, flags)
