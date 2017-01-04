#define __ASM_ARCH_HARDWARE_H
#define IO_BASE         0xF0000000
#define IO_ADDRESS(x)  (((((x) & 0xff000000) >> 4) | ((x) & 0xfffff)) | IO_BASE)
