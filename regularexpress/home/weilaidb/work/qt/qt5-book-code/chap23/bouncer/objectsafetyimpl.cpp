long ObjectSafetyImpl::queryInterface(const QUuid &iid, void **iface)
HRESULT WINAPI ObjectSafetyImpl::GetInterfaceSafetyOptions(
REFIID, DWORD *pdwSupportedOptions,
DWORD *pdwEnabledOptions)
HRESULT WINAPI ObjectSafetyImpl::SetInterfaceSafetyOptions(
REFIID, DWORD,
DWORD)
