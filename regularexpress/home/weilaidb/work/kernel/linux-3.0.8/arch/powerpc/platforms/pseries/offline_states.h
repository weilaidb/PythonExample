#define _OFFLINE_STATES_H_
enum cpu_state_vals ;
extern enum cpu_state_vals get_cpu_current_state(int cpu);
extern void set_cpu_current_state(int cpu, enum cpu_state_vals state);
extern void set_preferred_offline_state(int cpu, enum cpu_state_vals state);
extern void set_default_offline_state(int cpu);
static inline enum cpu_state_vals get_cpu_current_state(int cpu)
static inline void set_cpu_current_state(int cpu, enum cpu_state_vals state)
static inline void set_preferred_offline_state(int cpu, enum cpu_state_vals state)
static inline void set_default_offline_state(int cpu)
extern enum cpu_state_vals get_preferred_offline_state(int cpu);
