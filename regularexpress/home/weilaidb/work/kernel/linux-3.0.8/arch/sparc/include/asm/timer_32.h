#define _SPARC_TIMER_H
extern __volatile__ unsigned int *master_l10_counter;
BTFIXUPDEF_CALL(int, bus_do_settimeofday, struct timespec *tv)
#define bus_do_settimeofday(tv) BTFIXUP_CALL(bus_do_settimeofday)(tv)
