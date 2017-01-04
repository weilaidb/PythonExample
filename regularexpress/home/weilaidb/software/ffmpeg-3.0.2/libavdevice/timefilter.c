struct TimeFilter ;
static double qexpneg(double x)
TimeFilter *ff_timefilter_new(double time_base,
double period,
double bandwidth)
void ff_timefilter_destroy(TimeFilter *self)
void ff_timefilter_reset(TimeFilter *self)
double ff_timefilter_update(TimeFilter *self, double system_time, double period)
double ff_timefilter_eval(TimeFilter *self, double delta)
#define LFG_MAX ((1LL << 32) - 1)
int main(void)
