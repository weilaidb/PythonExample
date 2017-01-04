#define _ASM_SGI_SGI_H
enum sgi_mach ;
extern enum sgi_mach sgimach;
extern void sgi_sysinit(void);
#define SGI_MSB(regaddr)   (regaddr)
#define SGI_MSB(regaddr)   ((regaddr) | 0x3)
