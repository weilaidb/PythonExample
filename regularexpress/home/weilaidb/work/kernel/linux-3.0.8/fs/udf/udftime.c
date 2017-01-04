#define EPOCH_YEAR 1970
#define	__isleap(year)	\
((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
static const unsigned short int __mon_yday[2][13] = ;
#define MAX_YEAR_SECONDS	69
#define SPD			0x15180
#define SPY(y, l, s)		(SPD * (365 * y + l) + s)
static time_t year_seconds[MAX_YEAR_SECONDS] = ;
extern struct timezone sys_tz;
#define SECS_PER_HOUR	(60 * 60)
#define SECS_PER_DAY	(SECS_PER_HOUR * 24)
struct timespec *
udf_disk_stamp_to_time(struct timespec *dest, struct timestamp src)
struct timestamp *
udf_time_to_disk_stamp(struct timestamp *dest, struct timespec ts)
