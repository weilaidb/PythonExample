#undef gmtime
#undef gmtime_r
struct tm *git_gmtime(const time_t *timep)
struct tm *git_gmtime_r(const time_t *timep, struct tm *result)
