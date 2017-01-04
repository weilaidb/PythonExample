#define __MACH_ATMEL_MCI_H
struct mci_dma_data ;
#define	slave_data_ptr(s)	(&(s)->sdata)
#define find_slave_dev(s)	((s)->sdata.dma_dev)
#define	setup_dma_addr(s, t, r)	do  while (0)
