#define _INC_SBECOM_INLNX_H_
#if defined (__FreeBSD__) || defined (__NetBSD__)
#if defined(CONFIG_SMP) && ! defined(__SMP__)
#define __SMP__
#if defined(CONFIG_MODVERSIONS) && defined(MODULE) && ! defined(MODVERSIONS)
#define MODVERSIONS
}
static inline void
pci_write_32 (u_int32_t *p, u_int32_t v)
u_int32_t   pci_read_32 (u_int32_t *p);
void        pci_write_32 (u_int32_t *p, u_int32_t v);
static inline void *
OS_kmalloc (size_t size)
static inline void
OS_kfree (void *x)
static inline void *
OS_mem_token_alloc (size_t size)
static inline void
OS_mem_token_free (void *token)
static inline void
OS_mem_token_free_irq (void *token)
static inline void *
OS_mem_token_data (void *token)
static inline void *
OS_mem_token_next (void *token)
static inline int
OS_mem_token_len (void *token)
static inline int
OS_mem_token_tlen (void *token)
static inline u_long
OS_phystov (void *addr)
static inline u_long
OS_vtophys (void *addr)
void        OS_sem_init (void *, int);
static inline void
OS_sem_free (void *sem)
#define SD_SEM_TAKE(sem,desc)  down(sem)
#define SD_SEM_GIVE(sem)       up(sem)
#define SEM_AVAILABLE     1
#define SEM_TAKEN         0
struct watchdog
;
static inline int
OS_start_watchdog (struct watchdog * wd)
static inline int
OS_stop_watchdog (struct watchdog * wd)
static inline int
OS_free_watchdog (struct watchdog * wd)
void        OS_uwait (int usec, char *description);
void        OS_uwait_dummy (void);
int OS_init_watchdog(struct watchdog *wdp, void (*f) (void *), void *ci, int usec);
