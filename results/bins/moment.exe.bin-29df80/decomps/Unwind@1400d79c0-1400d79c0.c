
void Unwind_1400d79c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  void *pvVar5;
  longlong *_Memory;
  undefined1 auVar6 [64];
  
  lVar1 = *(longlong *)(param_2 + 0x2370);
  puVar2 = *(undefined8 **)(param_2 + 0x2378);
  _Memory = *(longlong **)(param_2 + 0x2380);
  if (*(void **)(param_2 + 0x2368) != (void *)0x0) {
    free(*(void **)(param_2 + 0x2368));
  }
  if (lVar1 != 0) {
    _Memory[1] = 0;
    *puVar2 = 0;
    auVar6 = ZEXT1264(ZEXT812(0));
    do {
      plVar3 = (longlong *)*_Memory;
      pvVar4 = (void *)_Memory[7];
      if (pvVar4 != (void *)0x0) {
        pvVar5 = pvVar4;
        if ((0xfff < (ulonglong)(_Memory[9] - (longlong)pvVar4)) &&
           (pvVar5 = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5)))) goto LAB_1400d7af8;
        free(pvVar5);
        *(undefined1 (*) [16])(_Memory + 7) = auVar6._0_16_;
        _Memory[9] = 0;
      }
      if (7 < (ulonglong)_Memory[5]) {
        pvVar4 = (void *)_Memory[2];
        pvVar5 = pvVar4;
        if ((0xfff < _Memory[5] * 2 + 2U) &&
           (pvVar5 = *(void **)((longlong)pvVar4 + -8),
           0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar5)))) {
LAB_1400d7af8:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar5);
      }
      free(_Memory);
      _Memory = plVar3;
    } while (plVar3 != (longlong *)0x0);
  }
  return;
}

