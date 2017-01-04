#define __ASMARM_HWCAP_H
#define HWCAP_SWP	1
#define HWCAP_HALF	2
#define HWCAP_THUMB	4
#define HWCAP_26BIT	8
#define HWCAP_FAST_MULT	16
#define HWCAP_FPA	32
#define HWCAP_VFP	64
#define HWCAP_EDSP	128
#define HWCAP_JAVA	256
#define HWCAP_IWMMXT	512
#define HWCAP_CRUNCH	1024
#define HWCAP_THUMBEE	2048
#define HWCAP_NEON	4096
#define HWCAP_VFPv3	8192
#define HWCAP_VFPv3D16	16384
#define HWCAP_TLS	32768
#if defined(__KERNEL__) && !defined(__ASSEMBLY__)
#define ELF_HWCAP	(elf_hwcap)
extern unsigned int elf_hwcap;
