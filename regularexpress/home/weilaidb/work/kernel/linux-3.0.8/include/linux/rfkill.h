#define __RFKILL_H
#define RFKILL_STATE_SOFT_BLOCKED	0
#define RFKILL_STATE_UNBLOCKED		1
#define RFKILL_STATE_HARD_BLOCKED	2
enum rfkill_type ;
enum rfkill_operation ;
struct rfkill_event  __attribute__((packed));
#define RFKILL_EVENT_SIZE_V1	8
#define RFKILL_IOC_MAGIC	'R'
#define RFKILL_IOC_NOINPUT	1
#define RFKILL_IOCTL_NOINPUT	_IO(RFKILL_IOC_MAGIC, RFKILL_IOC_NOINPUT)
enum rfkill_user_states ;
#undef RFKILL_STATE_SOFT_BLOCKED
#undef RFKILL_STATE_UNBLOCKED
#undef RFKILL_STATE_HARD_BLOCKED
struct rfkill;
struct rfkill_ops ;
#if defined(CONFIG_RFKILL) || defined(CONFIG_RFKILL_MODULE)
struct rfkill * __must_check rfkill_alloc(const char *name,
struct device *parent,
const enum rfkill_type type,
const struct rfkill_ops *ops,
void *ops_data);
int __must_check rfkill_register(struct rfkill *rfkill);
void rfkill_pause_polling(struct rfkill *rfkill);
void rfkill_resume_polling(struct rfkill *rfkill);
void rfkill_unregister(struct rfkill *rfkill);
void rfkill_destroy(struct rfkill *rfkill);
bool rfkill_set_hw_state(struct rfkill *rfkill, bool blocked);
bool rfkill_set_sw_state(struct rfkill *rfkill, bool blocked);
void rfkill_init_sw_state(struct rfkill *rfkill, bool blocked);
void rfkill_set_states(struct rfkill *rfkill, bool sw, bool hw);
bool rfkill_blocked(struct rfkill *rfkill);
static inline struct rfkill * __must_check
rfkill_alloc(const char *name,
struct device *parent,
const enum rfkill_type type,
const struct rfkill_ops *ops,
void *ops_data)
static inline int __must_check rfkill_register(struct rfkill *rfkill)
static inline void rfkill_pause_polling(struct rfkill *rfkill)
static inline void rfkill_resume_polling(struct rfkill *rfkill)
static inline void rfkill_unregister(struct rfkill *rfkill)
static inline void rfkill_destroy(struct rfkill *rfkill)
static inline bool rfkill_set_hw_state(struct rfkill *rfkill, bool blocked)
static inline bool rfkill_set_sw_state(struct rfkill *rfkill, bool blocked)
static inline void rfkill_init_sw_state(struct rfkill *rfkill, bool blocked)
static inline void rfkill_set_states(struct rfkill *rfkill, bool sw, bool hw)
static inline bool rfkill_blocked(struct rfkill *rfkill)
