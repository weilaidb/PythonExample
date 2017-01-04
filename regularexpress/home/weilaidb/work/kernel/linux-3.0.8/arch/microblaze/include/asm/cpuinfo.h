#define _ASM_MICROBLAZE_CPUINFO_H
struct cpu_ver_key ;
extern const struct cpu_ver_key cpu_ver_lookup[];
struct family_string_key ;
extern const struct family_string_key family_string_lookup[];
struct cpuinfo ;
extern struct cpuinfo cpuinfo;
void setup_cpuinfo(void);
void set_cpuinfo_static(struct cpuinfo *ci, struct device_node *cpu);
void set_cpuinfo_pvr_full(struct cpuinfo *ci, struct device_node *cpu);
static inline unsigned int fcpu(struct device_node *cpu, char *n)
