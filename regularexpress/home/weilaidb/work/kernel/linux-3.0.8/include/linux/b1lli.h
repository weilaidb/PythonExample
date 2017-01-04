#define _B1LLI_H_
typedef struct avmb1_t4file  avmb1_t4file;
typedef struct avmb1_loaddef  avmb1_loaddef;
typedef struct avmb1_loadandconfigdef  avmb1_loadandconfigdef;
typedef struct avmb1_resetdef  avmb1_resetdef;
typedef struct avmb1_getdef  avmb1_getdef;
typedef struct avmb1_carddef  avmb1_carddef;
#define AVM_CARDTYPE_B1		0
#define AVM_CARDTYPE_T1		1
#define AVM_CARDTYPE_M1		2
#define AVM_CARDTYPE_M2		3
typedef struct avmb1_extcarddef  avmb1_extcarddef;
#define	AVMB1_LOAD		0
#define AVMB1_ADDCARD		1
#define AVMB1_RESETCARD		2
#define	AVMB1_LOAD_AND_CONFIG	3
#define	AVMB1_ADDCARD_WITH_TYPE	4
#define AVMB1_GET_CARDINFO	5
#define AVMB1_REMOVECARD	6
#define	AVMB1_REGISTERCARD_IS_OBSOLETE
