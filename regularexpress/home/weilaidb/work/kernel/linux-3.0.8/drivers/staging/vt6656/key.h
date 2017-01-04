#define __KEY_H__
#define MAX_GROUP_KEY       4
#define MAX_KEY_TABLE       11
#define MAX_KEY_LEN         32
#define AES_KEY_LEN         16
#define AUTHENTICATOR_KEY   0x10000000
#define USE_KEYRSC          0x20000000
#define PAIRWISE_KEY        0x40000000
#define TRANSMIT_KEY        0x80000000
#define GROUP_KEY           0x00000000
#define KEY_CTL_WEP         0x00
#define KEY_CTL_NONE        0x01
#define KEY_CTL_TKIP        0x02
#define KEY_CTL_CCMP        0x03
#define KEY_CTL_INVALID     0xFF
typedef struct tagSKeyItem
SKeyItem, *PSKeyItem;
typedef struct tagSKeyTable
SKeyTable, *PSKeyTable;
typedef struct tagSKeyManagement
SKeyManagement, *PSKeyManagement;
void KeyvInitTable(void *pDeviceHandler, PSKeyManagement pTable);
BOOL KeybGetKey(PSKeyManagement pTable, PBYTE pbyBSSID, DWORD dwKeyIndex,
PSKeyItem *pKey);
BOOL KeybSetKey(
void *pDeviceHandler,
PSKeyManagement pTable,
PBYTE           pbyBSSID,
DWORD           dwKeyIndex,
unsigned long           uKeyLength,
PQWORD          pKeyRSC,
PBYTE           pbyKey,
BYTE            byKeyDecMode
);
BOOL KeybRemoveKey(
void *pDeviceHandler,
PSKeyManagement pTable,
PBYTE           pbyBSSID,
DWORD           dwKeyIndex
);
BOOL KeybRemoveAllKey(
void *pDeviceHandler,
PSKeyManagement pTable,
PBYTE           pbyBSSID
);
void KeyvRemoveWEPKey(
void *pDeviceHandler,
PSKeyManagement pTable,
DWORD           dwKeyIndex
);
void KeyvRemoveAllWEPKey(
void *pDeviceHandler,
PSKeyManagement pTable
);
BOOL KeybGetTransmitKey(PSKeyManagement pTable,	PBYTE pbyBSSID,	DWORD dwKeyType,
PSKeyItem *pKey);
BOOL KeybCheckPairewiseKey(PSKeyManagement pTable, PSKeyItem *pKey);
BOOL KeybSetDefaultKey(
void *pDeviceHandler,
PSKeyManagement pTable,
DWORD           dwKeyIndex,
unsigned long           uKeyLength,
PQWORD          pKeyRSC,
PBYTE           pbyKey,
BYTE            byKeyDecMode
);
BOOL KeybSetAllGroupKey(
void *pDeviceHandler,
PSKeyManagement pTable,
DWORD           dwKeyIndex,
unsigned long           uKeyLength,
PQWORD          pKeyRSC,
PBYTE           pbyKey,
BYTE            byKeyDecMode
);
