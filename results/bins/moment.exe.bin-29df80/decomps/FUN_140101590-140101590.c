
void FUN_140101590(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (DAT_14012b058 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14012b058 + 0x2c);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    puVar3 = DAT_14012b058;
    if (*piVar1 == 0) {
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar3[2];
        puVar3[2] = 0;
        (**(code **)*puVar3)(puVar3,1);
        puVar3 = puVar2;
      }
    }
  }
  DAT_14012b058 = (undefined8 *)0x0;
  if ((DAT_14012b078 != (longlong *)0x0) &&
     (puVar3 = (undefined8 *)(**(code **)(*DAT_14012b078 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140101613. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1,*(code **)*puVar3);
    return;
  }
  return;
}

