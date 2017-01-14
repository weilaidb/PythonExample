#define _PTTS_h_
#define DO_BLAST 0
extern int verbose;
static inline void killme(int exit_code);
#define TS_KILL_SERVER -1
#define TS_INVALID_TEST -2
#define TS_MSGINC    600
#define TS_ANCBUFSZ  2048
#define TS_SCOPE TIPC_ZONE_SCOPE;
#define TS_SYNCRO_TYPE 73
#define TS_TEST_TYPE   72
#define TS_TEST_INST 1000
#define TS_LOWER 900
#define TS_UPPER 1100
#define TS_BBUF_SIZE 75000
#define TS_BBUF_DATA 0x1A
#define debug(arg...) do  while (verbose < 0)
#define info(arg...) do  while (verbose < 0)
typedef void	(*VOIDFUNCPTR) ();
#define TS_SYNC_ID_1	 1
#define TS_SYNC_ID_2	 2
#define TS_SYNC_ID_3	 3
#define TS_SYNC_ID_4	 4
#define TS_SYNC_ID_5	 5
#define TS_SYNC_ID_6	 6
#define TS_SYNC_ID_7	 7
#define TS_SYNC_WAITING_FOR_TEST_ID 99
#define TS_SYNC_FINISHED_TEST_ID 100
#define TS_NUMTIMES  1
#define TS_FIRST_SANITY_TEST  1
#define TS_FIRST_STRESS_TEST  1000
enum TS_NUM ;
#define TS_NUMBER_OF_TESTS (ts_lastSanityTest + (ts_lastStressTest - TS_FIRST_STRESS_TEST))
typedef struct
TSTESTNAME;
typedef struct
TSTEST;
extern TSTESTNAME nameList[];
extern TSTEST clientList[];
extern TSTEST serverList[];
extern char * testName(int test);
