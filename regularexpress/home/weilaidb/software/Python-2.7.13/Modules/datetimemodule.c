#define PY_SSIZE_T_CLEAN
#define Py_BUILD_CORE
#undef Py_BUILD_CORE
#if SIZEOF_INT < 4
#       error
#define MINYEAR 1
#define MAXYEAR 9999
#define MAXORDINAL 3652059
#define MAX_DELTA_DAYS 999999999
#define GET_YEAR                PyDateTime_GET_YEAR
#define GET_MONTH               PyDateTime_GET_MONTH
#define GET_DAY                 PyDateTime_GET_DAY
#define DATE_GET_HOUR           PyDateTime_DATE_GET_HOUR
#define DATE_GET_MINUTE         PyDateTime_DATE_GET_MINUTE
#define DATE_GET_SECOND         PyDateTime_DATE_GET_SECOND
#define DATE_GET_MICROSECOND    PyDateTime_DATE_GET_MICROSECOND
#define SET_YEAR(o, v)          (((o)->data[0] = ((v) & 0xff00) >> 8), \
((o)->data[1] = ((v) & 0x00ff)))
#define SET_MONTH(o, v)         (PyDateTime_GET_MONTH(o) = (v))
#define SET_DAY(o, v)           (PyDateTime_GET_DAY(o) = (v))
#define DATE_SET_HOUR(o, v)     (PyDateTime_DATE_GET_HOUR(o) = (v))
#define DATE_SET_MINUTE(o, v)   (PyDateTime_DATE_GET_MINUTE(o) = (v))
#define DATE_SET_SECOND(o, v)   (PyDateTime_DATE_GET_SECOND(o) = (v))
#define DATE_SET_MICROSECOND(o, v)      \
(((o)->data[7] = ((v) & 0xff0000) >> 16), \
((o)->data[8] = ((v) & 0x00ff00) >> 8), \
((o)->data[9] = ((v) & 0x0000ff)))
#define TIME_GET_HOUR           PyDateTime_TIME_GET_HOUR
#define TIME_GET_MINUTE         PyDateTime_TIME_GET_MINUTE
#define TIME_GET_SECOND         PyDateTime_TIME_GET_SECOND
#define TIME_GET_MICROSECOND    PyDateTime_TIME_GET_MICROSECOND
#define TIME_SET_HOUR(o, v)     (PyDateTime_TIME_GET_HOUR(o) = (v))
#define TIME_SET_MINUTE(o, v)   (PyDateTime_TIME_GET_MINUTE(o) = (v))
#define TIME_SET_SECOND(o, v)   (PyDateTime_TIME_GET_SECOND(o) = (v))
#define TIME_SET_MICROSECOND(o, v)      \
(((o)->data[3] = ((v) & 0xff0000) >> 16), \
((o)->data[4] = ((v) & 0x00ff00) >> 8), \
((o)->data[5] = ((v) & 0x0000ff)))
#define GET_TD_DAYS(o)          (((PyDateTime_Delta *)(o))->days)
#define GET_TD_SECONDS(o)       (((PyDateTime_Delta *)(o))->seconds)
#define GET_TD_MICROSECONDS(o)  (((PyDateTime_Delta *)(o))->microseconds)
#define SET_TD_DAYS(o, v)       ((o)->days = (v))
#define SET_TD_SECONDS(o, v)    ((o)->seconds = (v))
#define SET_TD_MICROSECONDS(o, v) ((o)->microseconds = (v))
#define HASTZINFO(p)            (((_PyDateTime_BaseTZInfo *)(p))->hastzinfo)
#define MONTH_IS_SANE(M) ((unsigned int)(M) - 1 < 12)
static PyTypeObject PyDateTime_DateType;
static PyTypeObject PyDateTime_DateTimeType;
static PyTypeObject PyDateTime_DeltaType;
static PyTypeObject PyDateTime_TimeType;
static PyTypeObject PyDateTime_TZInfoType;
#define SIGNED_ADD_OVERFLOWED(RESULT, I, J) \
((((RESULT) ^ (I)) & ((RESULT) ^ (J))) < 0)
static int
divmod(int x, int y, int *r)
static long
round_to_long(double x)
static int _days_in_month[] = ;
static int _days_before_month[] = ;
static int
is_leap(int year)
static int
days_in_month(int year, int month)
static int
days_before_month(int year, int month)
static int
days_before_year(int year)
#define DI4Y    1461
#define DI100Y  36524
#define DI400Y  146097
static void
ord_to_ymd(int ordinal, int *year, int *month, int *day)
static int
ymd_to_ord(int year, int month, int day)
static int
weekday(int year, int month, int day)
static int
iso_week1_monday(int year)
static int
check_delta_day_range(int days)
static int
check_date_args(int year, int month, int day)
static int
check_time_args(int h, int m, int s, int us)
static void
normalize_pair(int *hi, int *lo, int factor)
static void
normalize_d_s_us(int *d, int *s, int *us)
static int
normalize_y_m_d(int *y, int *m, int *d)
static int
normalize_date(int *year, int *month, int *day)
static int
normalize_datetime(int *year, int *month, int *day,
int *hour, int *minute, int *second,
int *microsecond)
static PyObject *
time_alloc(PyTypeObject *type, Py_ssize_t aware)
static PyObject *
datetime_alloc(PyTypeObject *type, Py_ssize_t aware)
static void
set_date_fields(PyDateTime_Date *self, int y, int m, int d)
static PyObject *
new_date_ex(int year, int month, int day, PyTypeObject *type)
#define new_date(year, month, day) \
new_date_ex(year, month, day, &PyDateTime_DateType)
static PyObject *
new_datetime_ex(int year, int month, int day, int hour, int minute,
int second, int usecond, PyObject *tzinfo, PyTypeObject *type)
#define new_datetime(y, m, d, hh, mm, ss, us, tzinfo)           \
new_datetime_ex(y, m, d, hh, mm, ss, us, tzinfo,            \
&PyDateTime_DateTimeType)
static PyObject *
new_time_ex(int hour, int minute, int second, int usecond,
PyObject *tzinfo, PyTypeObject *type)
#define new_time(hh, mm, ss, us, tzinfo)                \
new_time_ex(hh, mm, ss, us, tzinfo, &PyDateTime_TimeType)
static PyObject *
new_delta_ex(int days, int seconds, int microseconds, int normalize,
PyTypeObject *type)
#define new_delta(d, s, us, normalize)  \
new_delta_ex(d, s, us, normalize, &PyDateTime_DeltaType)
static int
check_tzinfo_subclass(PyObject *p)
static PyObject *
call_tzinfo_method(PyObject *tzinfo, char *methname, PyObject *tzinfoarg)
static PyObject *
get_tzinfo_member(PyObject *self)
static int
call_utc_tzinfo_method(PyObject *tzinfo, char *name, PyObject *tzinfoarg,
int *none)
static int
call_utcoffset(PyObject *tzinfo, PyObject *tzinfoarg, int *none)
static PyObject *
offset_as_timedelta(PyObject *tzinfo, char *name, PyObject *tzinfoarg)
static int
call_dst(PyObject *tzinfo, PyObject *tzinfoarg, int *none)
static PyObject *
call_tzname(PyObject *tzinfo, PyObject *tzinfoarg)
typedef enum  naivety;
static naivety
classify_utcoffset(PyObject *op, PyObject *tzinfoarg, int *offset)
static int
classify_two_utcoffsets(PyObject *o1, int *offset1, naivety *n1,
PyObject *tzinfoarg1,
PyObject *o2, int *offset2, naivety *n2,
PyObject *tzinfoarg2)
static PyObject *
append_keyword_tzinfo(PyObject *repr, PyObject *tzinfo)
static PyObject *
format_ctime(PyDateTime_Date *date, int hours, int minutes, int seconds)
static int
format_utcoffset(char *buf, size_t buflen, const char *sep,
PyObject *tzinfo, PyObject *tzinfoarg)
static PyObject *
make_freplacement(PyObject *object)
static PyObject *
wrap_strftime(PyObject *object, const char *format, size_t format_len,
PyObject *timetuple, PyObject *tzinfoarg)
static char *
isoformat_date(PyDateTime_Date *dt, char buffer[], int bufflen)
static char *
isoformat_time(PyDateTime_DateTime *dt, char buffer[], int bufflen)
static PyObject *
time_time(void)
static PyObject *
build_struct_time(int y, int m, int d, int hh, int mm, int ss, int dstflag)
static PyObject *
diff_to_bool(int diff, int op)
static PyObject *
cmperror(PyObject *a, PyObject *b)
static PyObject *us_per_us = NULL;
static PyObject *us_per_ms = NULL;
static PyObject *us_per_second = NULL;
static PyObject *us_per_minute = NULL;
static PyObject *us_per_hour = NULL;
static PyObject *us_per_day = NULL;
static PyObject *us_per_week = NULL;
static PyObject *seconds_per_day = NULL;
static PyObject *
delta_to_microseconds(PyDateTime_Delta *self)
static PyObject *
microseconds_to_delta_ex(PyObject *pyus, PyTypeObject *type)
#define microseconds_to_delta(pymicros) \
microseconds_to_delta_ex(pymicros, &PyDateTime_DeltaType)
static PyObject *
multiply_int_timedelta(PyObject *intobj, PyDateTime_Delta *delta)
static PyObject *
divide_timedelta_int(PyDateTime_Delta *delta, PyObject *intobj)
static PyObject *
delta_add(PyObject *left, PyObject *right)
static PyObject *
delta_negative(PyDateTime_Delta *self)
static PyObject *
delta_positive(PyDateTime_Delta *self)
static PyObject *
delta_abs(PyDateTime_Delta *self)
static PyObject *
delta_subtract(PyObject *left, PyObject *right)
static PyObject *
delta_richcompare(PyDateTime_Delta *self, PyObject *other, int op)
static PyObject *delta_getstate(PyDateTime_Delta *self);
static long
delta_hash(PyDateTime_Delta *self)
static PyObject *
delta_multiply(PyObject *left, PyObject *right)
static PyObject *
delta_divide(PyObject *left, PyObject *right)
static PyObject *
accum(const char* tag, PyObject *sofar, PyObject *num, PyObject *factor,
double *leftover)
static PyObject *
delta_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static int
delta_nonzero(PyDateTime_Delta *self)
static PyObject *
delta_repr(PyDateTime_Delta *self)
static PyObject *
delta_str(PyDateTime_Delta *self)
static PyObject *
delta_getstate(PyDateTime_Delta *self)
static PyObject *
delta_total_seconds(PyObject *self)
static PyObject *
delta_reduce(PyDateTime_Delta* self)
#define OFFSET(field)  offsetof(PyDateTime_Delta, field)
static PyMemberDef delta_members[] = ;
static PyMethodDef delta_methods[] = ;
static char delta_doc[] =
PyDoc_STR();
static PyNumberMethods delta_as_number = ;
static PyTypeObject PyDateTime_DeltaType = ;
static PyObject *
date_year(PyDateTime_Date *self, void *unused)
static PyObject *
date_month(PyDateTime_Date *self, void *unused)
static PyObject *
date_day(PyDateTime_Date *self, void *unused)
static PyGetSetDef date_getset[] = ;
static char *date_kws[] = ;
static PyObject *
date_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static PyObject *
date_local_from_time_t(PyObject *cls, double ts)
static PyObject *
date_today(PyObject *cls, PyObject *dummy)
static PyObject *
date_fromtimestamp(PyObject *cls, PyObject *args)
static PyObject *
date_fromordinal(PyObject *cls, PyObject *args)
static PyObject *
add_date_timedelta(PyDateTime_Date *date, PyDateTime_Delta *delta, int negate)
static PyObject *
date_add(PyObject *left, PyObject *right)
static PyObject *
date_subtract(PyObject *left, PyObject *right)
static PyObject *
date_repr(PyDateTime_Date *self)
static PyObject *
date_isoformat(PyDateTime_Date *self)
static PyObject *
date_str(PyDateTime_Date *self)
static PyObject *
date_ctime(PyDateTime_Date *self)
static PyObject *
date_strftime(PyDateTime_Date *self, PyObject *args, PyObject *kw)
static PyObject *
date_format(PyDateTime_Date *self, PyObject *args)
static PyObject *
date_isoweekday(PyDateTime_Date *self)
static PyObject *
date_isocalendar(PyDateTime_Date *self)
static PyObject *
date_richcompare(PyDateTime_Date *self, PyObject *other, int op)
static PyObject *
date_timetuple(PyDateTime_Date *self)
static PyObject *
date_replace(PyDateTime_Date *self, PyObject *args, PyObject *kw)
static PyObject *date_getstate(PyDateTime_Date *self);
static long
date_hash(PyDateTime_Date *self)
static PyObject *
date_toordinal(PyDateTime_Date *self)
static PyObject *
date_weekday(PyDateTime_Date *self)
static PyObject *
date_getstate(PyDateTime_Date *self)
static PyObject *
date_reduce(PyDateTime_Date *self, PyObject *arg)
static PyMethodDef date_methods[] = ;
static char date_doc[] =
PyDoc_STR();
static PyNumberMethods date_as_number = ;
static PyTypeObject PyDateTime_DateType = ;
static PyObject *
tzinfo_nogo(const char* methodname)
static PyObject *
tzinfo_tzname(PyDateTime_TZInfo *self, PyObject *dt)
static PyObject *
tzinfo_utcoffset(PyDateTime_TZInfo *self, PyObject *dt)
static PyObject *
tzinfo_dst(PyDateTime_TZInfo *self, PyObject *dt)
static PyObject *
tzinfo_fromutc(PyDateTime_TZInfo *self, PyDateTime_DateTime *dt)
static PyObject *
tzinfo_reduce(PyObject *self)
static PyMethodDef tzinfo_methods[] = ;
static char tzinfo_doc[] =
PyDoc_STR();
statichere PyTypeObject PyDateTime_TZInfoType = ;
static PyObject *
time_hour(PyDateTime_Time *self, void *unused)
static PyObject *
time_minute(PyDateTime_Time *self, void *unused)
static PyObject *
py_time_second(PyDateTime_Time *self, void *unused)
static PyObject *
time_microsecond(PyDateTime_Time *self, void *unused)
static PyObject *
time_tzinfo(PyDateTime_Time *self, void *unused)
static PyGetSetDef time_getset[] = ;
static char *time_kws[] = ;
static PyObject *
time_new(PyTypeObject *type, PyObject *args, PyObject *kw)
static void
time_dealloc(PyDateTime_Time *self)
static PyObject *
time_utcoffset(PyDateTime_Time *self, PyObject *unused)
static PyObject *
time_dst(PyDateTime_Time *self, PyObject *unused)
static PyObject *
time_tzname(PyDateTime_Time *self, PyObject *unused)
static PyObject *
time_repr(PyDateTime_Time *self)
static PyObject *
time_str(PyDateTime_Time *self)
static PyObject *
time_isoformat(PyDateTime_Time *self, PyObject *unused)
static PyObject *
time_strftime(PyDateTime_Time *self, PyObject *args, PyObject *kw)
static PyObject *
time_richcompare(PyDateTime_Time *self, PyObject *other, int op)
static long
time_hash(PyDateTime_Time *self)
static PyObject *
time_replace(PyDateTime_Time *self, PyObject *args, PyObject *kw)
static int
time_nonzero(PyDateTime_Time *self)
static PyObject *
time_getstate(PyDateTime_Time *self)
static PyObject *
time_reduce(PyDateTime_Time *self, PyObject *arg)
static PyMethodDef time_methods[] = ;
static char time_doc[] =
PyDoc_STR("time([hour[, minute[, second[, microsecond[, tzinfo]]]]]) --> a time object\n\
\n\
All arguments are optional. tzinfo may be None, or an instance of\n\
a tzinfo subclass. The remaining arguments may be ints or longs.\n");
static PyNumberMethods time_as_number = ;
statichere PyTypeObject PyDateTime_TimeType = ;
static PyObject *
datetime_hour(PyDateTime_DateTime *self, void *unused)
static PyObject *
datetime_minute(PyDateTime_DateTime *self, void *unused)
static PyObject *
datetime_second(PyDateTime_DateTime *self, void *unused)
static PyObject *
datetime_microsecond(PyDateTime_DateTime *self, void *unused)
static PyObject *
datetime_tzinfo(PyDateTime_DateTime *self, void *unused)
static PyGetSetDef datetime_getset[] = ;
static char *datetime_kws[] = ;
static PyObject *
datetime_new(PyTypeObject *type, PyObject *args, PyObject *kw)
typedef struct tm *(*TM_FUNC)(const time_t *timer);
static PyObject *
datetime_from_timet_and_us(PyObject *cls, TM_FUNC f, time_t timet, int us,
PyObject *tzinfo)
static PyObject *
datetime_from_timestamp(PyObject *cls, TM_FUNC f, double timestamp,
PyObject *tzinfo)
static PyObject *
datetime_best_possible(PyObject *cls, TM_FUNC f, PyObject *tzinfo)
static PyObject *
datetime_now(PyObject *cls, PyObject *args, PyObject *kw)
static PyObject *
datetime_utcnow(PyObject *cls, PyObject *dummy)
static PyObject *
datetime_fromtimestamp(PyObject *cls, PyObject *args, PyObject *kw)
static PyObject *
datetime_utcfromtimestamp(PyObject *cls, PyObject *args)
static PyObject *
datetime_strptime(PyObject *cls, PyObject *args)
static PyObject *
datetime_combine(PyObject *cls, PyObject *args, PyObject *kw)
static void
datetime_dealloc(PyDateTime_DateTime *self)
static PyObject *
datetime_utcoffset(PyDateTime_DateTime *self, PyObject *unused)
static PyObject *
datetime_dst(PyDateTime_DateTime *self, PyObject *unused)
static PyObject *
datetime_tzname(PyDateTime_DateTime *self, PyObject *unused)
static PyObject *
add_datetime_timedelta(PyDateTime_DateTime *date, PyDateTime_Delta *delta,
int factor)
static PyObject *
datetime_add(PyObject *left, PyObject *right)
static PyObject *
datetime_subtract(PyObject *left, PyObject *right)
static PyObject *
datetime_repr(PyDateTime_DateTime *self)
static PyObject *
datetime_str(PyDateTime_DateTime *self)
static PyObject *
datetime_isoformat(PyDateTime_DateTime *self, PyObject *args, PyObject *kw)
static PyObject *
datetime_ctime(PyDateTime_DateTime *self)
static PyObject *
datetime_richcompare(PyDateTime_DateTime *self, PyObject *other, int op)
static long
datetime_hash(PyDateTime_DateTime *self)
static PyObject *
datetime_replace(PyDateTime_DateTime *self, PyObject *args, PyObject *kw)
static PyObject *
datetime_astimezone(PyDateTime_DateTime *self, PyObject *args, PyObject *kw)
static PyObject *
datetime_timetuple(PyDateTime_DateTime *self)
static PyObject *
datetime_getdate(PyDateTime_DateTime *self)
static PyObject *
datetime_gettime(PyDateTime_DateTime *self)
static PyObject *
datetime_gettimetz(PyDateTime_DateTime *self)
static PyObject *
datetime_utctimetuple(PyDateTime_DateTime *self)
static PyObject *
datetime_getstate(PyDateTime_DateTime *self)
static PyObject *
datetime_reduce(PyDateTime_DateTime *self, PyObject *arg)
static PyMethodDef datetime_methods[] = ;
static char datetime_doc[] =
PyDoc_STR("datetime(year, month, day[, hour[, minute[, second[, microsecond[,tzinfo]]]]])\n\
\n\
The year, month and day arguments are required. tzinfo may be None, or an\n\
instance of a tzinfo subclass. The remaining arguments may be ints or longs.\n");
static PyNumberMethods datetime_as_number = ;
statichere PyTypeObject PyDateTime_DateTimeType = ;
static PyMethodDef module_methods[] = ;
static PyDateTime_CAPI CAPI = ;
PyMODINIT_FUNC
initdatetime(void)
