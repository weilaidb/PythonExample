#define	_COMSTATS_H
typedef struct  comstats_t;
#define	COM_MAXPANELS	8
typedef struct  companel_t;
typedef struct  combrd_t;
#define	COM_GETPORTSTATS	_IO('c',30)
#define	COM_CLRPORTSTATS	_IO('c',31)
#define	COM_GETBRDSTATS		_IO('c',32)
#define	COM_READPORT		_IO('c',40)
#define	COM_READBOARD		_IO('c',41)
#define	COM_READPANEL		_IO('c',42)
