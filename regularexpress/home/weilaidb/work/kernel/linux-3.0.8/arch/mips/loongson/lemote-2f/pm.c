#define I8042_KBD_IRQ		1
#define I8042_CTR_KBDINT	0x01
#define I8042_CTR_KBDDIS	0x10
static unsigned char i8042_ctr;
static int i8042_enable_kbd_port(void)
void setup_wakeup_events(void)
static struct delayed_work lid_task;
static int initialized;
sci_handler yeeloong_report_lid_status;
EXPORT_SYMBOL(yeeloong_report_lid_status);
static void yeeloong_lid_update_task(struct work_struct *work)
int wakeup_loongson(void)
void __weak mach_suspend(void)
void __weak mach_resume(void)
