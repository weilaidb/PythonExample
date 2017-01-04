void PHY_SetRF8256Bandwidth(struct r8192_priv *priv, HT_CHANNEL_WIDTH Bandwidth)
RT_STATUS PHY_RF8256_Config(struct r8192_priv *priv)
RT_STATUS phy_RF8256_Config_ParaFile(struct r8192_priv *priv)
void PHY_SetRF8256CCKTxPower(struct r8192_priv *priv, u8 powerlevel)
void PHY_SetRF8256OFDMTxPower(struct r8192_priv *priv, u8 powerlevel)
#define MAX_DOZE_WAITING_TIMES_9x 64
static void r8192e_drain_tx_queues(struct r8192_priv *priv)
static bool SetRFPowerState8190(struct r8192_priv *priv,
RT_RF_POWER_STATE eRFPowerState)
static void MgntDisconnectIBSS(struct r8192_priv *priv)
static void MlmeDisassociateRequest(struct r8192_priv *priv, u8 *asSta,
u8 asRsn)
static void MgntDisconnectAP(struct r8192_priv *priv, u8 asRsn)
static bool MgntDisconnect(struct r8192_priv *priv, u8 asRsn)
bool MgntActSet_RF_State(struct r8192_priv *priv, RT_RF_POWER_STATE StateToSet,
RT_RF_CHANGE_SOURCE ChangeSource)
