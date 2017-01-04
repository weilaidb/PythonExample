#if SDL_VIDEO_DRIVER_WINDOWS
#define SS_EDITCONTROL  0x2000
typedef struct
DLGTEMPLATEEX;
typedef struct
DLGITEMTEMPLATEEX;
typedef struct
WIN_DialogData;
static INT_PTR MessageBoxDialogProc(HWND hDlg, UINT iMessage, WPARAM wParam, LPARAM lParam)
static SDL_bool ExpandDialogSpace(WIN_DialogData *dialog, size_t space)
static SDL_bool AlignDialogData(WIN_DialogData *dialog, size_t size)
static SDL_bool AddDialogData(WIN_DialogData *dialog, const void *data, size_t size)
static SDL_bool AddDialogString(WIN_DialogData *dialog, const char *string)
static int s_BaseUnitsX;
static int s_BaseUnitsY;
static void Vec2ToDLU(short *x, short *y)
static SDL_bool AddDialogControl(WIN_DialogData *dialog, WORD type, DWORD style, DWORD exStyle, int x, int y, int w, int h, int id, const char *caption)
static SDL_bool AddDialogStatic(WIN_DialogData *dialog, int x, int y, int w, int h, const char *text)
static SDL_bool AddDialogButton(WIN_DialogData *dialog, int x, int y, int w, int h, const char *text, int id, SDL_bool isDefault)
static void FreeDialogData(WIN_DialogData *dialog)
static WIN_DialogData *CreateDialogData(int w, int h, const char *caption)
int
WIN_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid)
