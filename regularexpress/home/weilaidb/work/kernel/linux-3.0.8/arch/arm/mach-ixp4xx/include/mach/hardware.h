#define __ASM_ARCH_HARDWARE_H__
#define PCIBIOS_MIN_IO		0x00001000
#define PCIBIOS_MIN_MEM		0x10000000
#define PCIBIOS_MAX_MEM		0x4FFFFFFF
#define PCIBIOS_MIN_MEM		0x48000000
#define PCIBIOS_MAX_MEM		0x4BFFFFFF
#define ARCH_HAS_DMA_SET_COHERENT_MASK
#define pcibios_assign_all_busses()	1
