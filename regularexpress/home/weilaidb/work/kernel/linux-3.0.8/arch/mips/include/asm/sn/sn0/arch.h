#define _ASM_SN_SN0_ARCH_H
#define MAX_COMPACT_NODES       64
#define MAXCPUS                 128
#define MAX_COMPACT_NODES       128
#define MAXCPUS                 256
#define MAX_NASIDS		256
#define	MAX_REGIONS		64
#define MAX_NONPREMIUM_REGIONS  16
#define MAX_PREMIUM_REGIONS     MAX_REGIONS
#define MAX_PARTITIONS		MAX_REGIONS
#define NASID_MASK_BYTES	((MAX_NASIDS + 7) / 8)
#define MAX_MEM_SLOTS   16
#define MAX_MEM_SLOTS   32
#define SLOT_SHIFT      	(27)
#define SLOT_MIN_MEM_SIZE	(32*1024*1024)
#define CPUS_PER_NODE		2
#define CPUS_PER_NODE_SHFT	1
#define CPUS_PER_SUBNODE	2
