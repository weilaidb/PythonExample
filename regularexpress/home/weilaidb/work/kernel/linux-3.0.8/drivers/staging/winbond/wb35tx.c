unsigned char
Wb35Tx_get_tx_buffer(struct hw_data * pHwData, u8 **pBuffer)
static void Wb35Tx(struct wbsoft_priv *adapter);
static void Wb35Tx_complete(struct urb * pUrb)
static void Wb35Tx(struct wbsoft_priv *adapter)
void Wb35Tx_start(struct wbsoft_priv *adapter)
unsigned char Wb35Tx_initial(struct hw_data * pHwData)
void Wb35Tx_stop(struct hw_data * pHwData)
void Wb35Tx_destroy(struct hw_data * pHwData)
void Wb35Tx_CurrentTime(struct wbsoft_priv *adapter, u32 TimeCount)
static void Wb35Tx_EP2VM(struct wbsoft_priv *adapter);
static void Wb35Tx_EP2VM_complete(struct urb * pUrb)
static void Wb35Tx_EP2VM(struct wbsoft_priv *adapter)
void Wb35Tx_EP2VM_start(struct wbsoft_priv *adapter)
