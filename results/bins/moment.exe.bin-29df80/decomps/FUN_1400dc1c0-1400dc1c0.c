
void FUN_1400dc1c0(longlong param_1)

{
  void *pvVar1;
  void *_Memory;
  undefined1 auVar2 [16];
  
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x18) - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    auVar2._0_12_ = ZEXT812(0);
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 8) = auVar2;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

