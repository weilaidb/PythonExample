struct external_filehdr ;
#define U802WRMAGIC     0730
#define U802ROMAGIC     0735
#define U802TOCMAGIC    0737
#define BADMAG(x)	\
((x).f_magic != U802ROMAGIC && (x).f_magic != U802WRMAGIC && \
(x).f_magic != U802TOCMAGIC)
#define	FILHDR	struct external_filehdr
#define	FILHSZ	20
typedef struct
AOUTHDR;
#define AOUTSZ 72
#define SMALL_AOUTSZ (28)
#define AOUTHDRSZ 72
#define	RS6K_AOUTHDR_OMAGIC	0x0107
#define	RS6K_AOUTHDR_NMAGIC	0x0108
#define	RS6K_AOUTHDR_ZMAGIC	0x010B
struct external_scnhdr ;
#define _TEXT	".text"
#define _DATA	".data"
#define _BSS	".bss"
#define _PAD	".pad"
#define _LOADER	".loader"
#define	SCNHDR	struct external_scnhdr
#define	SCNHSZ	40
#define STYP_LOADER 0x1000
#define STYP_DEBUG 0x2000
#define STYP_OVRFLO 0x8000
struct external_lineno ;
#define	LINENO	struct external_lineno
#define	LINESZ	6
#define E_SYMNMLEN	8
#define E_FILNMLEN	14
#define E_DIMNUM	4
struct external_syment
;
#define N_BTMASK	(017)
#define N_TMASK		(060)
#define N_BTSHFT	(4)
#define N_TSHIFT	(2)
union external_auxent ;
#define	SYMENT	struct external_syment
#define	SYMESZ	18
#define	AUXENT	union external_auxent
#define	AUXESZ	18
#define DBXMASK 0x80
#define SYMNAME_IN_DEBUG(symptr) ((symptr)->n_sclass & DBXMASK)
struct external_reloc ;
#define RELOC struct external_reloc
#define RELSZ 10
#define DEFAULT_DATA_SECTION_ALIGNMENT 4
#define DEFAULT_BSS_SECTION_ALIGNMENT 4
#define DEFAULT_TEXT_SECTION_ALIGNMENT 4
#define DEFAULT_SECTION_ALIGNMENT 4
