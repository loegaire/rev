
void Unwind_1400e1220(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  void *_Memory;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x1d0) + 0x38);
  if (0xf < uVar1) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x1b0);
    _Memory = pvVar2;
    if ((0xfff < uVar1 + 1) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  lVar3 = *(longlong *)(param_2 + 0x1d0);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0xf;
  *(undefined1 *)(lVar3 + 0x20) = 0;
  return;
}

