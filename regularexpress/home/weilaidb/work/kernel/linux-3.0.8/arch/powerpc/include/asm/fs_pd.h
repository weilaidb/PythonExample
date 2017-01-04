#define FS_PD_H
#if defined(CONFIG_8260)
#define cpm2_map(member) (&cpm2_immr->member)
#define cpm2_map_size(member, size) (&cpm2_immr->member)
#define cpm2_unmap(addr) do  while(0)
extern immap_t __iomem *mpc8xx_immr;
#define immr_map(member) (&mpc8xx_immr->member)
#define immr_map_size(member, size) (&mpc8xx_immr->member)
#define immr_unmap(addr) do  while (0)
static inline int uart_baudrate(void)
static inline int uart_clock(void)
