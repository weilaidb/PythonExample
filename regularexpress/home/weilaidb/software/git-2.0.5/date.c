static time_t tm_to_time_t(const struct tm *tm)
static const char *month_names[] = ;
static const char *weekday_names[] = ;
static time_t gm_time_t(unsigned long time, int tz)
static struct tm *time_to_tm(unsigned long time, int tz)
static int local_tzoffset(unsigned long time)
void show_date_relative(unsigned long time, int tz,
const struct timeval *now,
struct strbuf *timebuf)
const char *show_date(unsigned long time, int tz, enum date_mode mode)
static const struct  timezone_names[] = ;
static int match_string(const char *date, const char *str)
static int skip_alpha(const char *date)
static int match_alpha(const char *date, struct tm *tm, int *offset)
static int is_date(int year, int month, int day, struct tm *now_tm, time_t now, struct tm *tm)
static int match_multi_number(unsigned long num, char c, const char *date, char *end, struct tm *tm)
static inline int nodate(struct tm *tm)
static int match_digit(const char *date, struct tm *tm, int *offset, int *tm_gmt)
static int match_tz(const char *date, int *offp)
static int date_string(unsigned long date, int offset, char *buf, int len)
static int match_object_header_date(const char *date, unsigned long *timestamp, int *offset)
int parse_date_basic(const char *date, unsigned long *timestamp, int *offset)
int parse_expiry_date(const char *date, unsigned long *timestamp)
int parse_date(const char *date, char *result, int maxlen)
enum date_mode parse_date_format(const char *format)
void datestamp(char *buf, int bufsize)
static unsigned long update_tm(struct tm *tm, struct tm *now, unsigned long sec)
static void date_now(struct tm *tm, struct tm *now, int *num)
static void date_yesterday(struct tm *tm, struct tm *now, int *num)
static void date_time(struct tm *tm, struct tm *now, int hour)
static void date_midnight(struct tm *tm, struct tm *now, int *num)
static void date_noon(struct tm *tm, struct tm *now, int *num)
static void date_tea(struct tm *tm, struct tm *now, int *num)
static void date_pm(struct tm *tm, struct tm *now, int *num)
static void date_am(struct tm *tm, struct tm *now, int *num)
static void date_never(struct tm *tm, struct tm *now, int *num)
static const struct special  special[] = ;
static const char *number_name[] = ;
static const struct typelen  typelen[] = ;
static const char *approxidate_alpha(const char *date, struct tm *tm, struct tm *now, int *num, int *touched)
static const char *approxidate_digit(const char *date, struct tm *tm, int *num)
static void pending_number(struct tm *tm, int *num)
static unsigned long approxidate_str(const char *date,
const struct timeval *tv,
int *error_ret)
unsigned long approxidate_relative(const char *date, const struct timeval *tv)
unsigned long approxidate_careful(const char *date, int *error_ret)
int date_overflows(unsigned long t)
