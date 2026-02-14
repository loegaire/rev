
void Unwind_1400d75e0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  void *_Memory;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x23a0) + 0x28);
  if (7 < uVar1) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x2360);
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
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 7;
  *(undefined2 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x2380) = *(undefined8 *)(param_2 + 0x2358);
  *(undefined8 *)(param_2 + 0x2378) = *(undefined8 *)(param_2 + 0x2398);
  *(undefined8 *)(param_2 + 0x2370) = *(undefined8 *)(param_2 + 0x2390);
  *(longlong *)(param_2 + 0x2368) = lVar3;
  return;
}

