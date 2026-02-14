
void Unwind_1400847a0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *_Memory;
  
  bVar1 = *(byte *)(param_2 + 0x1189);
  uVar2 = *(undefined8 *)(param_2 + 0x1e8);
  if (0xf < *(ulonglong *)(param_2 + 0x568)) {
    pvVar3 = *(void **)(param_2 + 0x550);
    _Memory = pvVar3;
    if ((0xfff < *(ulonglong *)(param_2 + 0x568) + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0x560) = 0;
  *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x408);
  *(undefined8 *)(param_2 + 0x1d8) = uVar2;
  *(byte *)(param_2 + 0x1188) = bVar1 & 1;
  return;
}

