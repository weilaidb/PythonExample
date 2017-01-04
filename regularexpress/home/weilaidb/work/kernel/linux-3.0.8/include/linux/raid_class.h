struct raid_template ;
struct raid_function_template ;
enum raid_state ;
enum raid_level ;
struct raid_data ;
#define RAID_MAX_RESYNC		(10000)
#define DEFINE_RAID_ATTRIBUTE(type, attr)				      \
static inline void							      \
raid_set_##attr(struct raid_template *r, struct device *dev, type value) 									      \
static inline type							      \
raid_get_##attr(struct raid_template *r, struct device *dev)
DEFINE_RAID_ATTRIBUTE(enum raid_level, level)
DEFINE_RAID_ATTRIBUTE(int, resync)
DEFINE_RAID_ATTRIBUTE(enum raid_state, state)
struct raid_template *raid_class_attach(struct raid_function_template *);
void raid_class_release(struct raid_template *);
int __must_check raid_component_add(struct raid_template *, struct device *,
struct device *);
