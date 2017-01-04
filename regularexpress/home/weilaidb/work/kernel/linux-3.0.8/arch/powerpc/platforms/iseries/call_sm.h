#define _ISERIES_CALL_SM_H
#define HvCallSmGet64BitsOfAccessMap	HvCallSm  + 11
static inline u64 HvCallSm_get64BitsOfAccessMap(HvLpIndex lpIndex,
u64 indexIntoBitMap)
