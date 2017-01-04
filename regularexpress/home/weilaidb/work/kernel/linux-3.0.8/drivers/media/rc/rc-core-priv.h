#define _RC_CORE_PRIV
struct ir_raw_handler ;
struct ir_raw_event_ctrl ;
static inline bool geq_margin(unsigned d1, unsigned d2, unsigned margin)
static inline bool eq_margin(unsigned d1, unsigned d2, unsigned margin)
static inline bool is_transition(struct ir_raw_event *x, struct ir_raw_event *y)
static inline void decrease_duration(struct ir_raw_event *ev, unsigned duration)
static inline bool is_timing_event(struct ir_raw_event ev)
#define TO_US(duration)			DIV_ROUND_CLOSEST((duration), 1000)
#define TO_STR(is_pulse)		((is_pulse) ? "pulse" : "space")
u64 ir_raw_get_allowed_protocols(void);
int ir_raw_event_register(struct rc_dev *dev);
void ir_raw_event_unregister(struct rc_dev *dev);
int ir_raw_handler_register(struct ir_raw_handler *ir_raw_handler);
void ir_raw_handler_unregister(struct ir_raw_handler *ir_raw_handler);
void ir_raw_init(void);
#define load_nec_decode()	request_module("ir-nec-decoder")
#define load_nec_decode()	0
#define load_rc5_decode()	request_module("ir-rc5-decoder")
#define load_rc5_decode()	0
#define load_rc6_decode()	request_module("ir-rc6-decoder")
#define load_rc6_decode()	0
#define load_jvc_decode()	request_module("ir-jvc-decoder")
#define load_jvc_decode()	0
#define load_sony_decode()	request_module("ir-sony-decoder")
#define load_sony_decode()	0
#define load_lirc_codec()	request_module("ir-lirc-codec")
#define load_lirc_codec()	0
