#define _ASMSPARC64_SHMPARAM_H
#define __ARCH_FORCE_SHMLBA	1
#define	SHMLBA	((PAGE_SIZE > L1DCACHE_SIZE) ? PAGE_SIZE : L1DCACHE_SIZE)