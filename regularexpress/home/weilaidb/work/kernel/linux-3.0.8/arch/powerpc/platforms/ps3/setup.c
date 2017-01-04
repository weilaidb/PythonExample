#if defined(DEBUG)
#define DBG udbg_printf
#define DBG pr_debug
DEFINE_MUTEX(ps3_gpu_mutex);
EXPORT_SYMBOL_GPL(ps3_gpu_mutex);
static union ps3_firmware_version ps3_firmware_version;
void ps3_get_firmware_version(union ps3_firmware_version *v)
EXPORT_SYMBOL_GPL(ps3_get_firmware_version);
int ps3_compare_firmware_version(u16 major, u16 minor, u16 rev)
EXPORT_SYMBOL_GPL(ps3_compare_firmware_version);
static void ps3_power_save(void)
static void ps3_restart(char *cmd)
static void ps3_power_off(void)
static void ps3_halt(void)
static void ps3_panic(char *str)
#if defined(CONFIG_FB_PS3) || defined(CONFIG_FB_PS3_MODULE) || \
defined(CONFIG_PS3_FLASH) || defined(CONFIG_PS3_FLASH_MODULE)
static void __init prealloc(struct ps3_prealloc *p)
#if defined(CONFIG_FB_PS3) || defined(CONFIG_FB_PS3_MODULE)
struct ps3_prealloc ps3fb_videomemory = ;
EXPORT_SYMBOL_GPL(ps3fb_videomemory);
#define prealloc_ps3fb_videomemory()	prealloc(&ps3fb_videomemory)
static int __init early_parse_ps3fb(char *p)
early_param("ps3fb", early_parse_ps3fb);
#define prealloc_ps3fb_videomemory()	do  while (0)
#if defined(CONFIG_PS3_FLASH) || defined(CONFIG_PS3_FLASH_MODULE)
struct ps3_prealloc ps3flash_bounce_buffer = ;
EXPORT_SYMBOL_GPL(ps3flash_bounce_buffer);
#define prealloc_ps3flash_bounce_buffer()	prealloc(&ps3flash_bounce_buffer)
static int __init early_parse_ps3flash(char *p)
early_param("ps3flash", early_parse_ps3flash);
#define prealloc_ps3flash_bounce_buffer()	do  while (0)
static int ps3_set_dabr(unsigned long dabr)
static void __init ps3_setup_arch(void)
static void __init ps3_progress(char *s, unsigned short hex)
static int __init ps3_probe(void)
#if defined(CONFIG_KEXEC)
static void ps3_kexec_cpu_down(int crash_shutdown, int secondary)
define_machine(ps3) ;
