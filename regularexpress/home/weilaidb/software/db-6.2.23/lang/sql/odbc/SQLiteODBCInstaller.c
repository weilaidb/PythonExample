#define SQLINST_VERSION				"1.2"
#define SQLINST_ARGID_COUNT			9
#define SQLINST_ARGID_UNKNOWN		(-1)
#define SQLINST_ARGID_HELP			(0)
#define SQLINST_ARGID_VERSION		(1)
#define SQLINST_ARGID_INSTALL		(2)
#define SQLINST_ARGID_UNINSTALL		(3)
#define SQLINST_ARGID_ALL			(4)
#define SQLINST_ARGID_DRIVER		(5)
#define SQLINST_ARGID_QUIET			(6)
#define SQLINST_ARGID_SHOW_MSG_BOX	(7)
#define SQLINST_ARGID_DLL			(8)
#define SQLINST_MAX_BUFFER			(1024)
#define SQLINST_MAX_ARG_VALUE		(5)
#define SQLINST_MAX_ARGS			(10)
#define SQLINST_DRIVER_COUNT		(4)
#define SQLINST_DRIVER_SQL2			(0x01)
#define SQLINST_DRIVER_SQL2_UTF		(0x02)
#define SQLINST_DRIVER_SQL3			(0x04)
#define SQLINST_DRIVER_DLL			(0x08)
#define SQLINST_ACTION_NOT_KNOWN	(0)
#define SQLINST_ACTION_PRINT_HELP	(1)
#define SQLINST_ACTION_INSTALL		(2)
#define SQLINST_ACTION_UNINSTALL	(3)
typedef UINT (CALLBACK* InstallFunc)(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow);
typedef UINT (CALLBACK* UnInstallFunc)(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow);
struct SQLiteDriverData_Struct
;
static const struct SQLiteDriverData_Struct	g_SQLiteDriverData[SQLINST_DRIVER_COUNT] = \
;
struct ArgData_Struct
;
static const struct ArgData_Struct g_ArgData[SQLINST_ARGID_COUNT] =\
;
static const char g_Version[] = ;
struct ParstArgsData_Struct
;
struct RunningOptionData_Struct
;
unsigned char ParseArg(int argc, char* argv[], struct ParstArgsData_Struct *pDestArg, unsigned char MaxDestArg );
int RunUnInstaller( const struct RunningOptionData_Struct *pRunData );
char *SeperateArgAndValue( char *pArgName );
char GetArgID( const char *pArgName );
void SaveValues( struct ParstArgsData_Struct *pDestArg, const char *pValues );
void MessageToUser( const char *pMessage );
void MakeTempFile( char *pDestBuffer, int MaxDestBuffer, const char *pSourceBuffer );
#define SQLINST_MAX_ERROR_BUFFER	4096
char g_ErrorMessage[SQLINST_MAX_ERROR_BUFFER];
BOOL g_ShowErrorInWindowsMessageBoxes = FALSE;
int main(int argc, char* argv[])
unsigned char ParseArg(int argc, char* argv[], struct ParstArgsData_Struct *pDestArg, unsigned char MaxDestArg )
char GetArgID( const char *pArgName )
char *SeperateArgAndValue( char *pArgName )
void SaveValues( struct ParstArgsData_Struct *pDestArg, const char *pValues )
int RunUnInstaller( const struct RunningOptionData_Struct *pRunData )
void MessageToUser( const char *pMessage )
void MakeTempFile( char *pDestBuffer, int MaxDestBuffer, const char *pSourceBuffer )
