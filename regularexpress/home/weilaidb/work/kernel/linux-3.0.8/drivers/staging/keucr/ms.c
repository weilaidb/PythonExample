int MS_ReaderCopyBlock(struct us_data *us, WORD oldphy, WORD newphy,
WORD PhyBlockAddr, BYTE PageNum, PBYTE buf, WORD len)
int MS_ReaderReadPage(struct us_data *us, DWORD PhyBlockAddr,
BYTE PageNum, PDWORD PageBuf, MS_LibTypeExtdat *ExtraDat)
int MS_ReaderEraseBlock(struct us_data *us, DWORD PhyBlockAddr)
int MS_CardInit(struct us_data *us)
int MS_LibCheckDisableBlock(struct us_data *us, WORD PhyBlock)
void MS_LibFreeAllocatedArea(struct us_data *us)
void MS_LibFreeWriteBuf(struct us_data *us)
int MS_LibFreeLogicalMap(struct us_data *us)
int MS_LibProcessBootBlock(struct us_data *us, WORD PhyBlock, BYTE *PageData)
int MS_LibAllocLogicalMap(struct us_data *us)
int MS_LibSetBootBlockMark(struct us_data *us, WORD phyblk)
int MS_LibSetLogicalBlockMark(struct us_data *us, WORD phyblk, WORD mark)
int MS_LibSetInitialErrorBlock(struct us_data *us, WORD phyblk)
int MS_LibScanLogicalBlockNumber(struct us_data *us, WORD btBlk1st)
int MS_LibAllocWriteBuf(struct us_data *us)
void MS_LibClearWriteBuf(struct us_data *us)
void MS_LibPhy2LogRange(WORD PhyBlock, WORD *LogStart, WORD *LogEnde)
int MS_LibReadExtraBlock(struct us_data *us, DWORD PhyBlock,
BYTE PageNum, BYTE blen, void *buf)
int MS_LibReadExtra(struct us_data *us, DWORD PhyBlock,
BYTE PageNum, MS_LibTypeExtdat *ExtraDat)
int MS_LibSetAcquiredErrorBlock(struct us_data *us, WORD phyblk)
int MS_LibErasePhyBlock(struct us_data *us, WORD phyblk)
int MS_LibErrorPhyBlock(struct us_data *us, WORD phyblk)
int MS_LibOverwriteExtra(struct us_data *us, DWORD PhyBlockAddr,
BYTE PageNum, BYTE OverwriteFlag)
int MS_LibForceSetLogicalPair(struct us_data *us, WORD logblk, WORD phyblk)
int MS_LibSetLogicalPair(struct us_data *us, WORD logblk, WORD phyblk)
int MS_CountFreeBlock(struct us_data *us, WORD PhyBlock)
int MS_LibSearchBlockFromPhysical(struct us_data *us, WORD phyblk)
int MS_LibSearchBlockFromLogical(struct us_data *us, WORD logblk)