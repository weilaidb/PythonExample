#define _MACH_SHARPSL_PM
struct sharpsl_charger_machinfo ;
struct battery_thresh ;
struct battery_stat ;
struct sharpsl_pm_status ;
extern struct sharpsl_pm_status sharpsl_pm;
extern struct battery_thresh sharpsl_battery_levels_acin[];
extern struct battery_thresh sharpsl_battery_levels_noac[];
#define SHARPSL_LED_ERROR  2
#define SHARPSL_LED_ON     1
#define SHARPSL_LED_OFF    0
void sharpsl_battery_kick(void);
void sharpsl_pm_led(int val);
#define MAX1111_BATT_VOLT   4u
#define MAX1111_BATT_TEMP   2u
#define MAX1111_ACIN_VOLT   6u
int sharpsl_pm_pxa_read_max1111(int channel);
void corgi_lcd_limit_intensity(int limit);
