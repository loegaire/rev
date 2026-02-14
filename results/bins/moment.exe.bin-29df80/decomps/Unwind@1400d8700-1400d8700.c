
void Unwind_1400d8700(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  undefined1 (*pauVar2) [16];
  void *_Memory;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)**(undefined8 **)(param_2 + 0x2390);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x23a0) + 0x68);
    if (plVar3 != plVar4) {
      do {
        if (7 < (ulonglong)plVar3[3]) {
          pvVar1 = (void *)*plVar3;
          _Memory = pvVar1;
          if ((0xfff < plVar3[3] * 2 + 2U) &&
             (_Memory = *(void **)((longlong)pvVar1 + -8),
             0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)_Memory)))) goto LAB_1400d882d;
          free(_Memory);
        }
        plVar3[2] = 0;
        plVar3[3] = 7;
        *(undefined2 *)plVar3 = 0;
        plVar3 = plVar3 + 5;
      } while (plVar3 != plVar4);
      plVar3 = (longlong *)**(undefined8 **)(param_2 + 0x2390);
    }
    plVar4 = plVar3;
    if ((0xfff < (ulonglong)
                 (*(longlong *)(*(longlong *)(param_2 + 0x23a0) + 0x70) - (longlong)plVar3)) &&
       (plVar4 = (longlong *)plVar3[-1],
       0x1f < (ulonglong)((longlong)plVar3 + (-8 - (longlong)plVar4)))) {
LAB_1400d882d:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(plVar4);
    pauVar2 = *(undefined1 (**) [16])(param_2 + 0x2390);
    *pauVar2 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar2[1] = 0;
  }
  return;
}

