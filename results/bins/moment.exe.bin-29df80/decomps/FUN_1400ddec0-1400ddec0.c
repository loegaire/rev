
void FUN_1400ddec0(undefined1 (*param_1) [16])

{
  void *pvVar1;
  void *_Memory;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  
  plVar2 = *(longlong **)*param_1;
  if (plVar2 != (longlong *)0x0) {
    plVar3 = *(longlong **)(*param_1 + 8);
    if (plVar2 != plVar3) {
      do {
        if (7 < (ulonglong)plVar2[3]) {
          pvVar1 = (void *)*plVar2;
          _Memory = pvVar1;
          if ((0xfff < plVar2[3] * 2 + 2U) &&
             (_Memory = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) goto LAB_1400ddf9c;
          free(_Memory);
        }
        plVar2[2] = 0;
        plVar2[3] = 7;
        *(undefined2 *)plVar2 = 0;
        plVar2 = plVar2 + 5;
      } while (plVar2 != plVar3);
      plVar2 = *(longlong **)*param_1;
    }
    plVar3 = plVar2;
    if ((0xfff < (ulonglong)(*(longlong *)param_1[1] - (longlong)plVar2)) &&
       (plVar3 = (longlong *)plVar2[-1],
       0x1f < (ulonglong)((longlong)plVar2 + (-8 - (longlong)plVar3)))) {
LAB_1400ddf9c:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar3);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    *param_1 = auVar4;
    *(undefined8 *)param_1[1] = 0;
  }
  return;
}

