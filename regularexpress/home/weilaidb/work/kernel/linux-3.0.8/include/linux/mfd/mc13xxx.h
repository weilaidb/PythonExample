#define __LINUX_MFD_MC13XXX_H
struct mc13xxx;
void mc13xxx_lock(struct mc13xxx *mc13xxx);
void mc13xxx_unlock(struct mc13xxx *mc13xxx);
int mc13xxx_reg_read(struct mc13xxx *mc13xxx, unsigned int offset, u32 *val);
int mc13xxx_reg_write(struct mc13xxx *mc13xxx, unsigned int offset, u32 val);
int mc13xxx_reg_rmw(struct mc13xxx *mc13xxx, unsigned int offset,
u32 mask, u32 val);
int mc13xxx_get_flags(struct mc13xxx *mc13xxx);
int mc13xxx_irq_request(struct mc13xxx *mc13xxx, int irq,
irq_handler_t handler, const char *name, void *dev);
int mc13xxx_irq_request_nounmask(struct mc13xxx *mc13xxx, int irq,
irq_handler_t handler, const char *name, void *dev);
int mc13xxx_irq_free(struct mc13xxx *mc13xxx, int irq, void *dev);
int mc13xxx_irq_mask(struct mc13xxx *mc13xxx, int irq);
int mc13xxx_irq_unmask(struct mc13xxx *mc13xxx, int irq);
int mc13xxx_irq_status(struct mc13xxx *mc13xxx, int irq,
int *enabled, int *pending);
int mc13xxx_irq_ack(struct mc13xxx *mc13xxx, int irq);
int mc13xxx_get_flags(struct mc13xxx *mc13xxx);
#define MC13XXX_IRQ_ADCDONE	0
#define MC13XXX_IRQ_ADCBISDONE	1
#define MC13XXX_IRQ_TS		2
#define MC13XXX_IRQ_CHGDET	6
#define MC13XXX_IRQ_CHGREV	8
#define MC13XXX_IRQ_CHGSHORT	9
#define MC13XXX_IRQ_CCCV	10
#define MC13XXX_IRQ_CHGCURR	11
#define MC13XXX_IRQ_BPON	12
#define MC13XXX_IRQ_LOBATL	13
#define MC13XXX_IRQ_LOBATH	14
#define MC13XXX_IRQ_1HZ		24
#define MC13XXX_IRQ_TODA	25
#define MC13XXX_IRQ_SYSRST	30
#define MC13XXX_IRQ_RTCRST	31
#define MC13XXX_IRQ_PC		32
#define MC13XXX_IRQ_WARM	33
#define MC13XXX_IRQ_MEMHLD	34
#define MC13XXX_IRQ_THWARNL	36
#define MC13XXX_IRQ_THWARNH	37
#define MC13XXX_IRQ_CLK		38
#define MC13XXX_NUM_IRQ		46
struct regulator_init_data;
struct mc13xxx_regulator_init_data ;
struct mc13xxx_regulator_platform_data ;
struct mc13xxx_led_platform_data ;
struct mc13xxx_leds_platform_data ;
struct mc13xxx_platform_data ;
