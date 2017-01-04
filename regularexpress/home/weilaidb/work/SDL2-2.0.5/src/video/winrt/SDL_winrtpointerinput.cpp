#if SDL_VIDEO_DRIVER_WINRT
extern "C"
static SDL_TouchID WINRT_TouchID = 1;
static unsigned int WINRT_LeftFingerDown = 0;
void
WINRT_InitTouch(_THIS)
Windows::Foundation::Point
WINRT_TransformCursorPosition(SDL_Window * window,
Windows::Foundation::Point rawPosition,
WINRT_CursorNormalizationType normalization)
static inline int
_lround(float arg)
Uint8
WINRT_GetSDLButtonForPointerPoint(Windows::UI::Input::PointerPoint ^pt)
static bool
WINRT_IsTouchEvent(Windows::UI::Input::PointerPoint ^pointerPoint)
void WINRT_ProcessPointerPressedEvent(SDL_Window *window, Windows::UI::Input::PointerPoint ^pointerPoint)
void
WINRT_ProcessPointerMovedEvent(SDL_Window *window, Windows::UI::Input::PointerPoint ^pointerPoint)
void WINRT_ProcessPointerReleasedEvent(SDL_Window *window, Windows::UI::Input::PointerPoint ^pointerPoint)
void WINRT_ProcessPointerEnteredEvent(SDL_Window *window, Windows::UI::Input::PointerPoint ^pointerPoint)
void WINRT_ProcessPointerExitedEvent(SDL_Window *window, Windows::UI::Input::PointerPoint ^pointerPoint)
void
WINRT_ProcessPointerWheelChangedEvent(SDL_Window *window, Windows::UI::Input::PointerPoint ^pointerPoint)
void
WINRT_ProcessMouseMovedEvent(SDL_Window * window, Windows::Devices::Input::MouseEventArgs ^args)
