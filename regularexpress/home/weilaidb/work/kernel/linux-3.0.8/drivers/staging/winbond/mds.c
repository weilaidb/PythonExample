unsigned char
Mds_initial(struct wbsoft_priv *adapter)
static void Mds_DurationSet(struct wbsoft_priv *adapter,  struct wb35_descriptor *pDes,  u8 *buffer)
static u16 Mds_BodyCopy(struct wbsoft_priv *adapter, struct wb35_descriptor *pDes, u8 *TargetBuffer)
static void Mds_HeaderCopy(struct wbsoft_priv *adapter, struct wb35_descriptor *pDes, u8 *TargetBuffer)
static void MLME_GetNextPacket(struct wbsoft_priv *adapter, struct wb35_descriptor *desc)
static void MLMEfreeMMPDUBuffer(struct wbsoft_priv *adapter, s8 *pData)
static void MLME_SendComplete(struct wbsoft_priv *adapter, u8 PacketID, unsigned char SendOK)
void
Mds_Tx(struct wbsoft_priv *adapter)
void
Mds_SendComplete(struct wbsoft_priv *adapter, struct T02_descriptor *pT02)
