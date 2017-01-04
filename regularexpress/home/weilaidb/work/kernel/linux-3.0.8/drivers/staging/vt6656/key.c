static int          msglevel                =MSG_LEVEL_INFO;
static void s_vCheckKeyTableValid(void *pDeviceHandler,
PSKeyManagement pTable)
void KeyvInitTable(void *pDeviceHandler, PSKeyManagement pTable)
BOOL KeybGetKey(PSKeyManagement pTable, PBYTE pbyBSSID, DWORD dwKeyIndex,
PSKeyItem *pKey)
BOOL KeybSetKey(
void *pDeviceHandler,
PSKeyManagement pTable,
PBYTE           pbyBSSID,
DWORD           dwKeyIndex,
unsigned long           uKeyLength,
PQWORD          pKeyRSC,
PBYTE           pbyKey,
BYTE            byKeyDecMode
)
BOOL KeybRemoveKey(
void *pDeviceHandler,
PSKeyManagement pTable,
PBYTE           pbyBSSID,
DWORD           dwKeyIndex
)
BOOL KeybRemoveAllKey(
void *pDeviceHandler,
PSKeyManagement pTable,
PBYTE           pbyBSSID
)
void KeyvRemoveWEPKey(
void *pDeviceHandler,
PSKeyManagement pTable,
DWORD           dwKeyIndex
)
void KeyvRemoveAllWEPKey(void *pDeviceHandler, PSKeyManagement pTable)
BOOL KeybGetTransmitKey(PSKeyManagement pTable, PBYTE pbyBSSID, DWORD dwKeyType,
PSKeyItem *pKey)
BOOL KeybCheckPairewiseKey(PSKeyManagement pTable, PSKeyItem *pKey)
BOOL KeybSetDefaultKey(
void *pDeviceHandler,
PSKeyManagement pTable,
DWORD           dwKeyIndex,
unsigned long           uKeyLength,
PQWORD          pKeyRSC,
PBYTE           pbyKey,
BYTE            byKeyDecMode
)
BOOL KeybSetAllGroupKey(
void *pDeviceHandler,
PSKeyManagement pTable,
DWORD           dwKeyIndex,
unsigned long           uKeyLength,
PQWORD          pKeyRSC,
PBYTE           pbyKey,
BYTE            byKeyDecMode
)
