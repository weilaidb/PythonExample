#define __MIB_H__
typedef struct tagSUSBCounter  SUSBCounter, *PSUSBCounter;
typedef struct tagSDot11Counters  SDot11Counters, *PSDot11Counters;
typedef struct tagSMib2Counter  SMib2Counter, *PSMib2Counter;
#define WIRELESSLANIEEE80211b      6
#define UP                  1
#define DOWN                2
#define TESTING             3
typedef struct tagSRmonCounter  SRmonCounter, *PSRmonCounter;
typedef struct tagSCustomCounters  SCustomCounters, *PSCustomCounters;
typedef struct tagSISRCounters  SISRCounters, *PSISRCounters;
#define VALID               1
#define CREATE_REQUEST      2
#define UNDER_CREATION      3
#define INVALID             4
typedef struct tagSTxPktInfo  STxPktInfo, *PSTxPktInfo;
#define MAX_RATE            12
typedef struct tagSStatCounter  SStatCounter, *PSStatCounter;
void STAvClearAllCounter(PSStatCounter pStatistic);
void STAvUpdateIsrStatCounter(PSStatCounter pStatistic,
BYTE byIsr0,
BYTE byIsr1);
void STAvUpdateRDStatCounter(PSStatCounter pStatistic,
BYTE byRSR, BYTE byNewRSR, BYTE byRxSts,
BYTE byRxRate, PBYTE pbyBuffer,
unsigned int cbFrameLength);
void STAvUpdateRDStatCounterEx(PSStatCounter pStatistic,
BYTE byRSR, BYTE byNewRSR, BYTE byRxSts,
BYTE byRxRate, PBYTE pbyBuffer,
unsigned int cbFrameLength);
void STAvUpdateTDStatCounter(PSStatCounter pStatistic, BYTE byPktNum,
BYTE byRate, BYTE byTSR);
void
STAvUpdate802_11Counter(
PSDot11Counters         p802_11Counter,
PSStatCounter           pStatistic,
BYTE                    byRTSSuccess,
BYTE                    byRTSFail,
BYTE                    byACKFail,
BYTE                    byFCSErr
);
void STAvClear802_11Counter(PSDot11Counters p802_11Counter);
void STAvUpdateUSBCounter(PSUSBCounter pUsbCounter, int ntStatus);
