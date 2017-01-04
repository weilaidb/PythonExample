#define _ASM_FLOPPY_H
static inline void fd_cacheflush(char * addr, long size)
#define MAX_BUFFER_SECTORS 24
#define FLOPPY0_TYPE 		fd_drive_type(0)
#define FLOPPY1_TYPE		fd_drive_type(1)
#define FDC1			fd_getfdaddr1();
#define N_FDC 1
#define N_DRIVE 8
#define CROSS_64KB(a, s) ((unsigned long)(a)/K_64 != ((unsigned long)(a) + (s) - 1) / K_64)
#define EXTRA_FLOPPY_PARAMS
