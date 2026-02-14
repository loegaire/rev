
void Unwind_1400dd930(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  void *pvVar2;
  void *pvVar3;
  void *_Memory;
  undefined1 auVar4 [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_2 + 0x68);
  pvVar2 = *(void **)*pauVar1;
  _Memory = *(void **)(param_2 + 0x98);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = pvVar2;
    if (0xfff < (ulonglong)(*(longlong *)((longlong)_Memory + 0x48) - (longlong)pvVar2)) {
      pvVar3 = *(void **)((longlong)pvVar2 + -8);
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3))) goto LAB_1400dda20;
      _Memory = *(void **)(param_2 + 0x98);
    }
    free(pvVar3);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    *pauVar1 = auVar4;
    *(undefined8 *)pauVar1[1] = 0;
  }
  if (7 < *(ulonglong *)((longlong)_Memory + 0x28)) {
    pvVar2 = (void *)**(longlong **)(param_2 + 0x80);
    pvVar3 = pvVar2;
    if ((0xfff < *(ulonglong *)((longlong)_Memory + 0x28) * 2 + 2) &&
       (pvVar3 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
LAB_1400dda20:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar3);
    _Memory = *(void **)(param_2 + 0x98);
  }
  free(_Memory);
  return;
}

