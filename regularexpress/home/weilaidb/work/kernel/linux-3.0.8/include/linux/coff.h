#define  E_SYMNMLEN  8
#define  E_FILNMLEN 14
#define  E_DIMNUM    4
#define COFF_SHORT_L(ps) ((short)(((unsigned short)((unsigned char)ps[1])<<8)|\
((unsigned short)((unsigned char)ps[0]))))
#define COFF_LONG_L(ps) (((long)(((unsigned long)((unsigned char)ps[3])<<24) |\
((unsigned long)((unsigned char)ps[2])<<16) |\
((unsigned long)((unsigned char)ps[1])<<8)  |\
((unsigned long)((unsigned char)ps[0])))))
#define COFF_SHORT_H(ps) ((short)(((unsigned short)((unsigned char)ps[0])<<8)|\
((unsigned short)((unsigned char)ps[1]))))
#define COFF_LONG_H(ps) (((long)(((unsigned long)((unsigned char)ps[0])<<24) |\
((unsigned long)((unsigned char)ps[1])<<16) |\
((unsigned long)((unsigned char)ps[2])<<8)  |\
((unsigned long)((unsigned char)ps[3])))))
#define COFF_LONG(v)   COFF_LONG_L(v)
#define COFF_SHORT(v)  COFF_SHORT_L(v)
struct COFF_filehdr ;
#define  COFF_F_RELFLG		0000001
#define  COFF_F_EXEC		0000002
#define  COFF_F_LNNO		0000004
#define  COFF_F_LSYMS		0000010
#define  COFF_F_MINMAL		0000020
#define  COFF_F_UPDATE		0000040
#define  COFF_F_SWABD		0000100
#define  COFF_F_AR16WR		0000200
#define  COFF_F_AR32WR		0000400
#define  COFF_F_AR32W		0001000
#define  COFF_F_PATCH		0002000
#define  COFF_F_NODF		0002000
#define	COFF_I386MAGIC	        0x14c
#define	COFF_FILHDR	struct COFF_filehdr
#define	COFF_FILHSZ	sizeof(COFF_FILHDR)
typedef struct
COFF_AOUTHDR;
#define COFF_AOUTSZ (sizeof(COFF_AOUTHDR))
#define COFF_STMAGIC	0401
#define COFF_OMAGIC     0404
#define COFF_JMAGIC     0407
#define COFF_DMAGIC     0410
#define COFF_ZMAGIC     0413
#define COFF_SHMAGIC	0443
struct COFF_scnhdr ;
#define	COFF_SCNHDR	struct COFF_scnhdr
#define	COFF_SCNHSZ	sizeof(COFF_SCNHDR)
#define COFF_TEXT	".text"
#define COFF_DATA	".data"
#define COFF_BSS	".bss"
#define COFF_COMMENT    ".comment"
#define COFF_LIB        ".lib"
#define COFF_SECT_TEXT  0
#define COFF_SECT_DATA  1
#define COFF_SECT_BSS   2
#define COFF_SECT_REQD  3
#define COFF_STYP_REG     0x00
#define COFF_STYP_DSECT   0x01
#define COFF_STYP_NOLOAD  0x02
#define COFF_STYP_GROUP   0x04
#define COFF_STYP_PAD     0x08
#define COFF_STYP_COPY    0x10
#define COFF_STYP_TEXT    0x20
#define COFF_STYP_DATA    0x40
#define COFF_STYP_BSS     0x80
#define COFF_STYP_INFO   0x200
#define COFF_STYP_OVER   0x400
#define COFF_STYP_LIB    0x800
struct COFF_slib ;
#define	COFF_SLIBHD	struct COFF_slib
#define	COFF_SLIBSZ	sizeof(COFF_SLIBHD)
struct COFF_lineno ;
#define	COFF_LINENO	struct COFF_lineno
#define	COFF_LINESZ	6
#define COFF_E_SYMNMLEN	 8
#define COFF_E_FILNMLEN	14
#define COFF_E_DIMNUM	 4
struct COFF_syment
;
#define COFF_N_BTMASK	(0xf)
#define COFF_N_TMASK	(0x30)
#define COFF_N_BTSHFT	(4)
#define COFF_N_TSHIFT	(2)
union COFF_auxent ;
#define	COFF_SYMENT	struct COFF_syment
#define	COFF_SYMESZ	18
#define	COFF_AUXENT	union COFF_auxent
#define	COFF_AUXESZ	18
#define COFF_ETEXT	"etext"
struct COFF_reloc ;
#define COFF_RELOC struct COFF_reloc
#define COFF_RELSZ 10
#define COFF_DEF_DATA_SECTION_ALIGNMENT  4
#define COFF_DEF_BSS_SECTION_ALIGNMENT   4
#define COFF_DEF_TEXT_SECTION_ALIGNMENT  4
#define COFF_DEF_SECTION_ALIGNMENT       4
