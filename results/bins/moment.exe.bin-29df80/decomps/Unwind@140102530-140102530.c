
void Unwind_140102530(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *_Memory;
  undefined1 auVar4 [16];
  
  puVar3 = *(undefined8 **)(param_2 + 0x78);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[2];
    puVar3[2] = 0;
    (**(code **)*puVar3)(puVar3,1);
    puVar3 = puVar1;
  }
  *(undefined8 *)(param_2 + 0x78) = 0;
  pvVar2 = *(void **)(param_2 + 0x58);
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_2 + 0x68) - (longlong)pvVar2)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 0x58) = auVar4;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  return;
}

