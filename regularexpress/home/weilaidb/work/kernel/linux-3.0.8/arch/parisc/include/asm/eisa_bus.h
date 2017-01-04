#define ASM_EISA_H
extern void eisa_make_irq_level(int num);
extern void eisa_make_irq_edge(int num);
extern int eisa_enumerator(unsigned long eeprom_addr,
struct resource *io_parent,
struct resource *mem_parent);
extern int eisa_eeprom_init(unsigned long addr);
