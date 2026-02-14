
void Unwind_140084600(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *_Memory;
  
  bVar1 = *(byte *)(param_2 + 0x118b);
  uVar2 = *(undefined8 *)(param_2 + 0x200);
  if (0xf < *(ulonglong *)(param_2 + 0x588)) {
    pvVar3 = *(void **)(param_2 + 0x570);
    _Memory = pvVar3;
    if ((0xfff < *(ulonglong *)(param_2 + 0x588) + 1) &&
       (_Memory = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0x580) = 0;
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x428);
  *(undefined8 *)(param_2 + 0x1f0) = uVar2;
  *(byte *)(param_2 + 0x118a) = bVar1 & 1;
  return;
}

