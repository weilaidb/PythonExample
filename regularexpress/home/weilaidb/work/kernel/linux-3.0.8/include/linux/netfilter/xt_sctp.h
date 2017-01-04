#define _XT_SCTP_H_
#define XT_SCTP_SRC_PORTS	        0x01
#define XT_SCTP_DEST_PORTS	        0x02
#define XT_SCTP_CHUNK_TYPES		0x04
#define XT_SCTP_VALID_FLAGS		0x07
struct xt_sctp_flag_info ;
#define XT_NUM_SCTP_FLAGS	4
struct xt_sctp_info ;
#define bytes(type) (sizeof(type) * 8)
#define SCTP_CHUNKMAP_SET(chunkmap, type) 		\
do  while (0)
#define SCTP_CHUNKMAP_CLEAR(chunkmap, type)		 	\
do  while (0)
#define SCTP_CHUNKMAP_IS_SET(chunkmap, type) 			\
()
#define SCTP_CHUNKMAP_RESET(chunkmap) \
memset((chunkmap), 0, sizeof(chunkmap))
#define SCTP_CHUNKMAP_SET_ALL(chunkmap) \
memset((chunkmap), ~0U, sizeof(chunkmap))
#define SCTP_CHUNKMAP_COPY(destmap, srcmap) \
memcpy((destmap), (srcmap), sizeof(srcmap))
#define SCTP_CHUNKMAP_IS_CLEAR(chunkmap) \
__sctp_chunkmap_is_clear((chunkmap), ARRAY_SIZE(chunkmap))
static inline bool
__sctp_chunkmap_is_clear(const __u32 *chunkmap, unsigned int n)
#define SCTP_CHUNKMAP_IS_ALL_SET(chunkmap) \
__sctp_chunkmap_is_all_set((chunkmap), ARRAY_SIZE(chunkmap))
static inline bool
__sctp_chunkmap_is_all_set(const __u32 *chunkmap, unsigned int n)
