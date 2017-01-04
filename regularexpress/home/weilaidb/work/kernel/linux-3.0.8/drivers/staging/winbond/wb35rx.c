static void packet_came(struct ieee80211_hw *hw, char *pRxBufferAddress, int PacketSize)
static void Wb35Rx_adjust(struct wb35_descriptor *pRxDes)
static u16 Wb35Rx_indicate(struct ieee80211_hw *hw)
static void Wb35Rx(struct ieee80211_hw *hw);
static void Wb35Rx_Complete(struct urb *urb)
static void Wb35Rx(struct ieee80211_hw *hw)
void Wb35Rx_start(struct ieee80211_hw *hw)
static void Wb35Rx_reset_descriptor(struct hw_data *pHwData)
unsigned char Wb35Rx_initial(struct hw_data *pHwData)
void Wb35Rx_stop(struct hw_data *pHwData)
void Wb35Rx_destroy(struct hw_data *pHwData)