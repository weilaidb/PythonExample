static int          msglevel                =MSG_LEVEL_INFO;
void STAvClearAllCounter (PSStatCounter pStatistic)
void STAvUpdateIsrStatCounter (PSStatCounter pStatistic, BYTE byIsr0, BYTE byIsr1)
void STAvUpdateRDStatCounter(PSStatCounter pStatistic,
BYTE byRSR, BYTE byNewRSR,
BYTE byRxSts, BYTE byRxRate,
PBYTE pbyBuffer, unsigned int cbFrameLength)
void
STAvUpdateRDStatCounterEx (
PSStatCounter   pStatistic,
BYTE            byRSR,
BYTE            byNewRSR,
BYTE            byRxSts,
BYTE            byRxRate,
PBYTE           pbyBuffer,
unsigned int            cbFrameLength
)
void
STAvUpdateTDStatCounter (
PSStatCounter   pStatistic,
BYTE            byPktNum,
BYTE            byRate,
BYTE            byTSR
)
void
STAvUpdate802_11Counter(
PSDot11Counters         p802_11Counter,
PSStatCounter           pStatistic,
BYTE                    byRTSSuccess,
BYTE                    byRTSFail,
BYTE                    byACKFail,
BYTE                    byFCSErr
)
void
STAvClear802_11Counter(PSDot11Counters p802_11Counter)
void STAvUpdateUSBCounter(PSUSBCounter pUsbCounter, int ntStatus)
