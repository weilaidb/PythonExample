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
SKeyManagement, * PSKeyManagement;
void KeyvInitTable(PSKeyManagement pTable, unsigned long dwIoBase);
bool KeybGetKey(
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyIndex,
PSKeyItem       *pKey
);
bool KeybSetKey(
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyIndex,
unsigned long uKeyLength,
PQWORD          pKeyRSC,
unsigned char *pbyKey,
unsigned char byKeyDecMode,
unsigned long dwIoBase,
unsigned char byLocalID
);
bool KeybSetDefaultKey(
PSKeyManagement pTable,
unsigned long dwKeyIndex,
unsigned long uKeyLength,
PQWORD          pKeyRSC,
unsigned char *pbyKey,
unsigned char byKeyDecMode,
unsigned long dwIoBase,
unsigned char byLocalID
);
bool KeybRemoveKey(
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyIndex,
unsigned long dwIoBase
);
bool KeybGetTransmitKey(
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwKeyType,
PSKeyItem       *pKey
);
bool KeybCheckPairewiseKey(
PSKeyManagement pTable,
PSKeyItem       *pKey
);
bool KeybRemoveAllKey(
PSKeyManagement pTable,
unsigned char *pbyBSSID,
unsigned long dwIoBase
);
void KeyvRemoveWEPKey(
PSKeyManagement pTable,
unsigned long dwKeyIndex,
unsigned long dwIoBase
);
void KeyvRemoveAllWEPKey(
PSKeyManagement pTable,
unsigned long dwIoBase
);
bool KeybSetAllGroupKey (
PSKeyManagement pTable,
unsigned long dwKeyIndex,
unsigned long uKeyLength,
PQWORD          pKeyRSC,
unsigned char *pbyKey,
unsigned char byKeyDecMode,
unsigned long dwIoBase,
unsigned char byLocalID
);
