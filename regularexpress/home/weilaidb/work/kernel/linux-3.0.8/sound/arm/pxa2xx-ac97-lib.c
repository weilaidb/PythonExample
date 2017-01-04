static DEFINE_MUTEX(car_mutex);
static DECLARE_WAIT_QUEUE_HEAD(gsr_wq);
static volatile long gsr_bits;
static struct clk *ac97_clk;
static struct clk *ac97conf_clk;
static int reset_gpio;
extern void pxa27x_assert_ac97reset(int reset_gpio, int on);
unsigned short pxa2xx_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_read);
void pxa2xx_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_write);
static inline void pxa_ac97_warm_pxa25x(void)
static inline void pxa_ac97_cold_pxa25x(void)
static inline void pxa_ac97_warm_pxa27x(void)
static inline void pxa_ac97_cold_pxa27x(void)
static inline void pxa_ac97_warm_pxa3xx(void)
static inline void pxa_ac97_cold_pxa3xx(void)
bool pxa2xx_ac97_try_warm_reset(struct snd_ac97 *ac97)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_try_warm_reset);
bool pxa2xx_ac97_try_cold_reset(struct snd_ac97 *ac97)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_try_cold_reset);
void pxa2xx_ac97_finish_reset(struct snd_ac97 *ac97)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_finish_reset);
static irqreturn_t pxa2xx_ac97_irq(int irq, void *dev_id)
int pxa2xx_ac97_hw_suspend(void)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_hw_suspend);
int pxa2xx_ac97_hw_resume(void)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_hw_resume);
int __devinit pxa2xx_ac97_hw_probe(struct platform_device *dev)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_hw_probe);
void pxa2xx_ac97_hw_remove(struct platform_device *dev)
EXPORT_SYMBOL_GPL(pxa2xx_ac97_hw_remove);
MODULE_AUTHOR("Nicolas Pitre");
MODULE_DESCRIPTION("Intel/Marvell PXA sound library");
MODULE_LICENSE("GPL");
