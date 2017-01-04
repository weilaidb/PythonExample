#define SOURCEFILE_NAME "hpios.c"
void hpios_delay_micro_seconds(u32 num_micro_sec)
void hpios_locked_mem_init(void)
u16 hpios_locked_mem_alloc(struct consistent_dma_area *p_mem_area, u32 size,
struct pci_dev *pdev)
u16 hpios_locked_mem_free(struct consistent_dma_area *p_mem_area)
void hpios_locked_mem_free_all(void)
