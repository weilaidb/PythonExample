#define __ASM_SH_ILSEL_H
typedef enum  ilsel_source_t;
int ilsel_enable(ilsel_source_t set);
int ilsel_enable_fixed(ilsel_source_t set, unsigned int level);
void ilsel_disable(unsigned int irq);
