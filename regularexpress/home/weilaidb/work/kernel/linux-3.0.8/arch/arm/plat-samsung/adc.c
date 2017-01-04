enum s3c_cpu_type ;
struct s3c_adc_client ;
struct adc_device ;
static struct adc_device *adc_dev;
static LIST_HEAD(adc_pending);
#define adc_dbg(_adc, msg...) dev_dbg(&(_adc)->pdev->dev, msg)
static inline void s3c_adc_convert(struct adc_device *adc)
static inline void s3c_adc_select(struct adc_device *adc,
struct s3c_adc_client *client)
static void s3c_adc_dbgshow(struct adc_device *adc)
static void s3c_adc_try(struct adc_device *adc)
int s3c_adc_start(struct s3c_adc_client *client,
unsigned int channel, unsigned int nr_samples)
EXPORT_SYMBOL_GPL(s3c_adc_start);
static void s3c_convert_done(struct s3c_adc_client *client,
unsigned v, unsigned u, unsigned *left)
int s3c_adc_read(struct s3c_adc_client *client, unsigned int ch)
EXPORT_SYMBOL_GPL(s3c_adc_read);
static void s3c_adc_default_select(struct s3c_adc_client *client,
unsigned select)
struct s3c_adc_client *s3c_adc_register(struct platform_device *pdev,
void (*select)(struct s3c_adc_client *client,
unsigned int selected),
void (*conv)(struct s3c_adc_client *client,
unsigned d0, unsigned d1,
unsigned *samples_left),
unsigned int is_ts)
EXPORT_SYMBOL_GPL(s3c_adc_register);
void s3c_adc_release(struct s3c_adc_client *client)
EXPORT_SYMBOL_GPL(s3c_adc_release);
static irqreturn_t s3c_adc_irq(int irq, void *pw)
static int s3c_adc_probe(struct platform_device *pdev)
static int __devexit s3c_adc_remove(struct platform_device *pdev)
static int s3c_adc_suspend(struct platform_device *pdev, pm_message_t state)
static int s3c_adc_resume(struct platform_device *pdev)
#define s3c_adc_suspend NULL
#define s3c_adc_resume NULL
static struct platform_device_id s3c_adc_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, s3c_adc_driver_ids);
static struct platform_driver s3c_adc_driver = ;
static int __init adc_init(void)
arch_initcall(adc_init);
