
void Unwind_1400d67e0(undefined8 param_1,longlong param_2)

{
  longlong *_Memory;
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  longlong *_Memory_00;
  undefined1 auVar4 [64];
  
  _Memory = *(longlong **)(param_2 + 0x23a0);
  *(undefined8 *)_Memory[1] = 0;
  if ((longlong *)*_Memory != (longlong *)0x0) {
    auVar4 = ZEXT1264(ZEXT812(0));
    _Memory_00 = (longlong *)*_Memory;
    do {
      plVar1 = (longlong *)*_Memory_00;
      pvVar2 = (void *)_Memory_00[7];
      if (pvVar2 != (void *)0x0) {
        pvVar3 = pvVar2;
        if ((0xfff < (ulonglong)(_Memory_00[9] - (longlong)pvVar2)) &&
           (pvVar3 = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) goto LAB_1400d6904;
        free(pvVar3);
        *(undefined1 (*) [16])(_Memory_00 + 7) = auVar4._0_16_;
        _Memory_00[9] = 0;
      }
      if (7 < (ulonglong)_Memory_00[5]) {
        pvVar2 = (void *)_Memory_00[2];
        pvVar3 = pvVar2;
        if ((0xfff < _Memory_00[5] * 2 + 2U) &&
           (pvVar3 = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar3)))) {
LAB_1400d6904:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar3);
      }
      free(_Memory_00);
      _Memory_00 = plVar1;
    } while (plVar1 != (longlong *)0x0);
  }
  free(_Memory);
  return;
}

