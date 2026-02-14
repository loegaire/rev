
void FUN_1400dc160(undefined1 (*param_1) [16])

{
  void *pvVar1;
  void *_Memory;
  undefined1 auVar2 [16];
  
  pvVar1 = *(void **)*param_1;
  if (pvVar1 != (void *)0x0) {
    _Memory = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)param_1[1] - (longlong)pvVar1)) &&
       (_Memory = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    auVar2._0_12_ = ZEXT812(0);
    auVar2._12_4_ = 0;
    *param_1 = auVar2;
    *(undefined8 *)param_1[1] = 0;
  }
  return;
}

