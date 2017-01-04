#define KEY_SWITCH		0x0001
#define ENCLOSURE_SWITCH	0x0002
#define THERMAL_SENSOR		0x0003
#define LID_STATUS		0x0004
#define POWER_SOURCE		0x0005
#define BATTERY_VOLTAGE		0x0006
#define BATTERY_REMAINING	0x0007
#define BATTERY_PERCENTAGE	0x0008
#define EPOW_SENSOR		0x0009
#define BATTERY_CYCLESTATE	0x000a
#define BATTERY_CHARGING	0x000b
#define IBM_SURVEILLANCE	0x2328
#define IBM_FANRPM		0x2329
#define IBM_VOLTAGE		0x232a
#define IBM_DRCONNECTOR		0x232b
#define IBM_POWERSUPPLY		0x232c
#define SENSOR_CRITICAL_HIGH	13
#define SENSOR_WARNING_HIGH	12
#define SENSOR_NORMAL		11
#define SENSOR_WARNING_LOW	10
#define SENSOR_CRITICAL_LOW	 9
#define SENSOR_SUCCESS		 0
#define SENSOR_HW_ERROR		-1
#define SENSOR_BUSY		-2
#define SENSOR_NOT_EXIST	-3
#define SENSOR_DR_ENTITY	-9000
#define LOC_SCSI_DEV_ADDR	'A'
#define LOC_SCSI_DEV_LOC	'B'
#define LOC_CPU			'C'
#define LOC_DISKETTE		'D'
#define LOC_ETHERNET		'E'
#define LOC_FAN			'F'
#define LOC_GRAPHICS		'G'
#define LOC_IO_ADAPTER		'I'
#define LOC_KEYBOARD		'K'
#define LOC_LCD			'L'
#define LOC_MEMORY		'M'
#define LOC_NV_MEMORY		'N'
#define LOC_MOUSE		'O'
#define LOC_PLANAR		'P'
#define LOC_OTHER_IO		'Q'
#define LOC_PARALLEL		'R'
#define LOC_SERIAL		'S'
#define LOC_DEAD_RING		'T'
#define LOC_RACKMOUNTED		'U'
#define LOC_VOLTAGE		'V'
#define LOC_SWITCH_ADAPTER	'W'
#define LOC_OTHER		'X'
#define LOC_FIRMWARE		'Y'
#define LOC_SCSI		'Z'
#define TONE_FREQUENCY		0x0001
#define TONE_VOLUME		0x0002
#define SYSTEM_POWER_STATE	0x0003
#define WARNING_LIGHT		0x0004
#define DISK_ACTIVITY_LIGHT	0x0005
#define HEX_DISPLAY_UNIT	0x0006
#define BATTERY_WARNING_TIME	0x0007
#define CONDITION_CYCLE_REQUEST	0x0008
#define SURVEILLANCE_INDICATOR	0x2328
#define DR_ACTION		0x2329
#define DR_INDICATOR		0x232a
#define MAX_SENSORS		 17
#define MAX_LINELENGTH          256
#define SENSOR_PREFIX		"ibm,sensor-"
#define cel_to_fahr(x)		((x*9/5)+32)
static struct rtas_sensors sensors;
static struct device_node *rtas_node = NULL;
static unsigned long power_on_time = 0;
static char progress_led[MAX_LINELENGTH];
static unsigned long rtas_tone_frequency = 1000;
static unsigned long rtas_tone_volume = 0;
struct individual_sensor ;
struct rtas_sensors ;
static int ppc_rtas_sensors_show(struct seq_file *m, void *v);
static int ppc_rtas_clock_show(struct seq_file *m, void *v);
static ssize_t ppc_rtas_clock_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos);
static int ppc_rtas_progress_show(struct seq_file *m, void *v);
static ssize_t ppc_rtas_progress_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos);
static int ppc_rtas_poweron_show(struct seq_file *m, void *v);
static ssize_t ppc_rtas_poweron_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos);
static ssize_t ppc_rtas_tone_freq_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos);
static int ppc_rtas_tone_freq_show(struct seq_file *m, void *v);
static ssize_t ppc_rtas_tone_volume_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos);
static int ppc_rtas_tone_volume_show(struct seq_file *m, void *v);
static int ppc_rtas_rmo_buf_show(struct seq_file *m, void *v);
static int sensors_open(struct inode *inode, struct file *file)
static const struct file_operations ppc_rtas_sensors_operations = ;
static int poweron_open(struct inode *inode, struct file *file)
static const struct file_operations ppc_rtas_poweron_operations = ;
static int progress_open(struct inode *inode, struct file *file)
static const struct file_operations ppc_rtas_progress_operations = ;
static int clock_open(struct inode *inode, struct file *file)
static const struct file_operations ppc_rtas_clock_operations = ;
static int tone_freq_open(struct inode *inode, struct file *file)
static const struct file_operations ppc_rtas_tone_freq_operations = ;
static int tone_volume_open(struct inode *inode, struct file *file)
static const struct file_operations ppc_rtas_tone_volume_operations = ;
static int rmo_buf_open(struct inode *inode, struct file *file)
static const struct file_operations ppc_rtas_rmo_buf_ops = ;
static int ppc_rtas_find_all_sensors(void);
static void ppc_rtas_process_sensor(struct seq_file *m,
struct individual_sensor *s, int state, int error, const char *loc);
static char *ppc_rtas_process_error(int error);
static void get_location_code(struct seq_file *m,
struct individual_sensor *s, const char *loc);
static void check_location_string(struct seq_file *m, const char *c);
static void check_location(struct seq_file *m, const char *c);
static int __init proc_rtas_init(void)
__initcall(proc_rtas_init);
static int parse_number(const char __user *p, size_t count, unsigned long *val)
static ssize_t ppc_rtas_poweron_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos)
static int ppc_rtas_poweron_show(struct seq_file *m, void *v)
static ssize_t ppc_rtas_progress_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos)
static int ppc_rtas_progress_show(struct seq_file *m, void *v)
static ssize_t ppc_rtas_clock_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos)
static int ppc_rtas_clock_show(struct seq_file *m, void *v)
static int ppc_rtas_sensors_show(struct seq_file *m, void *v)
static int ppc_rtas_find_all_sensors(void)
static char *ppc_rtas_process_error(int error)
static void ppc_rtas_process_sensor(struct seq_file *m,
struct individual_sensor *s, int state, int error, const char *loc)
static void check_location(struct seq_file *m, const char *c)
static void check_location_string(struct seq_file *m, const char *c)
static void get_location_code(struct seq_file *m, struct individual_sensor *s,
const char *loc)
static ssize_t ppc_rtas_tone_freq_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos)
static int ppc_rtas_tone_freq_show(struct seq_file *m, void *v)
static ssize_t ppc_rtas_tone_volume_write(struct file *file,
const char __user *buf, size_t count, loff_t *ppos)
static int ppc_rtas_tone_volume_show(struct seq_file *m, void *v)
#define RMO_READ_BUF_MAX 30
static int ppc_rtas_rmo_buf_show(struct seq_file *m, void *v)
