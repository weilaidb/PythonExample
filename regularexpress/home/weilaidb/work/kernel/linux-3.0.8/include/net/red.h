#define __NET_SCHED_RED_H
#define RED_STAB_SIZE	256
#define RED_STAB_MASK	(RED_STAB_SIZE - 1)
struct red_stats ;
struct red_parms ;
static inline u32 red_rmask(u8 Plog)
static inline void red_set_parms(struct red_parms *p,
u32 qth_min, u32 qth_max, u8 Wlog, u8 Plog,
u8 Scell_log, u8 *stab)
static inline int red_is_idling(struct red_parms *p)
static inline void red_start_of_idle_period(struct red_parms *p)
static inline void red_end_of_idle_period(struct red_parms *p)
static inline void red_restart(struct red_parms *p)
static inline unsigned long red_calc_qavg_from_idle_time(struct red_parms *p)
static inline unsigned long red_calc_qavg_no_idle_time(struct red_parms *p,
unsigned int backlog)
static inline unsigned long red_calc_qavg(struct red_parms *p,
unsigned int backlog)
static inline u32 red_random(struct red_parms *p)
static inline int red_mark_probability(struct red_parms *p, unsigned long qavg)
enum ;
static inline int red_cmp_thresh(struct red_parms *p, unsigned long qavg)
enum ;
static inline int red_action(struct red_parms *p, unsigned long qavg)
