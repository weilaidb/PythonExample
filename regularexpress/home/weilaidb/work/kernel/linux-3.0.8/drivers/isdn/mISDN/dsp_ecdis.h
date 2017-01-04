struct ec_disable_detector_state ;
#define FALSE 0
#define TRUE (!FALSE)
static inline void
echo_can_disable_detector_init(struct ec_disable_detector_state *det)
static inline int
echo_can_disable_detector_update(struct ec_disable_detector_state *det,
int16_t amp)
