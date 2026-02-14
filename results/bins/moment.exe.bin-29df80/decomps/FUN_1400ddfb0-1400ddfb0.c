
void FUN_1400ddfb0(undefined1 (*param_1) [16])

{
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  
  if ((param_1 != (undefined1 (*) [16])0x0) && (pvVar1 = *(void **)*param_1, pvVar1 != (void *)0x0))
  {
    pvVar2 = *(void **)(*param_1 + 8);
    if (pvVar1 != pvVar2) {
      do {
        FUN_1400dc310((longlong)pvVar1);
        pvVar1 = (void *)((longlong)pvVar1 + 0xb0);
      } while (pvVar1 != pvVar2);
      pvVar1 = *(void **)*param_1;
    }
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)param_1[1] - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar2);
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    *param_1 = auVar3;
    *(undefined8 *)param_1[1] = 0;
  }
  return;
}

