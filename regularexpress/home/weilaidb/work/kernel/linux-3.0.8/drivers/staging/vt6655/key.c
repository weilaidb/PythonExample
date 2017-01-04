static int          msglevel                =MSG_LEVEL_INFO;
static void
s_vCheckKeyTableValid (PSKeyManagement pTable, unsigned long dwIoBase)
void KeyvInitTable (PSKeyManagement pTable, unsigned long dwIoBase)
bool KeybGetKey (
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyIndex,
PSKeyItem       *pKey
)
bool KeybSetKey (
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyIndex,
unsigned long uKeyLength,
PQWORD          pKeyRSC,
unsigned char *pbyKey,
unsigned char byKeyDecMode,
unsigned long dwIoBase,
unsigned char byLocalID
)
bool KeybRemoveKey (
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyIndex,
unsigned long dwIoBase
)
bool KeybRemoveAllKey (
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwIoBase
)
void KeyvRemoveWEPKey (
PSKeyManagement pTable,
unsigned long dwKeyIndex,
unsigned long dwIoBase
)
void KeyvRemoveAllWEPKey (
PSKeyManagement pTable,
unsigned long dwIoBase
)
bool KeybGetTransmitKey (
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyType,
PSKeyItem       *pKey
)
bool KeybCheckPairewiseKey (
PSKeyManagement pTable,
PSKeyItem       *pKey
)
bool KeybSetDefaultKey (
PSKeyManagement pTable,
unsigned long dwKeyIndex,
unsigned long uKeyLength,
PQWORD          pKeyRSC,
unsigned char *pbyKey,
unsigned char byKeyDecMode,
unsigned long dwIoBase,
unsigned char byLocalID
)
bool KeybSetAllGroupKey (
PSKeyManagement pTable,
unsigned long dwKeyIndex,
unsigned long uKeyLength,
PQWORD          pKeyRSC,
unsigned char *pbyKey,
unsigned char byKeyDecMode,
unsigned long dwIoBase,
unsigned char byLocalID
)
