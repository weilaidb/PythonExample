#define _RTL871X_MP_C_
static void _init_mp_priv_(struct mp_priv *pmp_priv)
static int init_mp_priv(struct mp_priv *pmp_priv)
static int free_mp_priv(struct mp_priv *pmp_priv)
void mp871xinit(struct _adapter *padapter)
void mp871xdeinit(struct _adapter *padapter)
static u32 fw_iocmd_read(struct _adapter *pAdapter, struct IOCMD_STRUCT iocmd)
static u8 fw_iocmd_write(struct _adapter *pAdapter,
struct IOCMD_STRUCT iocmd, u32 value)
u32 r8712_bb_reg_read(struct _adapter *pAdapter, u16 offset)
u8 r8712_bb_reg_write(struct _adapter *pAdapter, u16 offset, u32 value)
u32 r8712_rf_reg_read(struct _adapter *pAdapter, u8 path, u8 offset)
u8 r8712_rf_reg_write(struct _adapter *pAdapter, u8 path, u8 offset, u32 value)
static u32 bitshift(u32 bitmask)
static u32 get_bb_reg(struct _adapter *pAdapter, u16 offset, u32 bitmask)
static u8 set_bb_reg(struct _adapter *pAdapter,
u16 offset,
u32 bitmask,
u32 value)
static u32 get_rf_reg(struct _adapter *pAdapter, u8 path, u8 offset,
u32 bitmask)
static u8 set_rf_reg(struct _adapter *pAdapter, u8 path, u8 offset, u32 bitmask,
u32 value)
void r8712_SetChannel(struct _adapter *pAdapter)
static void SetCCKTxPower(struct _adapter *pAdapter, u8 TxPower)
static void SetOFDMTxPower(struct _adapter *pAdapter, u8 TxPower)
void r8712_SetTxPower(struct _adapter *pAdapter)
void r8712_SetTxAGCOffset(struct _adapter *pAdapter, u32 ulTxAGCOffset)
void r8712_SetDataRate(struct _adapter *pAdapter)
void r8712_SwitchBandwidth(struct _adapter *pAdapter)
struct R_ANTENNA_SELECT_OFDM ;
struct R_ANTENNA_SELECT_CCK ;
void r8712_SwitchAntenna(struct _adapter *pAdapter)
void r8712_SetCrystalCap(struct _adapter *pAdapter)
static void TriggerRFThermalMeter(struct _adapter *pAdapter)
static u32 ReadRFThermalMeter(struct _adapter *pAdapter)
void r8712_GetThermalMeter(struct _adapter *pAdapter, u32 *value)
void r8712_SetSingleCarrierTx(struct _adapter *pAdapter, u8 bStart)
void r8712_SetSingleToneTx(struct _adapter *pAdapter, u8 bStart)
void r8712_SetCarrierSuppressionTx(struct _adapter *pAdapter, u8 bStart)
static void SetCCKContinuousTx(struct _adapter *pAdapter, u8 bStart)
static void SetOFDMContinuousTx(struct _adapter *pAdapter, u8 bStart)
void r8712_SetContinuousTx(struct _adapter *pAdapter, u8 bStart)
void r8712_ResetPhyRxPktCount(struct _adapter *pAdapter)
static u32 GetPhyRxPktCounts(struct _adapter *pAdapter, u32 selbit)
u32 r8712_GetPhyRxPktReceived(struct _adapter *pAdapter)
u32 r8712_GetPhyRxPktCRC32Error(struct _adapter *pAdapter)
