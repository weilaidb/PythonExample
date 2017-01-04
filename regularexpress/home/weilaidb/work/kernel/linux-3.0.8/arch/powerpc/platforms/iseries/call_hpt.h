#define _PLATFORMS_ISERIES_CALL_HPT_H
#define HvCallHptGetHptAddress		HvCallHpt +  0
#define HvCallHptGetHptPages		HvCallHpt +  1
#define HvCallHptSetPp			HvCallHpt +  5
#define HvCallHptSetSwBits		HvCallHpt +  6
#define HvCallHptUpdate			HvCallHpt +  7
#define HvCallHptInvalidateNoSyncICache	HvCallHpt +  8
#define HvCallHptGet			HvCallHpt + 11
#define HvCallHptFindNextValid		HvCallHpt + 12
#define HvCallHptFindValid		HvCallHpt + 13
#define HvCallHptAddValidate		HvCallHpt + 16
#define HvCallHptInvalidateSetSwBitsGet HvCallHpt + 18
static inline u64 HvCallHpt_getHptAddress(void)
static inline u64 HvCallHpt_getHptPages(void)
static inline void HvCallHpt_setPp(u32 hpteIndex, u8 value)
static inline void HvCallHpt_setSwBits(u32 hpteIndex, u8 bitson, u8 bitsoff)
static inline void HvCallHpt_invalidateNoSyncICache(u32 hpteIndex)
static inline u64 HvCallHpt_invalidateSetSwBitsGet(u32 hpteIndex, u8 bitson,
u8 bitsoff)
static inline u64 HvCallHpt_findValid(struct hash_pte *hpte, u64 vpn)
static inline u64 HvCallHpt_findNextValid(struct hash_pte *hpte, u32 hpteIndex,
u8 bitson, u8 bitsoff)
static inline void HvCallHpt_get(struct hash_pte *hpte, u32 hpteIndex)
static inline void HvCallHpt_addValidate(u32 hpteIndex, u32 hBit,
struct hash_pte *hpte)
