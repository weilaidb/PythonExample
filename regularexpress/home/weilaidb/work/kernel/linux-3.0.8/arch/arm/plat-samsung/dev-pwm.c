#define TIMER_RESOURCE_SIZE (1)
#define TIMER_RESOURCE(_tmr, _irq)			\
(struct resource [TIMER_RESOURCE_SIZE])
#define DEFINE_S3C_TIMER(_tmr_no, _irq)			\
.name		= "s3c24xx-pwm",		\
.id		= _tmr_no,			\
.num_resources	= TIMER_RESOURCE_SIZE,		\
.resource	= TIMER_RESOURCE(_tmr_no, _irq),	\
struct platform_device s3c_device_timer[] = ;
EXPORT_SYMBOL(s3c_device_timer);
