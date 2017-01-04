#define _LINUX_ALARMTIMER_H
enum alarmtimer_type ;
struct alarm ;
void alarm_init(struct alarm *alarm, enum alarmtimer_type type,
void (*function)(struct alarm *));
void alarm_start(struct alarm *alarm, ktime_t start, ktime_t period);
void alarm_cancel(struct alarm *alarm);
