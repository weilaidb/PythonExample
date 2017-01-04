#define __WL1251_TX_H__
#define TX_COMPLETE_REQUIRED_BIT	0x80
#define TX_STATUS_DATA_OUT_COUNT_MASK   0xf
#define WL1251_TX_ALIGN_TO 4
#define WL1251_TX_ALIGN(len) (((len) + WL1251_TX_ALIGN_TO - 1) & \
~(WL1251_TX_ALIGN_TO - 1))
#define WL1251_TKIP_IV_SPACE 4
struct tx_control  __packed;
struct tx_double_buffer_desc  __packed;
enum ;
struct tx_result  __packed;
static inline int wl1251_tx_get_queue(int queue)
void wl1251_tx_work(struct work_struct *work);
void wl1251_tx_complete(struct wl1251 *wl);
void wl1251_tx_flush(struct wl1251 *wl);
