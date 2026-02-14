
void Unwind_1400d7b70(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  void *_Memory;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x23a0) + 0x90);
  if (7 < uVar1) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x2398);
    _Memory = pvVar2;
    if ((0xfff < uVar1 * 2 + 2) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  lVar3 = *(longlong *)(param_2 + 0x23a0);
  *(undefined8 *)(lVar3 + 0x88) = 0;
  *(undefined8 *)(lVar3 + 0x90) = 7;
  *(undefined2 *)(lVar3 + 0x78) = 0;
  return;
}

