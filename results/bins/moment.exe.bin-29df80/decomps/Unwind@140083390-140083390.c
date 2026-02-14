
void Unwind_140083390(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  
  lVar4 = 0x3c0;
  do {
    uVar1 = *(ulonglong *)(param_2 + 0x6f8 + lVar4);
    if (0xf < uVar1) {
      pvVar2 = *(void **)(param_2 + 0x6e0 + lVar4);
      pvVar3 = pvVar2;
      if ((0xfff < uVar1 + 1) &&
         (pvVar3 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar3);
    }
    *(undefined8 *)(param_2 + 0x6f0 + lVar4) = 0;
    *(undefined8 *)(param_2 + 0x6f8 + lVar4) = 0xf;
    *(undefined1 *)(param_2 + 0x6e0 + lVar4) = 0;
    uVar1 = *(ulonglong *)(param_2 + 0x6d8 + lVar4);
    if (0xf < uVar1) {
      pvVar2 = *(void **)(param_2 + 0x6c0 + lVar4);
      pvVar3 = pvVar2;
      if ((0xfff < uVar1 + 1) &&
         (pvVar3 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar3);
    }
    *(undefined8 *)(param_2 + 0x6d0 + lVar4) = 0;
    *(undefined8 *)(param_2 + 0x6d8 + lVar4) = 0xf;
    *(undefined1 *)(param_2 + 0x6c0 + lVar4) = 0;
    lVar4 = lVar4 + -0x40;
    if (lVar4 == 0) {
      *(undefined1 *)(param_2 + 0x119f) = 0;
      return;
    }
  } while( true );
}

