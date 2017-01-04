#define __ASM_ARCH_HARDWARE_H
#define RAM_START               PLAT_PHYS_OFFSET
#define RAM_SIZE                (CFG_GLOBAL_RAM_SIZE-CFG_GLOBAL_RAM_SIZE_RESERVED)
#define RAM_BASE                PAGE_OFFSET
#define pcibios_assign_all_busses()	1
#if defined(__KERNEL__)
#define HW_DECLARE_SPINLOCK(name)  DEFINE_SPINLOCK(bcmring_##name##_reg_lock);
#define HW_EXTERN_SPINLOCK(name)   extern spinlock_t bcmring_##name##_reg_lock;
#define HW_IRQ_SAVE(name, val)     spin_lock_irqsave(&bcmring_##name##_reg_lock, (val))
#define HW_IRQ_RESTORE(name, val)  spin_unlock_irqrestore(&bcmring_##name##_reg_lock, (val))
#define HW_DECLARE_SPINLOCK(name)
#define HW_EXTERN_SPINLOCK(name)
#define HW_IRQ_SAVE(name, val)
#define HW_IRQ_RESTORE(name, val)
#define HW_IO_PHYS_TO_VIRT MM_IO_PHYS_TO_VIRT
#define HW_IO_VIRT_TO_PHYS MM_IO_VIRT_TO_PHYS
