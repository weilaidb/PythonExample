#define LM75_TEMP_MIN (-55000)
#define LM75_TEMP_MAX 125000
#define LM75_SHUTDOWN 0x01
static inline u16 LM75_TEMP_TO_REG(long temp)
static inline int LM75_TEMP_FROM_REG(u16 reg)
