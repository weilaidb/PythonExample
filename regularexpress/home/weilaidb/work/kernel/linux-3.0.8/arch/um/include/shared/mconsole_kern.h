#define __MCONSOLE_KERN_H__
struct mconsole_entry ;
struct mc_device ;
#define CONFIG_CHUNK(str, size, current, chunk, end) \
do  while(0)
extern void mconsole_register_dev(struct mc_device *new);
static inline void mconsole_register_dev(struct mc_device *new)
