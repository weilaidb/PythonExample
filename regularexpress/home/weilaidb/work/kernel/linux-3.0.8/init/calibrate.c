unsigned long lpj_fine;
unsigned long preset_lpj;
static int __init lpj_setup(char *str)
__setup("lpj=", lpj_setup);
#define DELAY_CALIBRATION_TICKS			((HZ < 100) ? 1 : (HZ/100))
#define MAX_DIRECT_CALIBRATION_RETRIES		5
static unsigned long __cpuinit calibrate_delay_direct(void)
static unsigned long __cpuinit calibrate_delay_direct(void)
#define LPS_PREC 8
static unsigned long __cpuinit calibrate_delay_converge(void)
void __cpuinit calibrate_delay(void)
