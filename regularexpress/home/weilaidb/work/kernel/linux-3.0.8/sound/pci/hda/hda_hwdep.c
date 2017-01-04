struct hda_hint ;
static int verb_write_ioctl(struct hda_codec *codec,
struct hda_verb_ioctl __user *arg)
static int get_wcap_ioctl(struct hda_codec *codec,
struct hda_verb_ioctl __user *arg)
static int hda_hwdep_ioctl(struct snd_hwdep *hw, struct file *file,
unsigned int cmd, unsigned long arg)
static int hda_hwdep_ioctl_compat(struct snd_hwdep *hw, struct file *file,
unsigned int cmd, unsigned long arg)
static int hda_hwdep_open(struct snd_hwdep *hw, struct file *file)
static void clear_hwdep_elements(struct hda_codec *codec)
static void hwdep_free(struct snd_hwdep *hwdep)
int snd_hda_create_hwdep(struct hda_codec *codec)
static ssize_t power_on_acct_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t power_off_acct_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute power_attrs[] = ;
int snd_hda_hwdep_add_power_sysfs(struct hda_codec *codec)
static int clear_codec(struct hda_codec *codec)
static int reconfig_codec(struct hda_codec *codec)
static char *kstrndup_noeol(const char *src, size_t len)
#define CODEC_INFO_SHOW(type)					\
static ssize_t type##_show(struct device *dev,			\
struct device_attribute *attr,	\
char *buf)				\
#define CODEC_INFO_STR_SHOW(type)				\
static ssize_t type##_show(struct device *dev,			\
struct device_attribute *attr,	\
char *buf)		\
CODEC_INFO_SHOW(vendor_id);
CODEC_INFO_SHOW(subsystem_id);
CODEC_INFO_SHOW(revision_id);
CODEC_INFO_SHOW(afg);
CODEC_INFO_SHOW(mfg);
CODEC_INFO_STR_SHOW(vendor_name);
CODEC_INFO_STR_SHOW(chip_name);
CODEC_INFO_STR_SHOW(modelname);
#define CODEC_INFO_STORE(type)					\
static ssize_t type##_store(struct device *dev,			\
struct device_attribute *attr,	\
const char *buf, size_t count)	\
#define CODEC_INFO_STR_STORE(type)				\
static ssize_t type##_store(struct device *dev,			\
struct device_attribute *attr,	\
const char *buf, size_t count)	\
CODEC_INFO_STORE(vendor_id);
CODEC_INFO_STORE(subsystem_id);
CODEC_INFO_STORE(revision_id);
CODEC_INFO_STR_STORE(vendor_name);
CODEC_INFO_STR_STORE(chip_name);
CODEC_INFO_STR_STORE(modelname);
#define CODEC_ACTION_STORE(type)				\
static ssize_t type##_store(struct device *dev,			\
struct device_attribute *attr,	\
const char *buf, size_t count)	\
CODEC_ACTION_STORE(reconfig);
CODEC_ACTION_STORE(clear);
static ssize_t init_verbs_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static int parse_init_verbs(struct hda_codec *codec, const char *buf)
static ssize_t init_verbs_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t hints_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct hda_hint *get_hint(struct hda_codec *codec, const char *key)
static void remove_trail_spaces(char *str)
#define MAX_HINTS	1024
static int parse_hints(struct hda_codec *codec, const char *buf)
static ssize_t hints_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pin_configs_show(struct hda_codec *codec,
struct snd_array *list,
char *buf)
static ssize_t init_pin_configs_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t user_pin_configs_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t driver_pin_configs_show(struct device *dev,
struct device_attribute *attr,
char *buf)
#define MAX_PIN_CONFIGS		32
static int parse_user_pin_configs(struct hda_codec *codec, const char *buf)
static ssize_t user_pin_configs_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
#define CODEC_ATTR_RW(type) \
__ATTR(type, 0644, type##_show, type##_store)
#define CODEC_ATTR_RO(type) \
__ATTR_RO(type)
#define CODEC_ATTR_WO(type) \
__ATTR(type, 0200, NULL, type##_store)
static struct device_attribute codec_attrs[] = ;
int snd_hda_hwdep_add_sysfs(struct hda_codec *codec)
const char *snd_hda_get_hint(struct hda_codec *codec, const char *key)
EXPORT_SYMBOL_HDA(snd_hda_get_hint);
int snd_hda_get_bool_hint(struct hda_codec *codec, const char *key)
EXPORT_SYMBOL_HDA(snd_hda_get_bool_hint);
enum ;
static inline int strmatch(const char *a, const char *b)
static void parse_codec_mode(char *buf, struct hda_bus *bus,
struct hda_codec **codecp)
static void parse_pincfg_mode(char *buf, struct hda_bus *bus,
struct hda_codec **codecp)
static void parse_verb_mode(char *buf, struct hda_bus *bus,
struct hda_codec **codecp)
static void parse_hint_mode(char *buf, struct hda_bus *bus,
struct hda_codec **codecp)
static void parse_model_mode(char *buf, struct hda_bus *bus,
struct hda_codec **codecp)
static void parse_chip_name_mode(char *buf, struct hda_bus *bus,
struct hda_codec **codecp)
#define DEFINE_PARSE_ID_MODE(name) \
static void parse_##name##_mode(char *buf, struct hda_bus *bus, \
struct hda_codec **codecp) \
DEFINE_PARSE_ID_MODE(vendor_id);
DEFINE_PARSE_ID_MODE(subsystem_id);
DEFINE_PARSE_ID_MODE(revision_id);
struct hda_patch_item ;
static struct hda_patch_item patch_items[NUM_LINE_MODES] = ;
static int parse_line_mode(char *buf, struct hda_bus *bus)
static int get_line_from_fw(char *buf, int size, struct firmware *fw)
int snd_hda_load_patch(struct hda_bus *bus, const char *patch)
EXPORT_SYMBOL_HDA(snd_hda_load_patch);
