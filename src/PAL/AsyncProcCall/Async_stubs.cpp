//
// Copyright (c) 2017 The nanoFramework project contributors
// Portions Copyright (c) Microsoft Corporation.  All rights reserved.
// See LICENSE file in the project root for full license information.
//

#include <nanoPAL.h>

//--//

// continuation list
__nfweak void HAL_CONTINUATION::InitializeList()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_CONTINUATION::Uninitialize()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_CONTINUATION::InitializeCallback( HAL_CALLBACK_FPN EntryPoint, void* Argument )
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_CONTINUATION::Enqueue()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_CONTINUATION::Abort  ()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak bool HAL_CONTINUATION::Dequeue_And_Execute()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
    return TRUE;
}

__nfweak bool HAL_CONTINUATION::IsLinked()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
    return false;
}

//-//
// completion list

__nfweak void HAL_COMPLETION::InitializeList()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_COMPLETION::Uninitialize()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_COMPLETION::EnqueueTicks( uint64_t EventTimeTicks)
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_COMPLETION::EnqueueDelta( uint32_t uSecFromNow )
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_COMPLETION::Abort()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_COMPLETION::Execute()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_COMPLETION::DequeueAndExec()
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}

__nfweak void HAL_COMPLETION::WaitForInterrupts( uint64_t Expire, uint32_t sleepLevel, uint64_t wakeEvents )
{
    NATIVE_PROFILE_PAL_ASYNC_PROC_CALL();
}
