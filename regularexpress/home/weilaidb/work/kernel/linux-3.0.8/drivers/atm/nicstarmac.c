typedef void __iomem *virt_addr_t;
#define CYCLE_DELAY 5
#define osp_MicroDelay(microsec)
#define CS_HIGH		0x0002
#define CS_LOW		0x0000
#define CLK_HIGH	0x0004
#define CLK_LOW		0x0000
#define SI_HIGH		0x0001
#define SI_LOW		0x0000
static u_int32_t readtab[] = ;
static u_int32_t clocktab[] = ;
#define NICSTAR_REG_WRITE(bs, reg, val) \
while ( readl(bs + STAT) & 0x0200 ) ; \
writel((val),(base)+(reg))
#define NICSTAR_REG_READ(bs, reg) \
readl((base)+(reg))
#define NICSTAR_REG_GENERAL_PURPOSE GP
static u_int8_t read_eprom_byte(virt_addr_t base, u_int8_t offset)
static void nicstar_init_eprom(virt_addr_t base)
static void
nicstar_read_eprom(virt_addr_t base,
u_int8_t prom_offset, u_int8_t * buffer, u_int32_t nbytes)
