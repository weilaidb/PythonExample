#define ABS_DIFF(a, b)   (((a) > (b)) ? ((a) - (b)) : ((b) - (a)))
#define MR_LD_STATE_OPTIMAL 3
#define FALSE 0
#define TRUE 1
void
mr_update_load_balance_params(struct MR_FW_RAID_MAP_ALL *map,
struct LD_LOAD_BALANCE_INFO *lbInfo);
u32 mega_mod64(u64 dividend, u32 divisor)
u64 mega_div64_32(uint64_t dividend, uint32_t divisor)
struct MR_LD_RAID *MR_LdRaidGet(u32 ld, struct MR_FW_RAID_MAP_ALL *map)
static struct MR_SPAN_BLOCK_INFO *MR_LdSpanInfoGet(u32 ld,
struct MR_FW_RAID_MAP_ALL
*map)
static u8 MR_LdDataArmGet(u32 ld, u32 armIdx, struct MR_FW_RAID_MAP_ALL *map)
static u16 MR_ArPdGet(u32 ar, u32 arm, struct MR_FW_RAID_MAP_ALL *map)
static u16 MR_LdSpanArrayGet(u32 ld, u32 span, struct MR_FW_RAID_MAP_ALL *map)
static u16 MR_PdDevHandleGet(u32 pd, struct MR_FW_RAID_MAP_ALL *map)
u16 MR_GetLDTgtId(u32 ld, struct MR_FW_RAID_MAP_ALL *map)
u16 MR_TargetIdToLdGet(u32 ldTgtId, struct MR_FW_RAID_MAP_ALL *map)
static struct MR_LD_SPAN *MR_LdSpanPtrGet(u32 ld, u32 span,
struct MR_FW_RAID_MAP_ALL *map)
u8 MR_ValidateMapInfo(struct MR_FW_RAID_MAP_ALL *map,
struct LD_LOAD_BALANCE_INFO *lbInfo)
u32 MR_GetSpanBlock(u32 ld, u64 row, u64 *span_blk,
struct MR_FW_RAID_MAP_ALL *map, int *div_error)
u8 MR_GetPhyParams(u32 ld, u64 stripRow, u16 stripRef, u64 *pdBlock,
u16 *pDevHandle, struct RAID_CONTEXT *pRAID_Context,
struct MR_FW_RAID_MAP_ALL *map)
u8
MR_BuildRaidContext(struct IO_REQUEST_INFO *io_info,
struct RAID_CONTEXT *pRAID_Context,
struct MR_FW_RAID_MAP_ALL *map)
void
mr_update_load_balance_params(struct MR_FW_RAID_MAP_ALL *map,
struct LD_LOAD_BALANCE_INFO *lbInfo)
u8 megasas_get_best_arm(struct LD_LOAD_BALANCE_INFO *lbInfo, u8 arm, u64 block,
u32 count)
u16 get_updated_dev_handle(struct LD_LOAD_BALANCE_INFO *lbInfo,
struct IO_REQUEST_INFO *io_info)
