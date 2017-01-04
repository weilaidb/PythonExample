#define AVDEVICE_TIMEFILTER_H
typedef struct TimeFilter TimeFilter;
TimeFilter * ff_timefilter_new(double clock_period, double feedback2_factor, double feedback3_factor);
double ff_timefilter_update(TimeFilter *self, double system_time, double period);
double ff_timefilter_eval(TimeFilter *self, double delta);
void ff_timefilter_reset(TimeFilter *);
void ff_timefilter_destroy(TimeFilter *);
