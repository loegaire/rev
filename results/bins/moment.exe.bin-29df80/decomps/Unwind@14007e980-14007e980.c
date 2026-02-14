
void Unwind_14007e980(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *_Memory;
  
  puVar3 = *(undefined8 **)(param_2 + 0x740);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar3[2];
    puVar3[2] = 0;
    (**(code **)*puVar3)(puVar3,1);
    puVar3 = puVar1;
  }
  *(undefined8 *)(param_2 + 0x740) = 0;
  pvVar2 = *(void **)(param_2 + 0x720);
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    if ((0xfff < (ulonglong)(*(longlong *)(param_2 + 0x730) - (longlong)pvVar2)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    free(_Memory);
    *(undefined1 (*) [16])(param_2 + 0x720) = (undefined1  [16])0x0;
    *(undefined8 *)(param_2 + 0x730) = 0;
  }
  return;
}

