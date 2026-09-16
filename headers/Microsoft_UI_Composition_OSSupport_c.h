// Flat C exports observed in Microsoft.UI.Composition.OSSupport.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef MICROSOFT_UI_COMPOSITION_OSSUPPORT_C_H
#define MICROSOFT_UI_COMPOSITION_OSSUPPORT_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: DbgPrompt_Onecore (ABI unverified)
// Export: ExUuidCreate (ABI unverified)
// Export: GetLastError_Winbase (ABI unverified)
// Export: InitializeSListHead_Winbase (ABI unverified)
// Export: InterlockedFlushSList_Winbase (ABI unverified)
// Export: InterlockedPopEntrySList_Winbase (ABI unverified)
// Export: InterlockedPushEntrySList_Winbase (ABI unverified)
// Export: KeGetCurrentIrql (ABI unverified)
// Export: NtQueryObject_Ntdll (ABI unverified)
// Export: NtQuerySystemInformation_Onecore (ABI unverified)
// Export: RaiseException_Winbase (ABI unverified)
// Export: RaiseFailFastException_Winbase (ABI unverified)
// Export: RtlDeleteElementGenericTable_Onecore (ABI unverified)
// Export: RtlEnumerateGenericTableWithoutSplaying_Onecore (ABI unverified)
// Export: RtlInitializeGenericTable_Onecore (ABI unverified)
// Export: RtlInsertElementGenericTable_Onecore (ABI unverified)
// Export: RtlLookupElementGenericTable_Onecore (ABI unverified)
// Export: EnableMouseInPointerForWindow (ABI unverified)
// Export: RtlNotifyFeatureUsage (ABI unverified)
// Export: RtlQueryFeatureConfiguration (ABI unverified)
// Export: SetLastError_Winbase (ABI unverified)
// Export: SetUnhandledExceptionFilter_Winbase (ABI unverified)
// Export: UnhandledExceptionFilter_Winbase (ABI unverified)
// Export: WideCharToMultiByte_Winbase (ABI unverified)
// Export: ZwOpenKey (ABI unverified)
// Export: ZwQueryValueKey (ABI unverified)
// Export: MicrosoftTelemetryAssertTriggeredArgs (ABI unverified)
// Export: MicrosoftTelemetryAssertTriggeredNoArgs (ABI unverified)
// Export: RecordFeatureError (ABI unverified)
// Export: RecordFeatureUsage (ABI unverified)
// Export: TerminateProcessOnMemoryExhaustion (ABI unverified)
// Export: TerminateProcessOnMemoryExhaustion_Lifted (ABI unverified)
// Export: GetFeatureEnabledState (ABI unverified)
// Export: GetFeatureVariant (ABI unverified)
// Export: SubscribeFeatureStateChangeNotification (ABI unverified)
// Export: UnsubscribeFeatureStateChangeNotification (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // MICROSOFT_UI_COMPOSITION_OSSUPPORT_C_H
