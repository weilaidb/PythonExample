#define __UNICORE_HWCAP_H__
#define HWCAP_MSP		1
#define HWCAP_UNICORE16		2
#define HWCAP_CMOV		4
#define HWCAP_UNICORE_F64       8
#define HWCAP_TLS		0x80
#if defined(__KERNEL__) && !defined(__ASSEMBLY__)
#define ELF_HWCAP		(HWCAP_CMOV | HWCAP_UNICORE_F64)
