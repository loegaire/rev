
void Unwind_1400d8840(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  void *pvVar2;
  void *_Memory;
  longlong *plVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  
  pauVar1 = *(undefined1 (**) [16])(param_2 + 0x2360);
  pvVar2 = *(void **)*pauVar1;
  _Memory = *(void **)(param_2 + 0x2398);
  plVar3 = *(longlong **)(param_2 + 0x2390);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)((longlong)_Memory + 0x48) - (longlong)pvVar2)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1400d8937;
    free(pvVar4);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    *pauVar1 = auVar5;
    *(undefined8 *)pauVar1[1] = 0;
  }
  if (7 < *(ulonglong *)((longlong)_Memory + 0x28)) {
    pvVar2 = (void *)*plVar3;
    pvVar4 = pvVar2;
    if ((0xfff < *(ulonglong *)((longlong)_Memory + 0x28) * 2 + 2) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
LAB_1400d8937:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(pvVar4);
  }
  free(_Memory);
  return;
}

