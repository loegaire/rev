
void Unwind_1400dd810(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  void *_Memory;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x98);
  if (7 < *(ulonglong *)(lVar2 + 0x28)) {
    pvVar1 = (void *)**(longlong **)(param_2 + 0x80);
    _Memory = pvVar1;
    if (0xfff < *(ulonglong *)(lVar2 + 0x28) * 2 + 2) {
      _Memory = *(void **)((longlong)pvVar1 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      lVar2 = *(longlong *)(param_2 + 0x98);
    }
    free(_Memory);
  }
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 7;
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(longlong *)(param_2 + 0x78) = lVar2;
  return;
}

