#define __AR3KPSPARSER_H
#define ATH_MODULE_NAME misc
#define A_PRINTF(args...)     printk(KERN_ALERT args)
#define ATH_DEBUG_ERR          (1 << 0)
#define ATH_DEBUG_WARN         (1 << 1)
#define ATH_DEBUG_INFO         (1 << 2)
#define false   0
#define true    1
#define A_MALLOC(size)  kmalloc((size),GFP_KERNEL)
#define A_STRTOUL               simple_strtoul
#define A_STRTOL                simple_strtol
#define MAX_PATCH_SIZE                    20000
#define MAX_NUM_PATCH_ENTRY               (MAX_PATCH_SIZE/MAX_BYTE_LENGTH) + 1
struct ps_cmd_packet
;
int AthDoParsePatch(u8 *, u32 );
int AthDoParsePS(u8 *, u32 );
int AthCreateCommandList(struct ps_cmd_packet **, u32 *);
int AthFreeCommandList(struct ps_cmd_packet **HciPacketList, u32 numPackets);
