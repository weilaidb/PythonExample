unsigned int SingleCPDO(struct roundingData *roundData, const unsigned int opcode, FPREG * rFd);
unsigned int DoubleCPDO(struct roundingData *roundData, const unsigned int opcode, FPREG * rFd);
unsigned int ExtendedCPDO(struct roundingData *roundData, const unsigned int opcode, FPREG * rFd);
unsigned int EmulateCPDO(const unsigned int opcode)
