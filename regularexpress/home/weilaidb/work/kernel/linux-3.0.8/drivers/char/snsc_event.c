static struct subch_data_s *event_sd;
void scdrv_event(unsigned long);
DECLARE_TASKLET(sn_sysctl_event, scdrv_event, 0);
static irqreturn_t
scdrv_event_interrupt(int irq, void *subch_data)
static int
scdrv_parse_event(char *event, int *src, int *code, int *esp_code, char *desc)
static char *
scdrv_event_severity(int code)
static void
scdrv_dispatch_event(char *event, int len)
void
scdrv_event(unsigned long dummy)
void
scdrv_event_init(struct sysctl_data_s *scd)
