
void Unwind_140016dd0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  void *_Memory;
  longlong lVar3;
  
  lVar3 = 0xac8;
  do {
    uVar1 = *(ulonglong *)(param_2 + 0x128 + lVar3);
    if (0xf < uVar1) {
      pvVar2 = *(void **)(param_2 + 0x110 + lVar3);
      _Memory = pvVar2;
      if ((0xfff < uVar1 + 1) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *(undefined8 *)(param_2 + 0x120 + lVar3) = 0;
    *(undefined8 *)(param_2 + 0x128 + lVar3) = 0xf;
    *(undefined1 *)(param_2 + 0x110 + lVar3) = 0;
    lVar3 = lVar3 + -0x28;
    if (lVar3 == -0x28) {
      FUN_1400bfe30((longlong *)(param_2 + 0x1700));
      *(undefined1 *)(param_2 + 5999) = 0;
      return;
    }
  } while( true );
}

