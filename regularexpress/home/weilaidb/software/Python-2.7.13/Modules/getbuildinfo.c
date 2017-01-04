#define DATE __DATE__
#define DATE "xx/xx/xx"
#define TIME __TIME__
#define TIME "xx:xx:xx"
#define SVNVERSION "$WCRANGE$$WCMODS?M:$"
#define HGVERSION ""
#define HGTAG ""
#define HGBRANCH ""
const char *
Py_GetBuildInfo(void)
const char *
_Py_svnversion(void)
const char *
_Py_hgversion(void)
const char *
_Py_hgidentifier(void)
