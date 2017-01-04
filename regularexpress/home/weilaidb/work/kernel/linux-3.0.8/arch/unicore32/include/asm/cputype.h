#define __UNICORE_CPUTYPE_H__
#define CPUID_CPUID	0
#define CPUID_CACHETYPE	1
#define read_cpuid(reg)							\
()
#define uc32_cpuid		read_cpuid(CPUID_CPUID)
#define uc32_cachetype		read_cpuid(CPUID_CACHETYPE)
