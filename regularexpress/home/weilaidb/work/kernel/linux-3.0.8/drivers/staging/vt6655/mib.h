#define __MIB_H__
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
typedef struct tagSStatCounter  SStatCounter, *PSStatCounter;
void STAvClearAllCounter(PSStatCounter pStatistic);
void STAvUpdateIsrStatCounter(PSStatCounter pStatistic, unsigned long dwIsr);
void STAvUpdateRDStatCounter(PSStatCounter pStatistic,
unsigned char byRSR, unsigned char byNewRSR, unsigned char byRxRate,
unsigned char *pbyBuffer, unsigned int cbFrameLength);
void STAvUpdateRDStatCounterEx(PSStatCounter pStatistic,
unsigned char byRSR, unsigned char byNewRsr, unsigned char byRxRate,
unsigned char *pbyBuffer, unsigned int cbFrameLength);
void STAvUpdateTDStatCounter(PSStatCounter pStatistic, unsigned char byTSR0, unsigned char byTSR1,
unsigned char *pbyBuffer, unsigned int cbFrameLength, unsigned int uIdx);
void STAvUpdateTDStatCounterEx(
PSStatCounter   pStatistic,
unsigned char *pbyBuffer,
unsigned long cbFrameLength
);
void STAvUpdate802_11Counter(
PSDot11Counters p802_11Counter,
PSStatCounter   pStatistic,
unsigned long dwCounter
);
void STAvClear802_11Counter(PSDot11Counters p802_11Counter);
