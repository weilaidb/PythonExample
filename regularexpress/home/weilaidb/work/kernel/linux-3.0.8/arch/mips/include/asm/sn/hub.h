#define __ASM_SN_HUB_H
extern unsigned long hub_pio_map(cnodeid_t cnode, xwidgetnum_t widget,
unsigned long xtalk_addr, size_t size);
extern void hub_pio_init(cnodeid_t cnode);
