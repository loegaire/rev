
void Unwind_1400d8940(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  void *pvVar2;
  void *_Memory;
  
  lVar1 = *(longlong *)(param_2 + 0x2398);
  if (7 < *(ulonglong *)(lVar1 + 0x28)) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x2390);
    _Memory = pvVar2;
    if ((0xfff < *(ulonglong *)(lVar1 + 0x28) * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 7;
  *(undefined2 *)(lVar1 + 0x10) = 0;
  *(longlong *)(param_2 + 0x2248) = lVar1;
  return;
}

