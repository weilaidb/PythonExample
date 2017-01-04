#define PPC_H
struct powerpc_opcode
;
extern const struct powerpc_opcode powerpc_opcodes[];
extern const int powerpc_num_opcodes;
#define PPC_OPCODE_PPC			 1
#define PPC_OPCODE_POWER		 2
#define PPC_OPCODE_POWER2		 4
#define PPC_OPCODE_32			 8
#define PPC_OPCODE_64		      0x10
#define PPC_OPCODE_601		      0x20
#define PPC_OPCODE_COMMON	      0x40
#define PPC_OPCODE_ANY		      0x80
#define PPC_OPCODE_64_BRIDGE	     0x100
#define PPC_OPCODE_ALTIVEC	     0x200
#define PPC_OPCODE_403		     0x400
#define PPC_OPCODE_BOOKE	     0x800
#define PPC_OPCODE_BOOKE64	    0x1000
#define PPC_OPCODE_440		    0x2000
#define PPC_OPCODE_POWER4	    0x4000
#define PPC_OPCODE_NOPOWER4	    0x8000
#define PPC_OPCODE_CLASSIC	   0x10000
#define PPC_OPCODE_SPE		   0x20000
#define PPC_OPCODE_ISEL		   0x40000
#define PPC_OPCODE_EFS		   0x80000
#define PPC_OPCODE_BRLOCK	  0x100000
#define PPC_OPCODE_PMR		  0x200000
#define PPC_OPCODE_CACHELCK	  0x400000
#define PPC_OPCODE_RFMCI	  0x800000
#define PPC_OPCODE_POWER5	 0x1000000
#define PPC_OPCODE_E300          0x2000000
#define PPC_OPCODE_POWER6	 0x4000000
#define PPC_OPCODE_CELL		 0x8000000
#define PPC_OP(i) (((i) >> 26) & 0x3f)
struct powerpc_operand
;
extern const struct powerpc_operand powerpc_operands[];
#define PPC_OPERAND_SIGNED (01)
#define PPC_OPERAND_SIGNOPT (02)
#define PPC_OPERAND_FAKE (04)
#define PPC_OPERAND_PARENS (010)
#define PPC_OPERAND_CR (020)
#define PPC_OPERAND_GPR (040)
#define PPC_OPERAND_GPR_0 (0100)
#define PPC_OPERAND_FPR (0200)
#define PPC_OPERAND_RELATIVE (0400)
#define PPC_OPERAND_ABSOLUTE (01000)
#define PPC_OPERAND_OPTIONAL (02000)
#define PPC_OPERAND_NEXT (04000)
#define PPC_OPERAND_NEGATIVE (010000)
#define PPC_OPERAND_VR (020000)
#define PPC_OPERAND_DS (040000)
#define PPC_OPERAND_DQ (0100000)
struct powerpc_macro
;
extern const struct powerpc_macro powerpc_macros[];
extern const int powerpc_num_macros;
