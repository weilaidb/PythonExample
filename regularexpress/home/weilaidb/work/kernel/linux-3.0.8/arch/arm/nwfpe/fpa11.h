#define __FPA11_H__
#define GET_FPA11() ((FPA11 *)(&current_thread_info()->fpstate))
#define GET_USERREG() ((struct pt_regs *)(THREAD_START_SP + (unsigned long)current_thread_info()) - 1)
struct roundingData ;
#define		typeNone		0x00
#define		typeSingle		0x01
#define		typeDouble		0x02
#define		typeExtended		0x03
typedef union tagFPREG  __attribute__ ((packed,aligned(4))) FPREG;
typedef struct tagFPA11  __attribute__ ((packed,aligned(4))) FPA11;
extern int8 SetRoundingMode(const unsigned int);
extern int8 SetRoundingPrecision(const unsigned int);
extern void nwfpe_init_fpa(union fp_state *fp);
extern unsigned int EmulateAll(unsigned int opcode);
extern unsigned int EmulateCPDT(const unsigned int opcode);
extern unsigned int EmulateCPDO(const unsigned int opcode);
extern unsigned int EmulateCPRT(const unsigned int opcode);
extern unsigned int PerformLDF(const unsigned int opcode);
extern unsigned int PerformSTF(const unsigned int opcode);
extern unsigned int PerformLFM(const unsigned int opcode);
extern unsigned int PerformSFM(const unsigned int opcode);
extern unsigned int SingleCPDO(struct roundingData *roundData,
const unsigned int opcode, FPREG * rFd);
extern unsigned int DoubleCPDO(struct roundingData *roundData,
const unsigned int opcode, FPREG * rFd);
extern unsigned int ExtendedCPDO(struct roundingData *roundData,
const unsigned int opcode, FPREG * rFd);
