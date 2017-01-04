#if WINAPI_FAMILY == WINAPI_FAMILY_APP
SDL_bool WINRT_XAMLWasEnabled = SDL_FALSE;
#if WINAPI_FAMILY == WINAPI_FAMILY_APP
extern "C"
ISwapChainBackgroundPanelNative * WINRT_GlobalSwapChainBackgroundPanelNative = NULL;
static Windows::Foundation::EventRegistrationToken	WINRT_XAMLAppEventToken;
#if WINAPI_FAMILY == WINAPI_FAMILY_APP
static void
WINRT_OnPointerPressedViaXAML(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ args)
static void
WINRT_OnPointerMovedViaXAML(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ args)
static void
WINRT_OnPointerReleasedViaXAML(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ args)
static void
WINRT_OnPointerWheelChangedViaXAML(Platform::Object^ sender, Windows::UI::Xaml::Input::PointerRoutedEventArgs^ args)
#if WINAPI_FAMILY == WINAPI_FAMILY_APP
static void
WINRT_OnRenderViaXAML(_In_ Platform::Object^ sender, _In_ Platform::Object^ args)
int
SDL_WinRTInitXAMLApp(int (*mainFunction)(int, char **), void * backgroundPanelAsIInspectable)
