
void Unwind_1400834f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  void *pvVar2;
  void *_Memory;
  
  bVar1 = *(byte *)(param_2 + 0x119f);
  if (0xf < *(ulonglong *)(param_2 + 1000)) {
    pvVar2 = *(void **)(param_2 + 0x3d0);
    _Memory = pvVar2;
    if ((0xfff < *(ulonglong *)(param_2 + 1000) + 1) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
  }
  *(undefined8 *)(param_2 + 0x3e0) = 0;
  *(longlong *)(param_2 + 0x698) = param_2 + 0xa80;
  *(byte *)(param_2 + 0x11c7) = bVar1 & 1;
  return;
}

