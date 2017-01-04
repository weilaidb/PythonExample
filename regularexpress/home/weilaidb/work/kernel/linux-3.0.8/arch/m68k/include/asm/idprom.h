#define _M68K_IDPROM_H
struct idprom ;
extern struct idprom *idprom;
extern void idprom_init(void);
#define SUN3_IDPROM_BASE	0x00000000
