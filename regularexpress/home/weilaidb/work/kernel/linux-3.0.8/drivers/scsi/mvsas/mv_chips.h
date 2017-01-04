#define _MV_CHIPS_H_
#define mr32(reg)	readl(regs + reg)
#define mw32(reg, val)	writel((val), regs + reg)
#define mw32_f(reg, val)	do  while (0)
#define iow32(reg, val) 	outl(val, (unsigned long)(regs + reg))
#define ior32(reg) 		inl((unsigned long)(regs + reg))
#define iow16(reg, val) 	outw((unsigned long)(val, regs + reg))
#define ior16(reg) 		inw((unsigned long)(regs + reg))
#define iow8(reg, val) 		outb((unsigned long)(val, regs + reg))
#define ior8(reg) 		inb((unsigned long)(regs + reg))
static inline u32 mvs_cr32(struct mvs_info *mvi, u32 addr)
static inline void mvs_cw32(struct mvs_info *mvi, u32 addr, u32 val)
static inline u32 mvs_read_phy_ctl(struct mvs_info *mvi, u32 port)
static inline void mvs_write_phy_ctl(struct mvs_info *mvi, u32 port, u32 val)
static inline u32 mvs_read_port(struct mvs_info *mvi, u32 off,
u32 off2, u32 port)
static inline void mvs_write_port(struct mvs_info *mvi, u32 off, u32 off2,
u32 port, u32 val)
static inline u32 mvs_read_port_cfg_data(struct mvs_info *mvi, u32 port)
static inline void mvs_write_port_cfg_data(struct mvs_info *mvi,
u32 port, u32 val)
static inline void mvs_write_port_cfg_addr(struct mvs_info *mvi,
u32 port, u32 addr)
static inline u32 mvs_read_port_vsr_data(struct mvs_info *mvi, u32 port)
static inline void mvs_write_port_vsr_data(struct mvs_info *mvi,
u32 port, u32 val)
static inline void mvs_write_port_vsr_addr(struct mvs_info *mvi,
u32 port, u32 addr)
static inline u32 mvs_read_port_irq_stat(struct mvs_info *mvi, u32 port)
static inline void mvs_write_port_irq_stat(struct mvs_info *mvi,
u32 port, u32 val)
static inline u32 mvs_read_port_irq_mask(struct mvs_info *mvi, u32 port)
static inline void mvs_write_port_irq_mask(struct mvs_info *mvi,
u32 port, u32 val)
static inline void __devinit mvs_phy_hacks(struct mvs_info *mvi)
static inline void mvs_int_sata(struct mvs_info *mvi)
static inline void mvs_int_full(struct mvs_info *mvi)
static inline void mvs_start_delivery(struct mvs_info *mvi, u32 tx)
static inline u32 mvs_rx_update(struct mvs_info *mvi)
static inline u32 mvs_get_prd_size(void)
static inline u32 mvs_get_prd_count(void)
static inline void mvs_show_pcie_usage(struct mvs_info *mvi)
static inline u32 mvs_hw_max_link_rate(void)
