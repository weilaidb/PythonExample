typedef struct DateTime DateTime;
struct DateTime ;
static int getDigits(const char *zDate, ...)
static int parseTimezone(const char *zDate, DateTime *p)
static int parseHhMmSs(const char *zDate, DateTime *p)
static void computeJD(DateTime *p)
static int parseYyyyMmDd(const char *zDate, DateTime *p)
static int setDateTimeToCurrent(sqlite3_context *context, DateTime *p)
static int parseDateOrTime(
sqlite3_context *context,
const char *zDate,
DateTime *p
)
static void computeYMD(DateTime *p)
static void computeHMS(DateTime *p)
static void computeYMD_HMS(DateTime *p)
static void clearYMD_HMS_TZ(DateTime *p)
#if !HAVE_LOCALTIME_R && !HAVE_LOCALTIME_S \
&& defined(_MSC_VER) && defined(_CRT_INSECURE_DEPRECATE)
#undef  HAVE_LOCALTIME_S
#define HAVE_LOCALTIME_S 1
static int osLocaltime(time_t *t, struct tm *pTm)
static sqlite3_int64 localtimeOffset(
DateTime *p,
sqlite3_context *pCtx,
int *pRc
)
static int parseModifier(sqlite3_context *pCtx, const char *zMod, DateTime *p)
static int isDate(
sqlite3_context *context,
int argc,
sqlite3_value **argv,
DateTime *p
)
static void juliandayFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void datetimeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void timeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void dateFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void strftimeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
static void ctimeFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void cdateFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void ctimestampFunc(
sqlite3_context *context,
int NotUsed,
sqlite3_value **NotUsed2
)
static void currentTimeFunc(
sqlite3_context *context,
int argc,
sqlite3_value **argv
)
void sqlite3RegisterDateTimeFunctions(void)
