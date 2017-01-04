#define cpu_has_fpu	1
#define cpu_has_fpu	0
#define cpu_has_dsp	1
#define cpu_has_dsp	0
#define onchip_setup(x)					\
static int x##_disabled __cpuinitdata = !cpu_has_##x;	\
\
static int __cpuinit x##_setup(char *opts)			\
\
__setup("no" __stringify(x), x##_setup);
onchip_setup(fpu);
onchip_setup(dsp);
#define CPUOPM		0xff2f0000
#define CPUOPM_RABD	(1 << 5)
static void __cpuinit speculative_execution_init(void)
#define speculative_execution_init()	do  while (0)
#define EXPMASK			0xff2f0004
#define EXPMASK_RTEDS		(1 << 0)
#define EXPMASK_BRDSSLP		(1 << 1)
#define EXPMASK_MMCAW		(1 << 4)
static void __cpuinit expmask_init(void)
#define expmask_init()	do  while (0)
void __attribute__ ((weak)) l2_cache_init(void)
static void cache_init(void)
#define cache_init()	do  while (0)
#define CSHAPE(totalsize, linesize, assoc) \
((totalsize & ~0xff) | (linesize << 4) | assoc)
#define CACHE_DESC_SHAPE(desc)	\
CSHAPE((desc).way_size * (desc).ways, ilog2((desc).linesz), (desc).ways)
static void detect_cache_shape(void)
static void __cpuinit fpu_init(void)
static void __cpuinit release_dsp(void)
static void __cpuinit dsp_init(void)
static inline void __cpuinit dsp_init(void)
asmlinkage void __cpuinit cpu_init(void)
