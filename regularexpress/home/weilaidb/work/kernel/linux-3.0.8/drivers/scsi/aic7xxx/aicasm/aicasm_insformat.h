struct ins_format1 ;
struct ins_format2 ;
struct ins_format3 ;
struct ins_format4 ;
struct ins_format5 ;
struct ins_format6 ;
union ins_formats ;
struct instruction ;
#define	AIC_OP_OR	0x0
#define	AIC_OP_AND	0x1
#define AIC_OP_XOR	0x2
#define	AIC_OP_ADD	0x3
#define	AIC_OP_ADC	0x4
#define	AIC_OP_ROL	0x5
#define	AIC_OP_BMOV	0x6
#define	AIC_OP_MVI16	0x7
#define	AIC_OP_JMP	0x8
#define AIC_OP_JC	0x9
#define AIC_OP_JNC	0xa
#define AIC_OP_CALL	0xb
#define	AIC_OP_JNE	0xc
#define	AIC_OP_JNZ	0xd
#define	AIC_OP_JE	0xe
#define	AIC_OP_JZ	0xf
#define	AIC_OP_SHL	0x10
#define	AIC_OP_SHR	0x20
#define	AIC_OP_ROR	0x30
#define	AIC_OP_OR16	0x8005
#define	AIC_OP_AND16	0x8105
#define	AIC_OP_XOR16	0x8205
#define	AIC_OP_ADD16	0x8305
#define	AIC_OP_ADC16	0x8405
#define AIC_OP_JNE16	0x8805
#define AIC_OP_JNZ16	0x8905
#define AIC_OP_JE16	0x8C05
#define AIC_OP_JZ16	0x8B05
#define AIC_OP_JMP16	0x9005
#define AIC_OP_JC16	0x9105
#define AIC_OP_JNC16	0x9205
#define AIC_OP_CALL16	0x9305
#define AIC_OP_CALL16	0x9305
#define AIC_OP_JMPF	0xA005
#define AIC_OP_CALLF	0xB005
#define AIC_OP_JCF	0xC005
#define AIC_OP_JNCF	0xD005
#define AIC_OP_CMPXCHG	0xE005