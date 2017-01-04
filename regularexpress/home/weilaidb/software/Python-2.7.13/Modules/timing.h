#define _TIMING_H_
static struct timeval aftertp, beforetp;
#define BEGINTIMING gettimeofday(&beforetp, NULL)
#define ENDTIMING gettimeofday(&aftertp, NULL); \
if(beforetp.tv_usec > aftertp.tv_usec) \
#define TIMINGUS (((aftertp.tv_sec - beforetp.tv_sec) * 1000000) + \
(aftertp.tv_usec - beforetp.tv_usec))
#define TIMINGMS (((aftertp.tv_sec - beforetp.tv_sec) * 1000) + \
((aftertp.tv_usec - beforetp.tv_usec) / 1000))
#define TIMINGS  ((aftertp.tv_sec - beforetp.tv_sec) + \
(aftertp.tv_usec - beforetp.tv_usec) / 1000000)
