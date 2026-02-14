
void FUN_1400dc220(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    pvVar2 = *(void **)(lVar1 + 0x38);
    if (pvVar2 != (void *)0x0) {
      pvVar3 = pvVar2;
      if ((0xfff < (ulonglong)(*(longlong *)(lVar1 + 0x48) - (longlong)pvVar2)) &&
         (pvVar3 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) goto LAB_1400dc300;
      free(pvVar3);
      auVar4._0_12_ = ZEXT812(0);
      auVar4._12_4_ = 0;
      *(undefined1 (*) [16])(lVar1 + 0x38) = auVar4;
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    if (7 < *(ulonglong *)(lVar1 + 0x28)) {
      pvVar2 = *(void **)(lVar1 + 0x10);
      pvVar3 = pvVar2;
      if ((0xfff < *(ulonglong *)(lVar1 + 0x28) * 2 + 2) &&
         (pvVar3 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
LAB_1400dc300:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar3);
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 7;
    *(undefined2 *)(lVar1 + 0x10) = 0;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      free(*(void **)(param_1 + 8));
      return;
    }
  }
  return;
}

