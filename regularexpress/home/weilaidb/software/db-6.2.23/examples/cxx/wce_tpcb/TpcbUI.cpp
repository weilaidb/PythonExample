#define MAX_LOADSTRING 100
HINSTANCE		hInst;
HWND			hWndDlgMain;
HWND			hWndFrame;
TpcbExample		*tpcb;
ATOM				MyRegisterClass	(HINSTANCE, LPTSTR);
BOOL				InitInstance	(HINSTANCE, int);
LRESULT CALLBACK	WndProc			(HWND, UINT, WPARAM, LPARAM);
LRESULT CALLBACK	MainDialog		(HWND, UINT, WPARAM, LPARAM);
LRESULT CALLBACK	InitDialog		(HWND, UINT, WPARAM, LPARAM);
LRESULT CALLBACK	AdvancedDialog	(HWND, UINT, WPARAM, LPARAM);
LRESULT CALLBACK	RunDialog		(HWND, UINT, WPARAM, LPARAM);
BOOL				GetHomeDirectory(HWND, BOOL);
BOOL				RecursiveDirRemove(wchar_t *);
int WINAPI WinMain(	HINSTANCE hInstance,
HINSTANCE hPrevInstance,
LPTSTR    lpCmdLine,
int       nCmdShow)
ATOM MyRegisterClass(HINSTANCE hInstance, LPTSTR szWindowClass)
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
LRESULT CALLBACK MainDialog(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
LRESULT CALLBACK AdvancedDialog(HWND hDlg, UINT message,
WPARAM wParam, LPARAM lParam)
BOOL
GetHomeDirectory(HWND hDlg, BOOL init)
BOOL
RecursiveDirRemove(wchar_t *dirname)
extern "C"
