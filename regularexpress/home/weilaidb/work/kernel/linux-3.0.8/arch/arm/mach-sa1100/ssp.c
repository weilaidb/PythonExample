#define TIMEOUT 100000
static irqreturn_t ssp_interrupt(int irq, void *dev_id)
int ssp_write_word(u16 data)
int ssp_read_word(u16 *data)
int ssp_flush(void)
void ssp_enable(void)
void ssp_disable(void)
void ssp_save_state(struct ssp_state *ssp)
void ssp_restore_state(struct ssp_state *ssp)
int ssp_init(void)
void ssp_exit(void)
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("SA11x0 SSP PIO driver");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ssp_write_word);
EXPORT_SYMBOL(ssp_read_word);
EXPORT_SYMBOL(ssp_flush);
EXPORT_SYMBOL(ssp_enable);
EXPORT_SYMBOL(ssp_disable);
EXPORT_SYMBOL(ssp_save_state);
EXPORT_SYMBOL(ssp_restore_state);
EXPORT_SYMBOL(ssp_init);
EXPORT_SYMBOL(ssp_exit);
