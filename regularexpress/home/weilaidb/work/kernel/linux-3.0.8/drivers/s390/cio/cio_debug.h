#define CIO_DEBUG_H
extern debug_info_t *cio_debug_msg_id;
extern debug_info_t *cio_debug_trace_id;
extern debug_info_t *cio_debug_crw_id;
#define CIO_TRACE_EVENT(imp, txt) do  while (0)
#define CIO_MSG_EVENT(imp, args...) do  while (0)
#define CIO_CRW_EVENT(imp, args...) do  while (0)
static inline void CIO_HEX_EVENT(int level, void *data, int length)
