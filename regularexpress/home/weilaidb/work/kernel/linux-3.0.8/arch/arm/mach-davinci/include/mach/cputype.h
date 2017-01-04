#define _ASM_ARCH_CPU_H
struct davinci_id ;
#define	DAVINCI_CPU_ID_DM6446		0x64460000
#define	DAVINCI_CPU_ID_DM6467		0x64670000
#define	DAVINCI_CPU_ID_DM355		0x03550000
#define	DAVINCI_CPU_ID_DM365		0x03650000
#define	DAVINCI_CPU_ID_DA830		0x08300000
#define	DAVINCI_CPU_ID_DA850		0x08500000
#define	DAVINCI_CPU_ID_TNETV107X	0x0b8a0000
#define IS_DAVINCI_CPU(type, id)					\
static inline int is_davinci_ ##type(void)				\
IS_DAVINCI_CPU(dm644x, DAVINCI_CPU_ID_DM6446)
IS_DAVINCI_CPU(dm646x, DAVINCI_CPU_ID_DM6467)
IS_DAVINCI_CPU(dm355, DAVINCI_CPU_ID_DM355)
IS_DAVINCI_CPU(dm365, DAVINCI_CPU_ID_DM365)
IS_DAVINCI_CPU(da830, DAVINCI_CPU_ID_DA830)
IS_DAVINCI_CPU(da850, DAVINCI_CPU_ID_DA850)
IS_DAVINCI_CPU(tnetv107x, DAVINCI_CPU_ID_TNETV107X)
#define cpu_is_davinci_dm644x() is_davinci_dm644x()
#define cpu_is_davinci_dm644x() 0
#define cpu_is_davinci_dm646x() is_davinci_dm646x()
#define cpu_is_davinci_dm646x() 0
#define cpu_is_davinci_dm355() is_davinci_dm355()
#define cpu_is_davinci_dm355() 0
#define cpu_is_davinci_dm365() is_davinci_dm365()
#define cpu_is_davinci_dm365() 0
#define cpu_is_davinci_da830() is_davinci_da830()
#define cpu_is_davinci_da830() 0
#define cpu_is_davinci_da850() is_davinci_da850()
#define cpu_is_davinci_da850() 0
#define cpu_is_davinci_tnetv107x() is_davinci_tnetv107x()
#define cpu_is_davinci_tnetv107x() 0
