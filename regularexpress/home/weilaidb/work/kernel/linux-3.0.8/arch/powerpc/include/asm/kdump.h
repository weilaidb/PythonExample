#define _PPC64_KDUMP_H
#if defined(CONFIG_RELOCATABLE) && defined(CONFIG_PPC64)
#define KDUMP_KERNELBASE	0x4000000
#define KDUMP_KERNELBASE	0x2000000
#define KDUMP_RESERVE_LIMIT	0x10000
#define KDUMP_TRAMPOLINE_START	0x0100
#define KDUMP_TRAMPOLINE_END	0x3000
#define KDUMP_TRAMPOLINE_START	(0x0100 + PAGE_OFFSET)
#define KDUMP_TRAMPOLINE_END	(0x3000 + PAGE_OFFSET)
#define KDUMP_MIN_TCE_ENTRIES	2048
#if defined(CONFIG_CRASH_DUMP) && !defined(CONFIG_RELOCATABLE)
extern void reserve_kdump_trampoline(void);
extern void setup_kdump_trampoline(void);
static inline void reserve_kdump_trampoline(void)
static inline void setup_kdump_trampoline(void)
