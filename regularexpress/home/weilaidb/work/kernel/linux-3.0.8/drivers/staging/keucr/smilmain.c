int         Check_D_LogCHS              (WORD *,BYTE *,BYTE *);
void        Initialize_D_Media          (void);
void        PowerOff_D_Media            (void);
int         Check_D_MediaPower          (void);
int         Check_D_MediaExist          (void);
int         Check_D_MediaWP             (void);
int         Check_D_MediaFmt            (struct us_data *);
int         Check_D_MediaFmtForEraseAll (struct us_data *);
int         Conv_D_MediaAddr            (struct us_data *, DWORD);
int         Inc_D_MediaAddr             (struct us_data *);
int         Check_D_FirstSect           (void);
int         Check_D_LastSect            (void);
int         Media_D_ReadOneSect         (struct us_data *, WORD, BYTE *);
int         Media_D_WriteOneSect        (struct us_data *, WORD, BYTE *);
int         Media_D_CopyBlockHead       (struct us_data *);
int         Media_D_CopyBlockTail       (struct us_data *);
int         Media_D_EraseOneBlock       (void);
int         Media_D_EraseAllBlock       (void);
int  Copy_D_BlockAll             (struct us_data *, DWORD);
int  Copy_D_BlockHead            (struct us_data *);
int  Copy_D_BlockTail            (struct us_data *);
int  Reassign_D_BlockHead        (struct us_data *);
int  Assign_D_WriteBlock         (void);
int  Release_D_ReadBlock         (struct us_data *);
int  Release_D_WriteBlock        (struct us_data *);
int  Release_D_CopySector        (struct us_data *);
int  Copy_D_PhyOneSect           (struct us_data *);
int  Read_D_PhyOneSect           (struct us_data *, WORD, BYTE *);
int  Write_D_PhyOneSect          (struct us_data *, WORD, BYTE *);
int  Erase_D_PhyOneBlock         (struct us_data *);
int  Set_D_PhyFmtValue           (struct us_data *);
int  Search_D_CIS                (struct us_data *);
int  Make_D_LogTable             (struct us_data *);
void Check_D_BlockIsFull         (void);
int  MarkFail_D_PhyOneBlock      (struct us_data *);
DWORD ErrXDCode;
DWORD ErrCode;
static BYTE  WorkBuf[SECTSIZE];
static BYTE  Redundant[REDTSIZE];
static BYTE  WorkRedund[REDTSIZE];
static WORD  *Log2Phy[MAX_ZONENUM];
static BYTE  Assign[MAX_ZONENUM][MAX_BLOCKNUM/8];
static WORD  AssignStart[MAX_ZONENUM];
WORD  ReadBlock;
WORD  WriteBlock;
DWORD MediaChange;
static DWORD SectCopyMode;
static BYTE BitData[] =  ;
#define Set_D_Bit(a,b)    (a[(BYTE)((b)/8)]|= BitData[(b)%8])
#define Clr_D_Bit(a,b)    (a[(BYTE)((b)/8)]&=~BitData[(b)%8])
#define Chk_D_Bit(a,b)    (a[(BYTE)((b)/8)] & BitData[(b)%8])
BYTE     IsSSFDCCompliance;
BYTE     IsXDCompliance;
int SM_FreeMem(void)
int Media_D_ReadSector(struct us_data *us, DWORD start,WORD count,BYTE *buf)
int Media_D_CopySector(struct us_data *us, DWORD start,WORD count,BYTE *buf)
int Release_D_CopySector(struct us_data *us)
int Check_D_MediaFmt(struct us_data *us)
int Conv_D_MediaAddr(struct us_data *us, DWORD addr)
int Inc_D_MediaAddr(struct us_data *us)
int Media_D_ReadOneSect(struct us_data *us, WORD count, BYTE *buf)
int Copy_D_BlockAll(struct us_data *us, DWORD mode)
int Assign_D_WriteBlock(void)
int Release_D_ReadBlock(struct us_data *us)
int Release_D_WriteBlock(struct us_data *us)
int Copy_D_PhyOneSect(struct us_data *us)
int Read_D_PhyOneSect(struct us_data *us, WORD count, BYTE *buf)
int Erase_D_PhyOneBlock(struct us_data *us)
int Set_D_PhyFmtValue(struct us_data *us)
int Search_D_CIS(struct us_data *us)
int Make_D_LogTable(struct us_data *us)
int MarkFail_D_PhyOneBlock(struct us_data *us)
/*
