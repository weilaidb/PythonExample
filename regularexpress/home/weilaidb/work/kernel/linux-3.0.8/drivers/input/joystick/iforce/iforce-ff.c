static int make_magnitude_modifier(struct iforce* iforce,
struct resource* mod_chunk, int no_alloc, __s16 level)
static int make_period_modifier(struct iforce* iforce,
struct resource* mod_chunk, int no_alloc,
__s16 magnitude, __s16 offset, u16 period, u16 phase)
static int make_envelope_modifier(struct iforce* iforce,
struct resource* mod_chunk, int no_alloc,
u16 attack_duration, __s16 initial_level,
u16 fade_duration, __s16 final_level)
static int make_condition_modifier(struct iforce* iforce,
struct resource* mod_chunk, int no_alloc,
__u16 rsat, __u16 lsat, __s16 rk, __s16 lk, u16 db, __s16 center)
static unsigned char find_button(struct iforce *iforce, signed short button)
static int need_condition_modifier(struct iforce *iforce,
struct ff_effect *old,
struct ff_effect *new)
static int need_magnitude_modifier(struct iforce *iforce,
struct ff_effect *old,
struct ff_effect *effect)
static int need_envelope_modifier(struct iforce *iforce, struct ff_effect *old,
struct ff_effect *effect)
static int need_period_modifier(struct iforce *iforce, struct ff_effect *old,
struct ff_effect *new)
static int need_core(struct ff_effect *old, struct ff_effect *new)
static int make_core(struct iforce* iforce, u16 id, u16 mod_id1, u16 mod_id2,
u8 effect_type, u8 axes, u16 duration, u16 delay, u16 button,
u16 interval, u16 direction)
int iforce_upload_periodic(struct iforce *iforce, struct ff_effect *effect, struct ff_effect *old)
int iforce_upload_constant(struct iforce *iforce, struct ff_effect *effect, struct ff_effect *old)
int iforce_upload_condition(struct iforce *iforce, struct ff_effect *effect, struct ff_effect *old)
