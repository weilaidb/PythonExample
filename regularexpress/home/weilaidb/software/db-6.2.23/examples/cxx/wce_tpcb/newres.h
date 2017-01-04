#define	__NEWRES_H__
#if !defined(UNDER_CE)
#define UNDER_CE _WIN32_WCE
#if defined(_WIN32_WCE)
#if !defined(WCEOLE_ENABLE_DIALOGEX)
#define DIALOGEX DIALOG DISCARDABLE
#define  SHMENUBAR RCDATA
#if defined(WIN32_PLATFORM_PSPC) && (_WIN32_WCE >= 300)
#define I_IMAGENONE		(-2)
#define NOMENU			0xFFFF
#define IDS_SHNEW		1
#define IDM_SHAREDNEW        10
#define IDM_SHAREDNEWDEFAULT 11
#define	_INC_WINDOWS
#undef IDC_STATIC
#define	IDC_STATIC      (-1)
