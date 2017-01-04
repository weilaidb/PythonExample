#define CPM_UART_CPM2_H
static inline void cpm_set_brg(int brg, int baud)
static inline void cpm_set_scc_fcr(scc_uart_t __iomem *sup)
static inline void cpm_set_smc_fcr(smc_uart_t __iomem *up)
#define DPRAM_BASE	((u8 __iomem __force *)cpm_dpram_addr(0))
