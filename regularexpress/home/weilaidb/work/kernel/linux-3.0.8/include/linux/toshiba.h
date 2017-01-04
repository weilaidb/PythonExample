#define _LINUX_TOSHIBA_H
#define TOSH_PROC "/proc/toshiba"
#define TOSH_DEVICE "/dev/toshiba"
#define TOSH_SMM _IOWR('t', 0x90, int)
typedef struct  SMMRegisters;
int tosh_smm(SMMRegisters *regs);
