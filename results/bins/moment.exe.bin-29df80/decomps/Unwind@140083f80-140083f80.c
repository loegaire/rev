
void Unwind_140083f80(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *_Memory;
  
  bVar1 = *(byte *)(param_2 + 0x1193);
  uVar2 = *(undefined8 *)(param_2 + 0x260);
  if (0xf < *(ulonglong *)(param_2 + 0x608)) {
    pvVar3 = *(void **)(param_2 + 0x5f0);
    _Memory = pvVar3;
    if ((0xfff < *(ulonglong *)(param_2 + 0x608) + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0x600) = 0;
  *(undefined8 *)(param_2 + 600) = *(undefined8 *)(param_2 + 0x4a8);
  *(undefined8 *)(param_2 + 0x250) = uVar2;
  *(byte *)(param_2 + 0x1192) = bVar1 & 1;
  return;
}

