#define _SDL_test_md5_h
typedef unsigned long int MD5UINT4;
typedef struct  SDLTest_Md5Context;
void SDLTest_Md5Init(SDLTest_Md5Context * mdContext);
void SDLTest_Md5Update(SDLTest_Md5Context * mdContext, unsigned char *inBuf,
unsigned int inLen);
void SDLTest_Md5Final(SDLTest_Md5Context * mdContext);
