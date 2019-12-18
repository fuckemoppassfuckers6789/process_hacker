#include <dltmgr.h>

VOID UpdateDelta64(PPH_UINT64_DELTA DltMgr, LONGLONG NewValue)
{
    DltMgr->Delta = NewValue - DltMgr->Value;
    DltMgr->Value = NewValue;
}

VOID UpdateDelta32(PPH_UINT32_DELTA DltMgr, ULONG NewValue)
{
    DltMgr->Delta = NewValue - DltMgr->Value;
    DltMgr->Value = NewValue;
}

VOID UpdateDeltaUint(PPH_UINTPTR_DELTA DltMgr, SIZE_T NewValue)
{
    DltMgr->Delta = NewValue - DltMgr->Value;
    DltMgr->Value = NewValue;
}
