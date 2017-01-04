#define SIMPLE_SHOW_STORE(name, get, set)				\
static ssize_t ath5k_attr_show_##name(struct device *dev,		\
struct device_attribute *attr,			\
char *buf)					\
\
\
static ssize_t ath5k_attr_store_##name(struct device *dev,		\
struct device_attribute *attr,			\
const char *buf, size_t count)			\
\
static DEVICE_ATTR(name, S_IRUGO | S_IWUSR,				\
ath5k_attr_show_##name, ath5k_attr_store_##name)
#define SIMPLE_SHOW(name, get)						\
static ssize_t ath5k_attr_show_##name(struct device *dev,		\
struct device_attribute *attr,			\
char *buf)					\
\
static DEVICE_ATTR(name, S_IRUGO, ath5k_attr_show_##name, NULL)
SIMPLE_SHOW_STORE(ani_mode, sc->ani_state.ani_mode, ath5k_ani_init);
SIMPLE_SHOW_STORE(noise_immunity_level, sc->ani_state.noise_imm_level,
ath5k_ani_set_noise_immunity_level);
SIMPLE_SHOW_STORE(spur_level, sc->ani_state.spur_level,
ath5k_ani_set_spur_immunity_level);
SIMPLE_SHOW_STORE(firstep_level, sc->ani_state.firstep_level,
ath5k_ani_set_firstep_level);
SIMPLE_SHOW_STORE(ofdm_weak_signal_detection, sc->ani_state.ofdm_weak_sig,
ath5k_ani_set_ofdm_weak_signal_detection);
SIMPLE_SHOW_STORE(cck_weak_signal_detection, sc->ani_state.cck_weak_sig,
ath5k_ani_set_cck_weak_signal_detection);
SIMPLE_SHOW(spur_level_max, sc->ani_state.max_spur_level);
static ssize_t ath5k_attr_show_noise_immunity_level_max(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(noise_immunity_level_max, S_IRUGO,
ath5k_attr_show_noise_immunity_level_max, NULL);
static ssize_t ath5k_attr_show_firstep_level_max(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(firstep_level_max, S_IRUGO,
ath5k_attr_show_firstep_level_max, NULL);
static struct attribute *ath5k_sysfs_entries_ani[] = ;
static struct attribute_group ath5k_attribute_group_ani = ;
int
ath5k_sysfs_register(struct ath5k_softc *sc)
void
ath5k_sysfs_unregister(struct ath5k_softc *sc)
