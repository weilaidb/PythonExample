#define RTL8225_H
#define RTL819X_TOTAL_RF_PATH 2
void PHY_SetRF8256Bandwidth(struct r8192_priv *priv,
HT_CHANNEL_WIDTH Bandwidth);
RT_STATUS PHY_RF8256_Config(struct r8192_priv *priv);
RT_STATUS phy_RF8256_Config_ParaFile(struct r8192_priv *priv);
void PHY_SetRF8256CCKTxPower(struct r8192_priv *priv, u8 powerlevel);
void PHY_SetRF8256OFDMTxPower(struct r8192_priv *priv, u8 powerlevel);
bool MgntActSet_RF_State(struct r8192_priv *priv,
RT_RF_POWER_STATE StateToSet,
RT_RF_CHANGE_SOURCE ChangeSource);
