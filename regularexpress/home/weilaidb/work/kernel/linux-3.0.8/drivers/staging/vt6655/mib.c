static int          msglevel                =MSG_LEVEL_INFO;
void STAvClearAllCounter (PSStatCounter pStatistic)
void STAvUpdateIsrStatCounter (PSStatCounter pStatistic, unsigned long dwIsr)
void STAvUpdateRDStatCounter (PSStatCounter pStatistic,
unsigned char byRSR, unsigned char byNewRSR, unsigned char byRxRate,
unsigned char *pbyBuffer, unsigned int cbFrameLength)
void
STAvUpdateRDStatCounterEx (
PSStatCounter   pStatistic,
unsigned char byRSR,
unsigned char byNewRSR,
unsigned char byRxRate,
unsigned char *pbyBuffer,
unsigned int cbFrameLength
)
void
STAvUpdateTDStatCounter (
PSStatCounter   pStatistic,
unsigned char byTSR0,
unsigned char byTSR1,
unsigned char *pbyBuffer,
unsigned int cbFrameLength,
unsigned int uIdx
)
void
STAvUpdateTDStatCounterEx (
PSStatCounter   pStatistic,
unsigned char *pbyBuffer,
unsigned long cbFrameLength
)
void
STAvUpdate802_11Counter(
PSDot11Counters         p802_11Counter,
PSStatCounter           pStatistic,
unsigned long dwCounter
)
void
STAvClear802_11Counter(PSDot11Counters p802_11Counter)
