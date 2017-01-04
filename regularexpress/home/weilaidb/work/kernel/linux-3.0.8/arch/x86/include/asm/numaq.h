#define _ASM_X86_NUMAQ_H
extern int found_numaq;
extern int numaq_numa_init(void);
extern int pci_numaq_init(void);
extern void *xquad_portio;
#define XQUAD_PORTIO_BASE 0xfe400000
#define XQUAD_PORTIO_QUAD 0x40000
#define XQUAD_PORT_ADDR(port, quad) (xquad_portio + (XQUAD_PORTIO_QUAD*quad) + port)
#define SYS_CFG_DATA_PRIV_ADDR		0x0009d000
struct eachquadmem ;
struct sys_cfg_data ;
void numaq_tsc_disable(void);
