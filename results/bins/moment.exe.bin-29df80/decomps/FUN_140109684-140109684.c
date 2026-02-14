
void FUN_140109684(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14012a9c0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_1401096e9:
                    /* WARNING: Could not recover jumptable at 0x0001401096f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14012a9c0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_140127000;
      goto LAB_1401096e9;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_14012a9b8,(PSRWLOCK)&DAT_14012a9c0,0xffffffff,0);
  } while( true );
}

