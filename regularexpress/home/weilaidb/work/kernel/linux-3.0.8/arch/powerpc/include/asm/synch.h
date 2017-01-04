#define _ASM_POWERPC_SYNCH_H
#if defined(__powerpc64__) || defined(CONFIG_PPC_E500MC)
#define __SUBARCH_HAS_LWSYNC
extern unsigned int __start___lwsync_fixup, __stop___lwsync_fixup;
extern void do_lwsync_fixups(unsigned long value, void *fixup_start,
void *fixup_end);
static inline void eieio(void)
static inline void isync(void)
#if defined(__powerpc64__)
#    define LWSYNC	lwsync
#elif defined(CONFIG_E500)
#    define LWSYNC					\
START_LWSYNC_SECTION(96);			\
sync;						\
MAKE_LWSYNC_SECTION_ENTRY(96, __lwsync_fixup);
#    define LWSYNC	sync
#define __PPC_ACQUIRE_BARRIER				\
START_LWSYNC_SECTION(97);			\
isync;						\
MAKE_LWSYNC_SECTION_ENTRY(97, __lwsync_fixup);
#define PPC_ACQUIRE_BARRIER	"\n" stringify_in_c(__PPC_ACQUIRE_BARRIER)
#define PPC_RELEASE_BARRIER	stringify_in_c(LWSYNC) "\n"
#define PPC_ACQUIRE_BARRIER
#define PPC_RELEASE_BARRIER
