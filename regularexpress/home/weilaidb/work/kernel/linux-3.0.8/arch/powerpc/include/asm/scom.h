#define _ASM_POWERPC_SCOM_H
typedef void *scom_map_t;
#define SCOM_MAP_INVALID	(NULL)
struct scom_controller ;
extern const struct scom_controller *scom_controller;
static inline void scom_init(const struct scom_controller *controller)
static inline int scom_map_ok(scom_map_t map)
static inline scom_map_t scom_map(struct device_node *ctrl_dev,
u64 reg, u64 count)
struct device_node *scom_find_parent(struct device_node *dev);
extern scom_map_t scom_map_device(struct device_node *dev, int index);
static inline void scom_unmap(scom_map_t map)
static inline u64 scom_read(scom_map_t map, u32 reg)
static inline void scom_write(scom_map_t map, u32 reg, u64 value)
