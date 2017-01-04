#define _SPU_CSA_H_
#define NR_SPU_GPRS         	128
#define NR_SPU_SPRS         	9
#define NR_SPU_REGS_PAD	    	7
#define NR_SPU_SPILL_REGS   	144
#define SIZEOF_SPU_SPILL_REGS	NR_SPU_SPILL_REGS * 16
#define SPU_SAVE_COMPLETE      	0x3FFB
#define SPU_RESTORE_COMPLETE   	0x3FFC
#define SPU_STOPPED_STATUS_P    1
#define SPU_STOPPED_STATUS_I    2
#define SPU_STOPPED_STATUS_H    3
#define SPU_STOPPED_STATUS_S    4
#define SPU_STOPPED_STATUS_S_I  5
#define SPU_STOPPED_STATUS_S_P  6
#define SPU_STOPPED_STATUS_P_H  7
#define SPU_STOPPED_STATUS_P_I  8
#define SPU_STOPPED_STATUS_R    9
#define SPU_DECR_STATUS_RUNNING 0x1
#define SPU_DECR_STATUS_WRAPPED 0x2
struct spu_reg128 ;
struct spu_lscsa ;
struct spu_problem_collapsed ;
struct spu_priv1_collapsed ;
struct spu_priv2_collapsed ;
struct spu_state ;
