
void Unwind_140084e40(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *_Memory;
  longlong lVar3;
  
  lVar3 = 0xa20;
  do {
    uVar1 = *(ulonglong *)(param_2 + 0x718 + lVar3);
    if (0xf < uVar1) {
      pvVar2 = *(void **)(param_2 + 0x700 + lVar3);
      _Memory = pvVar2;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *(undefined8 *)(param_2 + 0x710 + lVar3) = 0;
    *(undefined8 *)(param_2 + 0x718 + lVar3) = 0xf;
    *(undefined1 *)(param_2 + 0x700 + lVar3) = 0;
    lVar3 = lVar3 + -0x20;
    if (lVar3 == -0x20) {
      return;
    }
  } while( true );
}

