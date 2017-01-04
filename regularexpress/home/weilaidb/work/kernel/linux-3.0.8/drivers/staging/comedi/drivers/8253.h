#define _8253_H
#define i8253_cascade_ns_to_timer i8253_cascade_ns_to_timer_2div
static inline void i8253_cascade_ns_to_timer_2div_old(int i8253_osc_base,
unsigned int *d1,
unsigned int *d2,
unsigned int *nanosec,
int round_mode)
static inline void i8253_cascade_ns_to_timer_power(int i8253_osc_base,
unsigned int *d1,
unsigned int *d2,
unsigned int *nanosec,
int round_mode)
static inline void i8253_cascade_ns_to_timer_2div(int i8253_osc_base,
unsigned int *d1,
unsigned int *d2,
unsigned int *nanosec,
int round_mode)
#define i8254_control_reg	3
static inline int i8254_load(unsigned long base_address, unsigned int regshift,
unsigned int counter_number, unsigned int count,
unsigned int mode)
static inline int i8254_mm_load(void *base_address, unsigned int regshift,
unsigned int counter_number, unsigned int count,
unsigned int mode)
static inline int i8254_read(unsigned long base_address, unsigned int regshift,
unsigned int counter_number)
static inline int i8254_mm_read(void *base_address, unsigned int regshift,
unsigned int counter_number)
static inline void i8254_write(unsigned long base_address,
unsigned int regshift,
unsigned int counter_number, unsigned int count)
static inline void i8254_mm_write(void *base_address,
unsigned int regshift,
unsigned int counter_number,
unsigned int count)
static inline int i8254_set_mode(unsigned long base_address,
unsigned int regshift,
unsigned int counter_number, unsigned int mode)
static inline int i8254_mm_set_mode(void *base_address,
unsigned int regshift,
unsigned int counter_number,
unsigned int mode)
static inline int i8254_status(unsigned long base_address,
unsigned int regshift,
unsigned int counter_number)
static inline int i8254_mm_status(void *base_address,
unsigned int regshift,
unsigned int counter_number)
