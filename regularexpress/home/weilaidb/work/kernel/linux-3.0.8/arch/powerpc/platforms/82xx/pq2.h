#define _PQ2_H
void pq2_restart(char *cmd);
int pq2ads_pci_init_irq(void);
void pq2_init_pci(void);
static inline int pq2ads_pci_init_irq(void)
static inline void pq2_init_pci(void)
