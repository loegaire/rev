
void Unwind_14007ea70(void)

{
  undefined8 *puVar1;
  
  if (DAT_14012aa78 != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(*DAT_14012aa78 + 0x10))();
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}

