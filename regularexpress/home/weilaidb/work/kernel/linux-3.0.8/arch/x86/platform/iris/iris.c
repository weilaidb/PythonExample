#define IRIS_GIO_BASE		0x340
#define IRIS_GIO_INPUT		IRIS_GIO_BASE
#define IRIS_GIO_OUTPUT		(IRIS_GIO_BASE + 1)
#define IRIS_GIO_PULSE		0x80
#define IRIS_GIO_REST		0x00
#define IRIS_GIO_NODEV		0xff
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sébastien Hinderer <Sebastien.Hinderer@ens-lyon.org>");
MODULE_DESCRIPTION("A power_off handler for Iris devices from EuroBraille");
MODULE_SUPPORTED_DEVICE("Eurobraille/Iris");
static int force;
module_param(force, bool, 0);
MODULE_PARM_DESC(force, "Set to one to force poweroff handler installation.");
static void (*old_pm_power_off)(void);
static void iris_power_off(void)
static int iris_init(void)
static void iris_exit(void)
module_init(iris_init);
module_exit(iris_exit);
