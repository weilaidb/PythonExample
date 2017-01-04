#define _HPIOS_H_
#undef HPI_OS_LINUX_KERNEL
#define HPI_OS_LINUX_KERNEL
#define HPI_OS_DEFINED
#define HPI_BUILD_KERNEL_MODE
#define HPI_NO_OS_FILE_OPS
#define HPI64BIT
struct consistent_dma_area ;
static inline u16 hpios_locked_mem_get_phys_addr(struct consistent_dma_area
*locked_mem_handle, u32 *p_physical_addr)
static inline u16 hpios_locked_mem_get_virt_addr(struct consistent_dma_area
*locked_mem_handle, void **pp_virtual_addr)
static inline u16 hpios_locked_mem_valid(struct consistent_dma_area
*locked_mem_handle)
struct hpi_ioctl_linux ;
#define HPI_IOCTL_LINUX _IOWR('H', 0xFC, struct hpi_ioctl_linux)
#define HPI_DEBUG_FLAG_ERROR   KERN_ERR
#define HPI_DEBUG_FLAG_WARNING KERN_WARNING
#define HPI_DEBUG_FLAG_NOTICE  KERN_NOTICE
#define HPI_DEBUG_FLAG_INFO    KERN_INFO
#define HPI_DEBUG_FLAG_DEBUG   KERN_DEBUG
#define HPI_DEBUG_FLAG_VERBOSE KERN_DEBUG
#define HPI_LOCKING
struct hpios_spinlock ;
#define IN_LOCK_BH 1
#define IN_LOCK_IRQ 0
static inline void cond_lock(struct hpios_spinlock *l)
static inline void cond_unlock(struct hpios_spinlock *l)
#define hpios_msgxlock_init(obj)      spin_lock_init(&(obj)->lock)
#define hpios_msgxlock_lock(obj)   cond_lock(obj)
#define hpios_msgxlock_unlock(obj) cond_unlock(obj)
#define hpios_dsplock_init(obj)       spin_lock_init(&(obj)->dsp_lock.lock)
#define hpios_dsplock_lock(obj)    cond_lock(&(obj)->dsp_lock)
#define hpios_dsplock_unlock(obj)  cond_unlock(&(obj)->dsp_lock)
#define HPI_BUILD_DEBUG
#define HPI_ALIST_LOCKING
#define hpios_alistlock_init(obj)    spin_lock_init(&((obj)->list_lock.lock))
#define hpios_alistlock_lock(obj) spin_lock(&((obj)->list_lock.lock))
#define hpios_alistlock_unlock(obj) spin_unlock(&((obj)->list_lock.lock))
struct hpi_adapter ;
