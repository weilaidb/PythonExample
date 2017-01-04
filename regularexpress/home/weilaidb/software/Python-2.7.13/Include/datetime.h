#define DATETIME_H
#define _PyDateTime_DATE_DATASIZE 4
#define _PyDateTime_TIME_DATASIZE 6
#define _PyDateTime_DATETIME_DATASIZE 10
typedef struct
PyDateTime_Delta;
typedef struct
PyDateTime_TZInfo;
#define _PyTZINFO_HEAD          \
PyObject_HEAD               \
long hashcode;              \
char hastzinfo;
typedef struct
_PyDateTime_BaseTZInfo;
#define _PyDateTime_TIMEHEAD    \
_PyTZINFO_HEAD              \
unsigned char data[_PyDateTime_TIME_DATASIZE];
typedef struct
_PyDateTime_BaseTime;
typedef struct
PyDateTime_Time;
typedef struct
PyDateTime_Date;
#define _PyDateTime_DATETIMEHEAD        \
_PyTZINFO_HEAD                      \
unsigned char data[_PyDateTime_DATETIME_DATASIZE];
typedef struct
_PyDateTime_BaseDateTime;
typedef struct
PyDateTime_DateTime;
#define PyDateTime_GET_YEAR(o)     ((((PyDateTime_Date*)o)->data[0] << 8) | \
((PyDateTime_Date*)o)->data[1])
#define PyDateTime_GET_MONTH(o)    (((PyDateTime_Date*)o)->data[2])
#define PyDateTime_GET_DAY(o)      (((PyDateTime_Date*)o)->data[3])
#define PyDateTime_DATE_GET_HOUR(o)        (((PyDateTime_DateTime*)o)->data[4])
#define PyDateTime_DATE_GET_MINUTE(o)      (((PyDateTime_DateTime*)o)->data[5])
#define PyDateTime_DATE_GET_SECOND(o)      (((PyDateTime_DateTime*)o)->data[6])
#define PyDateTime_DATE_GET_MICROSECOND(o)              \
((((PyDateTime_DateTime*)o)->data[7] << 16) |       \
(((PyDateTime_DateTime*)o)->data[8] << 8)  |       \
((PyDateTime_DateTime*)o)->data[9])
#define PyDateTime_TIME_GET_HOUR(o)        (((PyDateTime_Time*)o)->data[0])
#define PyDateTime_TIME_GET_MINUTE(o)      (((PyDateTime_Time*)o)->data[1])
#define PyDateTime_TIME_GET_SECOND(o)      (((PyDateTime_Time*)o)->data[2])
#define PyDateTime_TIME_GET_MICROSECOND(o)              \
((((PyDateTime_Time*)o)->data[3] << 16) |           \
(((PyDateTime_Time*)o)->data[4] << 8)  |           \
((PyDateTime_Time*)o)->data[5])
typedef struct  PyDateTime_CAPI;
#define PyDateTime_CAPSULE_NAME "datetime.datetime_CAPI"
#define DATETIME_API_MAGIC 0x414548d5
#define PyDate_Check(op) PyObject_TypeCheck(op, &PyDateTime_DateType)
#define PyDate_CheckExact(op) (Py_TYPE(op) == &PyDateTime_DateType)
#define PyDateTime_Check(op) PyObject_TypeCheck(op, &PyDateTime_DateTimeType)
#define PyDateTime_CheckExact(op) (Py_TYPE(op) == &PyDateTime_DateTimeType)
#define PyTime_Check(op) PyObject_TypeCheck(op, &PyDateTime_TimeType)
#define PyTime_CheckExact(op) (Py_TYPE(op) == &PyDateTime_TimeType)
#define PyDelta_Check(op) PyObject_TypeCheck(op, &PyDateTime_DeltaType)
#define PyDelta_CheckExact(op) (Py_TYPE(op) == &PyDateTime_DeltaType)
#define PyTZInfo_Check(op) PyObject_TypeCheck(op, &PyDateTime_TZInfoType)
#define PyTZInfo_CheckExact(op) (Py_TYPE(op) == &PyDateTime_TZInfoType)
static PyDateTime_CAPI *PyDateTimeAPI = NULL;
#define PyDateTime_IMPORT \
PyDateTimeAPI = (PyDateTime_CAPI *)PyCapsule_Import(PyDateTime_CAPSULE_NAME, 0)
#define PyDate_Check(op) PyObject_TypeCheck(op, PyDateTimeAPI->DateType)
#define PyDate_CheckExact(op) (Py_TYPE(op) == PyDateTimeAPI->DateType)
#define PyDateTime_Check(op) PyObject_TypeCheck(op, PyDateTimeAPI->DateTimeType)
#define PyDateTime_CheckExact(op) (Py_TYPE(op) == PyDateTimeAPI->DateTimeType)
#define PyTime_Check(op) PyObject_TypeCheck(op, PyDateTimeAPI->TimeType)
#define PyTime_CheckExact(op) (Py_TYPE(op) == PyDateTimeAPI->TimeType)
#define PyDelta_Check(op) PyObject_TypeCheck(op, PyDateTimeAPI->DeltaType)
#define PyDelta_CheckExact(op) (Py_TYPE(op) == PyDateTimeAPI->DeltaType)
#define PyTZInfo_Check(op) PyObject_TypeCheck(op, PyDateTimeAPI->TZInfoType)
#define PyTZInfo_CheckExact(op) (Py_TYPE(op) == PyDateTimeAPI->TZInfoType)
#define PyDate_FromDate(year, month, day) \
PyDateTimeAPI->Date_FromDate(year, month, day, PyDateTimeAPI->DateType)
#define PyDateTime_FromDateAndTime(year, month, day, hour, min, sec, usec) \
PyDateTimeAPI->DateTime_FromDateAndTime(year, month, day, hour, \
min, sec, usec, Py_None, PyDateTimeAPI->DateTimeType)
#define PyTime_FromTime(hour, minute, second, usecond) \
PyDateTimeAPI->Time_FromTime(hour, minute, second, usecond, \
Py_None, PyDateTimeAPI->TimeType)
#define PyDelta_FromDSU(days, seconds, useconds) \
PyDateTimeAPI->Delta_FromDelta(days, seconds, useconds, 1, \
PyDateTimeAPI->DeltaType)
#define PyDateTime_FromTimestamp(args) \
PyDateTimeAPI->DateTime_FromTimestamp( \
(PyObject*) (PyDateTimeAPI->DateTimeType), args, NULL)
#define PyDate_FromTimestamp(args) \
PyDateTimeAPI->Date_FromTimestamp( \
(PyObject*) (PyDateTimeAPI->DateType), args)
