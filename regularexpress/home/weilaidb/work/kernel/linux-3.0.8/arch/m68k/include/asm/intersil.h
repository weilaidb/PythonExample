#define _SUN3_INTERSIL_H
#define INTERSIL_FREQ_32K        0x00
#define INTERSIL_FREQ_1M         0x01
#define INTERSIL_FREQ_2M         0x02
#define INTERSIL_FREQ_4M         0x03
#define INTERSIL_12H_MODE   0x00
#define INTERSIL_24H_MODE   0x04
#define INTERSIL_STOP            0x00
#define INTERSIL_RUN             0x08
#define INTERSIL_INT_ENABLE     0x10
#define INTERSIL_INT_DISABLE    0x00
#define INTERSIL_MODE_NORMAL     0x00
#define INTERSIL_MODE_TEST       0x20
#define INTERSIL_HZ_100_MASK	 0x02
struct intersil_dt ;
struct intersil_7170 ;
extern volatile char* clock_va;
#define intersil_clock ((volatile struct intersil_7170 *) clock_va)
#define intersil_clear() (void)intersil_clock->int_reg
