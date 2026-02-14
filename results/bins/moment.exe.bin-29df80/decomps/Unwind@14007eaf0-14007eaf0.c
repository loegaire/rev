
void Unwind_14007eaf0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x1148);
  if (param_2 + 0x700 != lVar2) {
    do {
      if (0xf < *(ulonglong *)(lVar2 + -8)) {
        pvVar1 = *(void **)(lVar2 + -0x20);
        _Memory = pvVar1;
        if ((0xfff < *(ulonglong *)(lVar2 + -8) + 1) &&
           (_Memory = *(void **)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(_Memory);
      }
      *(undefined8 *)(lVar2 + -0x10) = 0;
      *(undefined8 *)(lVar2 + -8) = 0xf;
      *(undefined1 *)(lVar2 + -0x20) = 0;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != param_2 + 0x700);
  }
  return;
}

