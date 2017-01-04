void   _Set_D_SsfdcRdCmd     (BYTE);
void   _Set_D_SsfdcRdAddr    (BYTE);
void   _Set_D_SsfdcRdChip    (void);
void   _Set_D_SsfdcRdStandby (void);
void   _Start_D_SsfdcRdHwECC (void);
void   _Stop_D_SsfdcRdHwECC  (void);
void   _Load_D_SsfdcRdHwECC  (BYTE);
void   _Set_D_SsfdcWrCmd     (BYTE);
void   _Set_D_SsfdcWrAddr    (BYTE);
void   _Set_D_SsfdcWrBlock   (void);
void   _Set_D_SsfdcWrStandby (void);
void   _Start_D_SsfdcWrHwECC (void);
void   _Load_D_SsfdcWrHwECC  (BYTE);
int    _Check_D_SsfdcBusy    (WORD);
int    _Check_D_SsfdcStatus  (void);
void   _Reset_D_SsfdcErr     (void);
void   _Read_D_SsfdcBuf      (BYTE *);
void   _Write_D_SsfdcBuf     (BYTE *);
void   _Read_D_SsfdcByte     (BYTE *);
void   _ReadRedt_D_SsfdcBuf  (BYTE *);
void   _WriteRedt_D_SsfdcBuf (BYTE *);
BYTE   _Check_D_DevCode      (BYTE);
void   _Set_D_ECCdata        (BYTE,BYTE *);
void   _Calc_D_ECCdata       (BYTE *);
struct SSFDCTYPE                Ssfdc;
struct ADDRESS                  Media;
struct CIS_AREA                 CisArea;
static BYTE                            EccBuf[6];
extern PBYTE                    SMHostAddr;
extern DWORD                    ErrXDCode;
extern WORD  ReadBlock;
extern WORD  WriteBlock;
#define EVEN                    0
#define ODD                     1
int Check_D_DataBlank(BYTE *redundant)
int Check_D_FailBlock(BYTE *redundant)
int Check_D_DataStatus(BYTE *redundant)
int Load_D_LogBlockAddr(BYTE *redundant)
void Clr_D_RedundantData(BYTE *redundant)
void Set_D_LogBlockAddr(BYTE *redundant)
void Set_D_FailBlock(BYTE *redundant)
void Set_D_DataStaus(BYTE *redundant)
void Ssfdc_D_Reset(struct us_data *us)
int Ssfdc_D_ReadCisSect(struct us_data *us, BYTE *buf,BYTE *redundant)
int Ssfdc_D_ReadSect(struct us_data *us, BYTE *buf,BYTE *redundant)
int Ssfdc_D_ReadBlock(struct us_data *us, WORD count, BYTE *buf,BYTE *redundant)
int Ssfdc_D_CopyBlock(struct us_data *us, WORD count, BYTE *buf,BYTE *redundant)
int Ssfdc_D_WriteSectForCopy(struct us_data *us, BYTE *buf, BYTE *redundant)
int Ssfdc_D_EraseBlock(struct us_data *us)
int Ssfdc_D_ReadRedtData(struct us_data *us, BYTE *redundant)
int Ssfdc_D_WriteRedtData(struct us_data *us, BYTE *redundant)
int Ssfdc_D_CheckStatus(void)
int Set_D_SsfdcModel(BYTE dcode)
BYTE _Check_D_DevCode(BYTE dcode)
int Check_D_ReadError(BYTE *redundant)
int Check_D_Correct(BYTE *buf,BYTE *redundant)
int Check_D_CISdata(BYTE *buf, BYTE *redundant)
void Set_D_RightECC(BYTE *redundant)
