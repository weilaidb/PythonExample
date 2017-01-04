#define _ARCH_MIPS_POWERTV_ASIC_PREALLOC_H
#define KIBIBYTE(n) ((n) * 1024)
#define MEBIBYTE(n) ((n) * KIBIBYTE(1024))
#define PREALLOC(NAME, START, END, FLAGS) ,
#define PREALLOC_NORMAL(name, start, end, flags) \
PREALLOC(name, start, end, flags)
#define PREALLOC_NORMAL(name, start, end, flags)
#define PREALLOC_TFTP(name, start, end, flags) \
PREALLOC(name, start, end, flags)
#define PREALLOC_TFTP(name, start, end, flags)
#define PREALLOC_DOCSIS(name, start, end, flags) \
PREALLOC(name, start, end, flags)
#define PREALLOC_DOCSIS(name, start, end, flags)
#define PREALLOC_PMEM(name, start, end, flags) \
PREALLOC(name, start, end, flags)
#define PREALLOC_PMEM(name, start, end, flags)
