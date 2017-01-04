#define IIO_MAX_NAME_LENGTH 30
#define FORMAT_SCAN_ELEMENTS_DIR "%s:buffer0/scan_elements"
#define FORMAT_TYPE_FILE "%s_type"
const char *iio_dir = "/sys/bus/iio/devices/";
static int iioutils_break_up_name(const char *full_name,
char **generic_name)
struct iio_channel_info ;
inline int iioutils_get_type(unsigned *is_signed,
unsigned *bytes,
unsigned *bits_used,
unsigned *shift,
uint64_t *mask,
const char *device_dir,
const char *name,
const char *generic_name)
inline int iioutils_get_param_float(float *output,
const char *param_name,
const char *device_dir,
const char *name,
const char *generic_name)
inline void bsort_channel_array_by_index(struct iio_channel_info **ci_array,
int cnt)
inline int build_channel_array(const char *device_dir,
struct iio_channel_info **ci_array,
int *counter)
inline int find_type_by_name(const char *name, const char *type)
inline int _write_sysfs_int(char *filename, char *basedir, int val, int verify)
int write_sysfs_int(char *filename, char *basedir, int val)
int write_sysfs_int_and_verify(char *filename, char *basedir, int val)
int _write_sysfs_string(char *filename, char *basedir, char *val, int verify)
int write_sysfs_string_and_verify(char *filename, char *basedir, char *val)
int write_sysfs_string(char *filename, char *basedir, char *val)
int read_sysfs_posint(char *filename, char *basedir)
int read_sysfs_float(char *filename, char *basedir, float *val)
