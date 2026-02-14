
void Unwind_140083b80(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *_Memory;
  
  bVar1 = *(byte *)(param_2 + 0x1198);
  uVar2 = *(undefined8 *)(param_2 + 0x298);
  if (0xf < *(ulonglong *)(param_2 + 0x2a0)) {
    pvVar3 = *(void **)(param_2 + 0x4f0);
    _Memory = pvVar3;
    if ((0xfff < *(ulonglong *)(param_2 + 0x2a0) + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0x290) = uVar2;
  *(byte *)(param_2 + 0x1197) = bVar1 & 1;
  return;
}

