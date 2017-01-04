#define _ASM_S390_LOWCORE_H
void restart_int_handler(void);
void ext_int_handler(void);
void system_call(void);
void pgm_check_handler(void);
void mcck_int_handler(void);
void io_int_handler(void);
#define LC_ORDER 0
#define LC_PAGES 1
struct save_area  __packed;
struct _lowcore  __packed;
#define LC_ORDER 1
#define LC_PAGES 2
struct save_area  __packed;
struct _lowcore  __packed;
#define S390_lowcore (*((struct _lowcore *) 0))
extern struct _lowcore *lowcore_ptr[];
static inline void set_prefix(__u32 address)
static inline __u32 store_prefix(void)
