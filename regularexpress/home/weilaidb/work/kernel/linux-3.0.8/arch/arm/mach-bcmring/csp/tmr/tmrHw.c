#define tmrHw_ASSERT(a)                     if (!(a)) *(char *)0 = 0
#define tmrHw_MILLISEC_PER_SEC              (1000)
#define tmrHw_LOW_1_RESOLUTION_COUNT        (tmrHw_LOW_RESOLUTION_CLOCK / tmrHw_MILLISEC_PER_SEC)
#define tmrHw_LOW_1_MAX_MILLISEC            (0xFFFFFFFF / tmrHw_LOW_1_RESOLUTION_COUNT)
#define tmrHw_LOW_16_RESOLUTION_COUNT       (tmrHw_LOW_1_RESOLUTION_COUNT / 16)
#define tmrHw_LOW_16_MAX_MILLISEC           (0xFFFFFFFF / tmrHw_LOW_16_RESOLUTION_COUNT)
#define tmrHw_LOW_256_RESOLUTION_COUNT      (tmrHw_LOW_1_RESOLUTION_COUNT / 256)
#define tmrHw_LOW_256_MAX_MILLISEC          (0xFFFFFFFF / tmrHw_LOW_256_RESOLUTION_COUNT)
#define tmrHw_HIGH_1_RESOLUTION_COUNT       (tmrHw_HIGH_RESOLUTION_CLOCK / tmrHw_MILLISEC_PER_SEC)
#define tmrHw_HIGH_1_MAX_MILLISEC           (0xFFFFFFFF / tmrHw_HIGH_1_RESOLUTION_COUNT)
#define tmrHw_HIGH_16_RESOLUTION_COUNT      (tmrHw_HIGH_1_RESOLUTION_COUNT / 16)
#define tmrHw_HIGH_16_MAX_MILLISEC          (0xFFFFFFFF / tmrHw_HIGH_16_RESOLUTION_COUNT)
#define tmrHw_HIGH_256_RESOLUTION_COUNT     (tmrHw_HIGH_1_RESOLUTION_COUNT / 256)
#define tmrHw_HIGH_256_MAX_MILLISEC         (0xFFFFFFFF / tmrHw_HIGH_256_RESOLUTION_COUNT)
static void ResetTimer(tmrHw_ID_t timerId)
__attribute__ ((section(".aramtext")));
static int tmrHw_divide(int num, int denom)
__attribute__ ((section(".aramtext")));
uint32_t tmrHw_getTimerCapability(tmrHw_ID_t timerId,
tmrHw_CAPABILITY_e capability
)
static void ResetTimer(tmrHw_ID_t timerId
)
static tmrHw_INTERVAL_t SetTimerPeriod(tmrHw_ID_t timerId,
tmrHw_INTERVAL_t msec
)
tmrHw_RATE_t tmrHw_setPeriodicTimerRate(tmrHw_ID_t timerId,
tmrHw_RATE_t rate
)
tmrHw_INTERVAL_t tmrHw_setPeriodicTimerInterval(tmrHw_ID_t timerId,
tmrHw_INTERVAL_t msec
)
tmrHw_INTERVAL_t tmrHw_setOneshotTimerInterval(tmrHw_ID_t timerId,
tmrHw_INTERVAL_t msec
)
tmrHw_RATE_t tmrHw_setFreeRunningTimer(tmrHw_ID_t timerId,
uint32_t divider
)
int tmrHw_startTimer(tmrHw_ID_t timerId
)
int tmrHw_stopTimer(tmrHw_ID_t timerId
)
uint32_t tmrHw_GetCurrentCount(tmrHw_ID_t timerId
)
tmrHw_RATE_t tmrHw_getCountRate(tmrHw_ID_t timerId
)
void tmrHw_enableInterrupt(tmrHw_ID_t timerId
)
void tmrHw_disableInterrupt(tmrHw_ID_t timerId
)
void tmrHw_clearInterrupt(tmrHw_ID_t timerId
)
tmrHw_INTERRUPT_STATUS_e tmrHw_getInterruptStatus(tmrHw_ID_t timerId
)
tmrHw_ID_t tmrHw_getInterruptSource(void
)
void tmrHw_printDebugInfo(tmrHw_ID_t timerId,
int (*fpPrint) (const char *, ...)
)
void tmrHw_udelay(tmrHw_ID_t timerId,
unsigned long usecs
)
static int tmrHw_divide(int num, int denom)
