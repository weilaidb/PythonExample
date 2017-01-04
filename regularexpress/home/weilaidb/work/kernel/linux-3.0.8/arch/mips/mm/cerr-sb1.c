#if !defined(CONFIG_SIBYTE_BUS_WATCHER) || defined(CONFIG_SIBYTE_BW_TRACE)
#undef DUMP_L2_ECC_TAG_ON_ERROR
#define SB1_CACHE_INDEX_MASK   0x1fe0
#define CP0_ERRCTL_RECOVERABLE (1 << 31)
#define CP0_ERRCTL_DCACHE      (1 << 30)
#define CP0_ERRCTL_ICACHE      (1 << 29)
#define CP0_ERRCTL_MULTIBUS    (1 << 23)
#define CP0_ERRCTL_MC_TLB      (1 << 15)
#define CP0_ERRCTL_MC_TIMEOUT  (1 << 14)
#define CP0_CERRI_TAG_PARITY   (1 << 29)
#define CP0_CERRI_DATA_PARITY  (1 << 28)
#define CP0_CERRI_EXTERNAL     (1 << 26)
#define CP0_CERRI_IDX_VALID(c) (!((c) & CP0_CERRI_EXTERNAL))
#define CP0_CERRI_DATA         (CP0_CERRI_DATA_PARITY)
#define CP0_CERRD_MULTIPLE     (1 << 31)
#define CP0_CERRD_TAG_STATE    (1 << 30)
#define CP0_CERRD_TAG_ADDRESS  (1 << 29)
#define CP0_CERRD_DATA_SBE     (1 << 28)
#define CP0_CERRD_DATA_DBE     (1 << 27)
#define CP0_CERRD_EXTERNAL     (1 << 26)
#define CP0_CERRD_LOAD         (1 << 25)
#define CP0_CERRD_STORE        (1 << 24)
#define CP0_CERRD_FILLWB       (1 << 23)
#define CP0_CERRD_COHERENCY    (1 << 22)
#define CP0_CERRD_DUPTAG       (1 << 21)
#define CP0_CERRD_DPA_VALID(c) (!((c) & CP0_CERRD_EXTERNAL))
#define CP0_CERRD_IDX_VALID(c) \
(((c) & (CP0_CERRD_LOAD | CP0_CERRD_STORE)) ? (!((c) & CP0_CERRD_EXTERNAL)) : 0)
#define CP0_CERRD_CAUSES \
(CP0_CERRD_LOAD | CP0_CERRD_STORE | CP0_CERRD_FILLWB | CP0_CERRD_COHERENCY | CP0_CERRD_DUPTAG)
#define CP0_CERRD_TYPES \
(CP0_CERRD_TAG_STATE | CP0_CERRD_TAG_ADDRESS | CP0_CERRD_DATA_SBE | CP0_CERRD_DATA_DBE | CP0_CERRD_EXTERNAL)
#define CP0_CERRD_DATA         (CP0_CERRD_DATA_SBE | CP0_CERRD_DATA_DBE)
static uint32_t	extract_ic(unsigned short addr, int data);
static uint32_t	extract_dc(unsigned short addr, int data);
static inline void breakout_errctl(unsigned int val)
static inline void breakout_cerri(unsigned int val)
static inline void breakout_cerrd(unsigned int val)
static void check_bus_watcher(void)
extern void check_bus_watcher(void);
asmlinkage void sb1_cache_error(void)
static const uint8_t parity[256] = ;
static const uint64_t mask_72_64[8] = ;
static char range_parity(uint64_t dword, int max, int min)
static unsigned char inst_parity(uint32_t word)
static uint32_t extract_ic(unsigned short addr, int data)
static uint8_t dc_ecc(uint64_t dword)
struct dc_state ;
static struct dc_state dc_states[] = ;
#define DC_TAG_VALID(state) \
(((state) == 0x0) || ((state) == 0xf) || ((state) == 0x13) || \
((state) == 0x19) || ((state) == 0x16) || ((state) == 0x1c))
static char *dc_state_str(unsigned char state)
static uint32_t extract_dc(unsigned short addr, int data)
