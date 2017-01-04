#define _INCLUDED_CYASMEMMAP_H_
#define OMAP2_PULL_UP		(1 << 4)
#define OMAP2_PULL_ENA		(1 << 3)
#define	OMAP34XX_MUX_MODE0	0
#define	OMAP34XX_MUX_MODE4	4
#define OMAP3_INPUT_EN		(1 << 8)
#define OMAP34XX_PIN_INPUT_PULLUP	(OMAP2_PULL_ENA | OMAP3_INPUT_EN \
| OMAP2_PULL_UP)
#define LED_0 156
#define LED_1 128
#define LED_2 64
#define LED_3 60
#define HIGH 1
#define LOW  1
#define AST_WAKEUP	 167
#define AST_RESET	 126
#define AST__rn_b	 64
#define AST_INT	 62
#define AST_CS	55
#define GPMC_PREFETCH_CONFIG1 0x01E0
#define PFE_THRESHOLD 31
#define PF_ACCESSMODE  (0 << 0)
#define PF_DMAMODE	 (0 << 2)
#define PF_SYNCHROMODE (0 << 3)
#define PF_WAITPINSEL  (0x0 << 4)
#define PF_EN_ENGINE   (1 << 7)
#define PF_FIFO_THRESHOLD (PFE_THRESHOLD << 8)
#define PF_WEIGHTED_PRIO (0x0 << 16)
#define PF_ROUND_ROBIN   (0 << 23)
#define PF_ENGIN_CS_SEL (AST_GPMC_CS << 24)
#define PF_EN_OPTIM_ACC (0 << 27)
#define PF_CYCLEOPTIM   (0x0 << 28)
#define GPMC_PREFETCH_CONFIG1_VAL (PF_ACCESSMODE | \
PF_DMAMODE | PF_SYNCHROMODE | \
PF_WAITPINSEL | PF_EN_ENGINE | \
PF_FIFO_THRESHOLD | PF_FIFO_THRESHOLD | \
PF_WEIGHTED_PRIO | PF_ROUND_ROBIN | \
PF_ENGIN_CS_SEL | PF_EN_OPTIM_ACC | \
PF_CYCLEOPTIM)
#define GPMC_PREFETCH_CONFIG2 0x01E4
#define PF_TRANSFERCOUNT (0x000)
#define GPMC_PREFETCH_CONTROL 0x01EC
#define PFPW_STARTENGINE (1 << 0)
#define GPMC_PREFETCH_STATUS  0x01F0
#define PFE_FIFO_THRESHOLD (1 << 16)
#define AST_GPMC_CS 4
#define AST_DACK	00
#define CYAS_DEV_BASE_ADDR  (0x20000000)
#define CYAS_DEV_MAX_ADDR   (0xFF)
#define CYAS_DEV_ADDR_RANGE (CYAS_DEV_MAX_ADDR << 1)
#define CYAS_DEV_CALC_ADDR(cyas_addr) (cyas_addr << 1)
#define CYAS_DEV_CALC_EP_ADDR(ep) (ep << 1)
#define CYAS_DEV_CALC_ADDR(cyas_addr) (cyas_addr | 0x0c00)
#define CYAS_DEV_CALC_EP_ADDR(ep) ep
#define IORD32(addr) (*(volatile u32  *)(addr))
#define IOWR32(addr, val) (*(volatile u32 *)(addr) = val)
#define IORD16(addr) (*(volatile u16  *)(addr))
#define IOWR16(addr, val) (*(volatile u16 *)(addr) = val)
#define IORD8(addr) (*(volatile u8  *)(addr))
#define IOWR8(addr, val) (*(volatile u8 *)(addr) = val)
#define CTLPADCONF_BASE_ADDR 0x48002000
#define CTLPADCONF_SIZE 0x1000
#define GPIO1_BASE_ADDR 0x48310000
#define GPIO2_BASE_ADDR 0x49050000
#define GPIO3_BASE_ADDR 0x49052000
#define GPIO4_BASE_ADDR 0x49054000
#define GPIO5_BASE_ADDR 0x49056000
#define GPIO6_BASE_ADDR 0x49058000
#define GPIO_SPACE_SIZE 0x1000
#define GPMC_BASE 0x6E000000
#define GPMC_REGION_SIZE 0x1000
#define GPMC_CONFIG_REG (0x50)
#define NAND_FORCE_POSTED_WRITE_B 1
#define AS_WAIT_PIN_MASK (1 << 10)
#define GPMC_CFG_REG(N, CS) ((0x60 + (4*(N-1))) + (0x30*CS))
#define AST_GPMC_NAND_CMD		(0x7c + (0x30*AST_GPMC_CS))
#define AST_GPMC_NAND_ADDR		(0x80 + (0x30*AST_GPMC_CS))
#define AST_GPMC_NAND_DATA		(0x84 + (0x30*AST_GPMC_CS))
#define GPMC_STAT_REG		(0x54)
#define GPMC_ERR_TYPE	   (0x48)
#define GPMC_VMA(offset) (gpmc_base + offset)
#define GPMC_CS_VMA(offset) (gpmc_data_vma + offset)
#define PADCFG_VMA(offset) (iomux_vma + offset)
#define GPMC_FCLK_DIV ((0) << 0)
#define TIME_GRAN_SCALE ((0) << 4)
#define WB_GPMC_BUSCYC_t  (7 * 6)
#define WB_GPMC_CS_t_o_n	(0)
#define WB_GPMC_ADV_t_o_n   (0)
#define WB_GPMC_OE_t_o_n	(0)
#define WB_GPMC_OE_t_o_f_f   (5 * 6)
#define WB_GPMC_WE_t_o_n	(1 * 6)
#define WB_GPMC_WE_t_o_f_f   (5 * 6)
#define WB_GPMC_RDS_ADJ   (2 * 6)
#define WB_GPMC_RD_t_a_c_c   (WB_GPMC_OE_t_o_f_f + WB_GPMC_RDS_ADJ)
#define WB_GPMC_WR_t_a_c_c  (WB_GPMC_BUSCYC_t)
#define DIR_OUT	0
#define DIR_INP	1
#define DRV_HI	1
#define DRV_LO	0
#define AS_CS_MASK	(0X7 << 8)
#define AS_CS_BADDR	 0x02
#define CSVALID_B (1 << 6)
#define GPIO_REVISION		0x000
#define GPIO_SYSCONFIG		0x010
#define GPIO_SYSSTATUS1		0x014
#define GPIO_IRQSTATUS1		0x018
#define GPIO_IRQENABLE1		0x01C
#define GPIO_IRQSTATUS2		0x028
#define GPIO_CTRL		0x030
#define GPIO_OE			0x034
#define GPIO_DATA_IN		0x038
#define GPIO_DATA_OUT		0x03C
#define GPIO_LEVELDETECT0	   0x040
#define GPIO_LEVELDETECT1	   0x044
#define GPIO_RISINGDETECT	   0x048
#define GPIO_FALLINGDETECT	  0x04c
#define GPIO_CLEAR_DATAOUT	0x090
#define GPIO_SET_DATAOUT	0x094
typedef struct   io2vma_tab_t;
static  io2vma_tab_t gpio_vma_tab[6] = ;
typedef struct   user_pad_cfg_t;
enum ;
#define GPIO_SLOTS 8
static user_pad_cfg_t user_pad_cfg[] = ;
#define GPIO_BANK(pin) (pin >> 5)
#define REG_WIDTH 32
#define GPIO_REG_VMA(pin_num, offset) \
(gpio_vma_tab[GPIO_BANK(pin_num)].virt_addr + offset)
#define GPIO_REG_MASK(pin_num) (1 << \
(pin_num - (GPIO_BANK(pin_num) * REG_WIDTH)))
#define OMAP_GPIO_BIT(pin_num, reg) \
((*((u32 *)GPIO_REG_VMA(pin_num, reg)) \
& GPIO_REG_MASK(pin_num)) ? 1 : 0)
#define RD_OMAP_GPIO_BIT(pin_num, v) OMAP_GPIO_BIT(pin_num, reg)
#define OMAP_SET_GPIO(pin_num) \
(*(u32 *)GPIO_REG_VMA(pin_num, GPIO_SET_DATAOUT) \
= GPIO_REG_MASK(pin_num))
#define OMAP_CLR_GPIO(pin_num) \
(*(u32 *)GPIO_REG_VMA(pin_num, GPIO_CLEAR_DATAOUT) \
= GPIO_REG_MASK(pin_num))
#define WR_OMAP_GPIO_BIT(pin_num, v) \
(v ? (*(u32 *)GPIO_REG_VMA(pin_num, \
GPIO_SET_DATAOUT) = GPIO_REG_MASK(pin_num)) \
: (*(u32 *)GPIO_REG_VMA(pin_num, \
GPIO_CLEAR_DATAOUT) = GPIO_REG_MASK(pin_num)))
typedef struct   omap_3430_mux_t;
#define PAD_AS_OUTIN (OMAP34XX_MUX_MODE4 | \
OMAP34XX_PIN_OUTPUT | OMAP34XX_PIN_INPUT)
omap_3430_mux_t omap_mux_pin_cfg[] = ;
