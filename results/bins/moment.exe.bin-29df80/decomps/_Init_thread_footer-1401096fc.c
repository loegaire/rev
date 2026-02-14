
/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14012a9c0);
  uVar1 = (ulonglong)_tls_index;
  DAT_140127000 = DAT_140127000 + 1;
  *param_1 = DAT_140127000;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_140127000;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14012a9c0);
                    /* WARNING: Could not recover jumptable at 0x00014010975e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_14012a9b8);
  return;
}

