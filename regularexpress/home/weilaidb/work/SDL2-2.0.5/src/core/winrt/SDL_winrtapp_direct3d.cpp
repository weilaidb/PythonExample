using namespace std;
using namespace concurrency;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Core;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Devices::Input;
using namespace Windows::Graphics::Display;
using namespace Windows::Foundation;
using namespace Windows::System;
using namespace Windows::UI::Core;
using namespace Windows::UI::Input;
#if WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
using namespace Windows::Phone::UI::Input;
extern "C"
#if SDL_VIDEO_RENDER_D3D11 && !SDL_RENDER_DISABLED
extern "C" void D3D11_Trim(SDL_Renderer *);
SDL_WinRTApp ^ SDL_WinRTGlobalApp = nullptr;
ref class SDLApplicationSource sealed : Windows::ApplicationModel::Core::IFrameworkViewSource
;
IFrameworkView^ SDLApplicationSource::CreateView()
int SDL_WinRTInitNonXAMLApp(int (*mainFunction)(int, char **))
static void WINRT_SetDisplayOrientationsPreference(void *userdata, const char *name, const char *oldValue, const char *newValue)
static void
WINRT_ProcessWindowSizeChange()
SDL_WinRTApp::SDL_WinRTApp() :
m_windowClosed(false),
m_windowVisible(true)
void SDL_WinRTApp::Initialize(CoreApplicationView^ applicationView)
#if NTDDI_VERSION > NTDDI_WIN8
void SDL_WinRTApp::OnOrientationChanged(DisplayInformation^ sender, Object^ args)
void SDL_WinRTApp::OnOrientationChanged(Object^ sender)
void SDL_WinRTApp::SetWindow(CoreWindow^ window)
void SDL_WinRTApp::Load(Platform::String^ entryPoint)
void SDL_WinRTApp::Run()
static bool IsSDLWindowEventPending(SDL_WindowEventID windowEventID)
bool SDL_WinRTApp::ShouldWaitForAppResumeEvents()
void SDL_WinRTApp::PumpEvents()
void SDL_WinRTApp::Uninitialize()
#if (WINAPI_FAMILY == WINAPI_FAMILY_APP) && (NTDDI_VERSION < NTDDI_WIN10)
void SDL_WinRTApp::OnSettingsPaneCommandsRequested(
Windows::UI::ApplicationSettings::SettingsPane ^p,
Windows::UI::ApplicationSettings::SettingsPaneCommandsRequestedEventArgs ^args)
void SDL_WinRTApp::OnWindowSizeChanged(CoreWindow^ sender, WindowSizeChangedEventArgs^ args)
void SDL_WinRTApp::OnVisibilityChanged(CoreWindow^ sender, VisibilityChangedEventArgs^ args)
void SDL_WinRTApp::OnWindowActivated(CoreWindow^ sender, WindowActivatedEventArgs^ args)
void SDL_WinRTApp::OnWindowClosed(CoreWindow^ sender, CoreWindowEventArgs^ args)
void SDL_WinRTApp::OnAppActivated(CoreApplicationView^ applicationView, IActivatedEventArgs^ args)
void SDL_WinRTApp::OnSuspending(Platform::Object^ sender, SuspendingEventArgs^ args)
void SDL_WinRTApp::OnResuming(Platform::Object^ sender, Platform::Object^ args)
void SDL_WinRTApp::OnExiting(Platform::Object^ sender, Platform::Object^ args)
static void
WINRT_LogPointerEvent(const char * header, Windows::UI::Core::PointerEventArgs ^ args, Windows::Foundation::Point transformedPoint)
void SDL_WinRTApp::OnPointerPressed(CoreWindow^ sender, PointerEventArgs^ args)
void SDL_WinRTApp::OnPointerMoved(CoreWindow^ sender, PointerEventArgs^ args)
void SDL_WinRTApp::OnPointerReleased(CoreWindow^ sender, PointerEventArgs^ args)
void SDL_WinRTApp::OnPointerEntered(CoreWindow^ sender, PointerEventArgs^ args)
void SDL_WinRTApp::OnPointerExited(CoreWindow^ sender, PointerEventArgs^ args)
void SDL_WinRTApp::OnPointerWheelChanged(CoreWindow^ sender, PointerEventArgs^ args)
void SDL_WinRTApp::OnMouseMoved(MouseDevice^ mouseDevice, MouseEventArgs^ args)
void SDL_WinRTApp::OnKeyDown(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args)
void SDL_WinRTApp::OnKeyUp(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::KeyEventArgs^ args)
void SDL_WinRTApp::OnCharacterReceived(Windows::UI::Core::CoreWindow^ sender, Windows::UI::Core::CharacterReceivedEventArgs^ args)
template <typename BackButtonEventArgs>
static void WINRT_OnBackButtonPressed(BackButtonEventArgs ^ args)
#if NTDDI_VERSION == NTDDI_WIN10
void SDL_WinRTApp::OnBackButtonPressed(Platform::Object^ sender, Windows::UI::Core::BackRequestedEventArgs^ args)
#elif WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
void SDL_WinRTApp::OnBackButtonPressed(Platform::Object^ sender, Windows::Phone::UI::Input::BackPressedEventArgs^ args)
#if NTDDI_VERSION >= NTDDI_WIN10
void SDL_WinRTApp::OnGamepadAdded(Platform::Object ^sender, Windows::Gaming::Input::Gamepad ^gamepad)
