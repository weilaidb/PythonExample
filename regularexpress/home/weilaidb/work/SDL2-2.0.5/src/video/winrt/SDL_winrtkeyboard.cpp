#if SDL_VIDEO_DRIVER_WINRT
extern "C"
static SDL_Scancode WinRT_Official_Keycodes[] = ;
static SDL_Scancode
WINRT_TranslateUnofficialKeycode(int keycode)
static SDL_Scancode
WINRT_TranslateKeycode(int keycode, unsigned int nativeScancode)
void
WINRT_ProcessKeyDownEvent(Windows::UI::Core::KeyEventArgs ^args)
void
WINRT_ProcessKeyUpEvent(Windows::UI::Core::KeyEventArgs ^args)
void
WINRT_ProcessCharacterReceivedEvent(Windows::UI::Core::CharacterReceivedEventArgs ^args)
#if NTDDI_VERSION >= NTDDI_WIN10
SDL_bool WINRT_HasScreenKeyboardSupport(_THIS)
void WINRT_ShowScreenKeyboard(_THIS, SDL_Window *window)
void WINRT_HideScreenKeyboard(_THIS, SDL_Window *window)
SDL_bool WINRT_IsScreenKeyboardShown(_THIS, SDL_Window *window)
