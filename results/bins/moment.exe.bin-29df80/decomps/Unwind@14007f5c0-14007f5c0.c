
void Unwind_14007f5c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *_Memory;
  
  lVar1 = *(longlong *)(param_2 + 0x1178);
  do {
    if (param_2 + 0x700 == lVar1) {
      return;
    }
    if (0xf < *(ulonglong *)(lVar1 + -8)) {
      pvVar2 = *(void **)(lVar1 + -0x20);
      _Memory = pvVar2;
      if ((0xfff < *(ulonglong *)(lVar1 + -8) + 1) &&
         (_Memory = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(_Memory);
    }
    *(undefined8 *)(lVar1 + -0x10) = 0;
    *(undefined8 *)(lVar1 + -8) = 0xf;
    *(undefined1 *)(lVar1 + -0x20) = 0;
    lVar1 = lVar1 + -0x20;
  } while( true );
}

