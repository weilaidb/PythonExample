#define ZBOOT_H
#define MACH_TYPE	MACH_TYPE_AP4EVB
#elif defined(CONFIG_MACH_MACKEREL)
#define MACH_TYPE	MACH_TYPE_MACKEREL
#error "unsupported board."
