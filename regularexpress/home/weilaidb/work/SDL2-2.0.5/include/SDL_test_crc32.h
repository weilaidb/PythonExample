#define _SDL_test_crc32_h
#define CrcUint32  unsigned int
#define CrcUint8   unsigned char
#define CRC32_POLY 0x04c11db7
#define CRC32_POLY 0xEDB88320
typedef struct  SDLTest_Crc32Context;
int SDLTest_Crc32Init(SDLTest_Crc32Context * crcContext);
int SDLTest_crc32Calc(SDLTest_Crc32Context * crcContext, CrcUint8 *inBuf, CrcUint32 inLen, CrcUint32 *crc32);
int SDLTest_Crc32CalcStart(SDLTest_Crc32Context * crcContext, CrcUint32 *crc32);
int SDLTest_Crc32CalcEnd(SDLTest_Crc32Context * crcContext, CrcUint32 *crc32);
int SDLTest_Crc32CalcBuffer(SDLTest_Crc32Context * crcContext, CrcUint8 *inBuf, CrcUint32 inLen, CrcUint32 *crc32);
int SDLTest_Crc32Done(SDLTest_Crc32Context * crcContext);
