#define _ASM_SPARC64_PARPORT_H 1
#define PARPORT_PC_MAX_PORTS	PARPORT_MAX
#define HAS_DMA
static DEFINE_SPINLOCK(dma_spin_lock);
#define claim_dma_lock() \
()
#define release_dma_lock(__flags) \
spin_unlock_irqrestore(&dma_spin_lock, __flags);
static struct sparc_ebus_info  sparc_ebus_dmas[PARPORT_PC_MAX_PORTS];
static DECLARE_BITMAP(dma_slot_map, PARPORT_PC_MAX_PORTS);
static inline int request_dma(unsigned int dmanr, const char *device_id)
static inline void free_dma(unsigned int dmanr)
static inline void enable_dma(unsigned int dmanr)
static inline void disable_dma(unsigned int dmanr)
static inline void clear_dma_ff(unsigned int dmanr)
static inline void set_dma_mode(unsigned int dmanr, char mode)
static inline void set_dma_addr(unsigned int dmanr, unsigned int addr)
static inline void set_dma_count(unsigned int dmanr, unsigned int count)
static inline unsigned int get_dma_residue(unsigned int dmanr)
static int __devinit ecpp_probe(struct platform_device *op)
static int __devexit ecpp_remove(struct platform_device *op)
static const struct of_device_id ecpp_match[] = ;
static struct platform_driver ecpp_driver = ;
static int parport_pc_find_nonpci_ports(int autoirq, int autodma)
