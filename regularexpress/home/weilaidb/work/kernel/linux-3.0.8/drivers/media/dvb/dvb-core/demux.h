#define __DEMUX_H
#define DMX_MAX_FILTER_SIZE 18
#define DMX_MAX_SECTION_SIZE 4096
#define DMX_MAX_SECFEED_SIZE (DMX_MAX_SECTION_SIZE + 188)
enum dmx_success  ;
#define TS_PACKET       1
#define	TS_PAYLOAD_ONLY 2
#define TS_DECODER      4
#define TS_DEMUX        8
enum dmx_ts_pes
;
#define DMX_TS_PES_AUDIO    DMX_TS_PES_AUDIO0
#define DMX_TS_PES_VIDEO    DMX_TS_PES_VIDEO0
#define DMX_TS_PES_TELETEXT DMX_TS_PES_TELETEXT0
#define DMX_TS_PES_SUBTITLE DMX_TS_PES_SUBTITLE0
#define DMX_TS_PES_PCR      DMX_TS_PES_PCR0
struct dmx_ts_feed ;
struct dmx_section_filter ;
struct dmx_section_feed ;
typedef int (*dmx_ts_cb) ( const u8 * buffer1,
size_t buffer1_length,
const u8 * buffer2,
size_t buffer2_length,
struct dmx_ts_feed* source,
enum dmx_success success);
typedef int (*dmx_section_cb) (	const u8 * buffer1,
size_t buffer1_len,
const u8 * buffer2,
size_t buffer2_len,
struct dmx_section_filter * source,
enum dmx_success success);
enum dmx_frontend_source ;
struct dmx_frontend ;
#define DMX_TS_FILTERING                        1
#define DMX_PES_FILTERING                       2
#define DMX_SECTION_FILTERING                   4
#define DMX_MEMORY_BASED_FILTERING              8
#define DMX_CRC_CHECKING                        16
#define DMX_TS_DESCRAMBLING                     32
#define DMX_FE_ENTRY(list) list_entry(list, struct dmx_frontend, connectivity_list)
struct dmx_demux ;
