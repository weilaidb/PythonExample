#if defined(HAVE_GETTIMEOFDAY) && defined(HAVE_FTIME)
# undef HAVE_FTIME
#if !defined(MS_WINDOWS) && !defined(PYOS_OS2)
extern int ftime(struct timeb *);
#if defined(__WATCOMC__) && !defined(__QNX__)
#define WIN32_LEAN_AND_MEAN
static HANDLE hInterruptEvent = NULL;
static BOOL WINAPI PyCtrlHandler(DWORD dwCtrlType)
static long main_thread;
#if defined(__BORLANDC__)
#define timezone _timezone
#define tzname _tzname
#define daylight _daylight
#if defined(MS_WINDOWS) && !defined(__BORLANDC__)
#undef HAVE_CLOCK
#if defined(PYOS_OS2)
#define INCL_DOS
#define INCL_ERRORS
#if defined(PYCC_VACPP)
extern int riscos_sleep(double);
static int floatsleep(double);
static double floattime(void);
static PyObject *moddict = NULL;
time_t
_PyTime_DoubleToTimet(double x)
static PyObject *
time_time(PyObject *self, PyObject *unused)
PyDoc_STRVAR(time_doc,
"time() -> floating point number\n\
\n\
Return the current time in seconds since the Epoch.\n\
Fractions of a second may be present if the system clock provides them.");
#define CLOCKS_PER_SEC CLK_TCK
#define CLOCKS_PER_SEC 1000000
static PyObject *
time_clock(PyObject *self, PyObject *unused)
#if defined(MS_WINDOWS) && !defined(__BORLANDC__)
static PyObject *
time_clock(PyObject *self, PyObject *unused)
#define HAVE_CLOCK
PyDoc_STRVAR(clock_doc,
"clock() -> floating point number\n\
\n\
Return the CPU time or real time since the start of the process or since\n\
the first call to clock().  This has as much precision as the system\n\
records.");
static PyObject *
time_sleep(PyObject *self, PyObject *args)
PyDoc_STRVAR(sleep_doc,
"sleep(seconds)\n\
\n\
Delay execution for a given number of seconds.  The argument may be\n\
a floating point number for subsecond precision.");
static PyStructSequence_Field struct_time_type_fields[] = ;
static PyStructSequence_Desc struct_time_type_desc = ;
static int initialized;
static PyTypeObject StructTimeType;
static PyObject *
tmtotuple(struct tm *p)
static PyObject *
time_convert(double when, struct tm * (*function)(const time_t *))
static int
parse_time_double_args(PyObject *args, char *format, double *pwhen)
static PyObject *
time_gmtime(PyObject *self, PyObject *args)
PyDoc_STRVAR(gmtime_doc,
"gmtime([seconds]) -> (tm_year, tm_mon, tm_mday, tm_hour, tm_min,\n\
tm_sec, tm_wday, tm_yday, tm_isdst)\n\
\n\
Convert seconds since the Epoch to a time tuple expressing UTC (a.k.a.\n\
GMT).  When 'seconds' is not passed in, convert the current time instead.");
static PyObject *
time_localtime(PyObject *self, PyObject *args)
PyDoc_STRVAR(localtime_doc,
"localtime([seconds]) -> (tm_year,tm_mon,tm_mday,tm_hour,tm_min,\n\
tm_sec,tm_wday,tm_yday,tm_isdst)\n\
\n\
Convert seconds since the Epoch to a time tuple expressing local time.\n\
When 'seconds' is not passed in, convert the current time instead.");
static int
gettmarg(PyObject *args, struct tm *p)
static PyObject *
time_strftime(PyObject *self, PyObject *args)
PyDoc_STRVAR(strftime_doc,
"strftime(format[, tuple]) -> string\n\
\n\
Convert a time tuple to a string according to a format specification.\n\
See the library reference manual for formatting codes. When the time tuple\n\
is not present, current time as returned by localtime() is used.");
static PyObject *
time_strptime(PyObject *self, PyObject *args)
PyDoc_STRVAR(strptime_doc,
"strptime(string, format) -> struct_time\n\
\n\
Parse a string to a time tuple according to a format specification.\n\
See the library reference manual for formatting codes (same as strftime()).");
static PyObject *
time_asctime(PyObject *self, PyObject *args)
PyDoc_STRVAR(asctime_doc,
"asctime([tuple]) -> string\n\
\n\
Convert a time tuple to a string, e.g. 'Sat Jun 06 16:26:11 1998'.\n\
When the time tuple is not present, current time as returned by localtime()\n\
is used.");
static PyObject *
time_ctime(PyObject *self, PyObject *args)
PyDoc_STRVAR(ctime_doc,
"ctime(seconds) -> string\n\
\n\
Convert a time in seconds since the Epoch to a string in local time.\n\
This is equivalent to asctime(localtime(seconds)). When the time tuple is\n\
not present, current time as returned by localtime() is used.");
static PyObject *
time_mktime(PyObject *self, PyObject *tup)
PyDoc_STRVAR(mktime_doc,
"mktime(tuple) -> floating point number\n\
\n\
Convert a time tuple in local time to seconds since the Epoch.");
static void inittimezone(PyObject *module);
static PyObject *
time_tzset(PyObject *self, PyObject *unused)
PyDoc_STRVAR(tzset_doc,
"tzset()\n\
\n\
Initialize, or reinitialize, the local timezone to the value stored in\n\
os.environ['TZ']. The TZ environment variable should be specified in\n\
standard Unix timezone format as documented in the tzset man page\n\
(eg. 'US/Eastern', 'Europe/Amsterdam'). Unknown timezones will silently\n\
fall back to UTC. If the TZ environment variable is not set, the local\n\
timezone is set to the systems best guess of wallclock time.\n\
Changing the TZ environment variable without calling tzset *may* change\n\
the local timezone used by methods such as localtime, but this behaviour\n\
should not be relied on.");
static void
inittimezone(PyObject *m)
static PyMethodDef time_methods[] = ;
PyDoc_STRVAR(module_doc,
"This module provides various functions to manipulate time values.\n\
\n\
There are two standard representations of time.  One is the number\n\
of seconds since the Epoch, in UTC (a.k.a. GMT).  It may be an integer\n\
or a floating point number (to represent fractions of seconds).\n\
The Epoch is system-defined; on Unix, it is generally January 1st, 1970.\n\
The actual value can be retrieved by calling gmtime(0).\n\
\n\
The other representation is a tuple of 9 integers giving local time.\n\
The tuple items are:\n\
year (four digits, e.g. 1998)\n\
month (1-12)\n\
day (1-31)\n\
hours (0-23)\n\
minutes (0-59)\n\
seconds (0-59)\n\
weekday (0-6, Monday is 0)\n\
Julian day (day in the year, 1-366)\n\
DST (Daylight Savings Time) flag (-1, 0 or 1)\n\
If the DST flag is 0, the time is given in the regular time zone;\n\
if it is 1, the time is given in the DST time zone;\n\
if it is -1, mktime() should guess based on the date and time.\n\
\n\
Variables:\n\
\n\
timezone -- difference in seconds between UTC and local standard time\n\
altzone -- difference in  seconds between UTC and local DST time\n\
daylight -- whether local time should reflect DST\n\
tzname -- tuple of (standard time zone name, DST time zone name)\n\
\n\
Functions:\n\
\n\
time() -- return current time in seconds since the Epoch as a float\n\
clock() -- return CPU time since process start as a float\n\
sleep() -- delay for a number of seconds given as a float\n\
gmtime() -- convert seconds since Epoch to UTC tuple\n\
localtime() -- convert seconds since Epoch to local time tuple\n\
asctime() -- convert time tuple to string\n\
ctime() -- convert time in seconds to string\n\
mktime() -- convert local time tuple to seconds since Epoch\n\
strftime() -- convert time tuple to string according to format specification\n\
strptime() -- parse string to time tuple according to format specification\n\
tzset() -- change the local timezone");
PyMODINIT_FUNC
inittime(void)
static double
floattime(void)
static int
floatsleep(double secs)
{
#if defined(HAVE_SELECT) && !defined(__BEOS__) && !defined(__EMX__)
struct timeval t;
double frac;
frac = fmod(secs, 1.0);
secs = floor(secs);
t.tv_sec = (long)secs;
t.tv_usec = (long)(frac*1000000.0);
Py_BEGIN_ALLOW_THREADS
if (select(0, (fd_set *)0, (fd_set *)0, (fd_set *)0, &t) != 0)
PyAPI_FUNC(double)
_PyTime_FloatTime(void)
