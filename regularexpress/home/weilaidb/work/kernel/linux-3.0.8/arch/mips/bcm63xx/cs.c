static DEFINE_SPINLOCK(bcm63xx_cs_lock);
static int is_valid_cs(unsigned int cs)
int bcm63xx_set_cs_base(unsigned int cs, u32 base, unsigned int size)
EXPORT_SYMBOL(bcm63xx_set_cs_base);
int bcm63xx_set_cs_timing(unsigned int cs, unsigned int wait,
unsigned int setup, unsigned int hold)
EXPORT_SYMBOL(bcm63xx_set_cs_timing);
int bcm63xx_set_cs_param(unsigned int cs, u32 params)
EXPORT_SYMBOL(bcm63xx_set_cs_param);
int bcm63xx_set_cs_status(unsigned int cs, int enable)
EXPORT_SYMBOL(bcm63xx_set_cs_status);
