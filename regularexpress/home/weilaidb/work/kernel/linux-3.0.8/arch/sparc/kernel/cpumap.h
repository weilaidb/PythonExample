#define _CPUMAP_H
extern void cpu_map_rebuild(void);
extern int  map_to_cpu(unsigned int index);
#define cpu_map_init() cpu_map_rebuild()
#define cpu_map_init() do  while (0)
static inline int map_to_cpu(unsigned int index)
