#define __LINUX_MFD_PCF50633_CORE_H
struct pcf50633;
#define PCF50633_NUM_REGULATORS	11
struct pcf50633_platform_data ;
struct pcf50633_irq ;
int pcf50633_register_irq(struct pcf50633 *pcf, int irq,
void (*handler) (int, void *), void *data);
int pcf50633_free_irq(struct pcf50633 *pcf, int irq);
int pcf50633_irq_mask(struct pcf50633 *pcf, int irq);
int pcf50633_irq_unmask(struct pcf50633 *pcf, int irq);
int pcf50633_irq_mask_get(struct pcf50633 *pcf, int irq);
int pcf50633_read_block(struct pcf50633 *, u8 reg,
int nr_regs, u8 *data);
int pcf50633_write_block(struct pcf50633 *pcf, u8 reg,
int nr_regs, u8 *data);
u8 pcf50633_reg_read(struct pcf50633 *, u8 reg);
int pcf50633_reg_write(struct pcf50633 *pcf, u8 reg, u8 val);
int pcf50633_reg_set_bit_mask(struct pcf50633 *pcf, u8 reg, u8 mask, u8 val);
int pcf50633_reg_clear_bits(struct pcf50633 *pcf, u8 reg, u8 bits);
#define PCF50633_REG_INT1	0x02
#define PCF50633_REG_INT2	0x03
#define PCF50633_REG_INT3	0x04
#define PCF50633_REG_INT4	0x05
#define PCF50633_REG_INT5	0x06
#define PCF50633_REG_INT1M	0x07
#define PCF50633_REG_INT2M	0x08
#define PCF50633_REG_INT3M	0x09
#define PCF50633_REG_INT4M	0x0a
#define PCF50633_REG_INT5M	0x0b
enum ;
struct pcf50633 ;
enum pcf50633_reg_int1 ;
enum pcf50633_reg_int2 ;
enum pcf50633_reg_int3 ;
enum pcf50633_reg_int4 ;
enum pcf50633_reg_int5 ;
#define PCF50633_REG_OOCSHDWN	0x0c
#define PCF50633_REG_LEDOUT 0x28
#define PCF50633_REG_LEDENA 0x29
#define PCF50633_REG_LEDCTL 0x2a
#define PCF50633_REG_LEDDIM 0x2b
static inline struct pcf50633 *dev_to_pcf50633(struct device *dev)
int pcf50633_irq_init(struct pcf50633 *pcf, int irq);
void pcf50633_irq_free(struct pcf50633 *pcf);
int pcf50633_irq_suspend(struct pcf50633 *pcf);
int pcf50633_irq_resume(struct pcf50633 *pcf);
