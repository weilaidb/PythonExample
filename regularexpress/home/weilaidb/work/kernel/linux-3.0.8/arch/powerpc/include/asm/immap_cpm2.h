#define __IMMAP_CPM2__
typedef	struct sys_82xx_conf  sysconf_82xx_cpm2_t;
typedef	struct sys_85xx_conf  sysconf_85xx_cpm2_t;
typedef union sys_conf  sysconf_cpm2_t;
typedef struct	mem_ctlr  memctl_cpm2_t;
typedef struct	sys_int_timers  sit_cpm2_t;
#define PISCR_PIRQ_MASK		((u16)0xff00)
#define PISCR_PS		((u16)0x0080)
#define PISCR_PIE		((u16)0x0004)
#define PISCR_PTF		((u16)0x0002)
#define PISCR_PTE		((u16)0x0001)
typedef struct pci_ctlr  pci_cpm2_t;
typedef struct interrupt_controller  intctl_cpm2_t;
typedef struct clk_and_reset  car_cpm2_t;
typedef struct io_port  iop_cpm2_t;
typedef struct cpm_timers  cpmtimer_cpm2_t;
typedef struct sdma_csr  sdma_cpm2_t;
typedef struct fcc  fcc_t;
typedef struct fcc_c  fcc_c_t;
typedef struct tclayer  tclayer_t;
typedef struct i2c  i2c_cpm2_t;
typedef struct scc  scc_t;
typedef struct smc  smc_t;
typedef struct spi_ctrl  spictl_cpm2_t;
typedef struct cpmux  cpmux_t;
typedef struct siram  siramctl_t;
typedef struct mcc  mcc_t;
typedef struct comm_proc  cpm_cpm2_t;
typedef struct cpm_usb_ctlr  usb_cpm2_t;
typedef struct immap  cpm2_map_t;
extern cpm2_map_t __iomem *cpm2_immr;
