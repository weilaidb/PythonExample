#define _LINUX_FIRMWARE_H
#define FW_ACTION_NOHOTPLUG 0
#define FW_ACTION_HOTPLUG 1
struct firmware ;
struct device;
struct builtin_fw ;
#define __fw_concat1(x, y) x##y
#define __fw_concat(x, y) __fw_concat1(x, y)
#define DECLARE_BUILTIN_FIRMWARE(name, blob)				     \
DECLARE_BUILTIN_FIRMWARE_SIZE(name, &(blob), sizeof(blob))
#define DECLARE_BUILTIN_FIRMWARE_SIZE(name, blob, size)			     \
static const struct builtin_fw __fw_concat(__builtin_fw,__COUNTER__) \
__used __section(.builtin_fw) =
#if defined(CONFIG_FW_LOADER) || (defined(CONFIG_FW_LOADER_MODULE) && defined(MODULE))
int request_firmware(const struct firmware **fw, const char *name,
struct device *device);
int request_firmware_nowait(
struct module *module, bool uevent,
const char *name, struct device *device, gfp_t gfp, void *context,
void (*cont)(const struct firmware *fw, void *context));
void release_firmware(const struct firmware *fw);
static inline int request_firmware(const struct firmware **fw,
const char *name,
struct device *device)
static inline int request_firmware_nowait(
struct module *module, bool uevent,
const char *name, struct device *device, gfp_t gfp, void *context,
void (*cont)(const struct firmware *fw, void *context))
static inline void release_firmware(const struct firmware *fw)
